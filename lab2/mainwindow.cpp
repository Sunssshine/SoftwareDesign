#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "figuresscene.h"
#include "figuresscenemdi.h"

#include <QMdiSubWindow>
#include <QMdiArea>
#include <QGraphicsView>
#include <QFileDialog>

#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Лабораторная №2");

//    this->setFixedSize(QSize(this->width(), this->height()));

    auto newWindow = new FiguresSceneMdi(ui->mdiArea);
    auto newFiguresScene = ui->mdiArea->addSubWindow(newWindow);
//    newFiguresScene->setFixedSize(QSize(400, 400));
    newFiguresScene->setWindowTitle("Сцена");
}

FiguresScene *MainWindow::getCurrentScene() {
    auto currentSubwindow = ui->mdiArea->currentSubWindow();
    if (currentSubwindow) {
        auto currentScene = currentSubwindow->widget();
        auto currentWindow = dynamic_cast<FiguresSceneMdi*>(currentScene);

        return currentWindow->figureScene;
    } else {
        return nullptr;
    }
}
QList<FiguresScene *> MainWindow::getAllScenes() {
    auto scenes = ui->mdiArea->subWindowList();
    QList<FiguresScene*> result;

    for (auto scene : scenes) {
        auto scene_as_widget = scene->widget();
        auto shape_scene_mdi_window = dynamic_cast<FiguresSceneMdi*>(scene_as_widget);

        result.push_back(shape_scene_mdi_window->figureScene);
    }

    return result;
}

MainWindow::~MainWindow()
{
    delete ui;
}

std::string get_figure_type(int index){
    switch (index) {
    case 0:
        return "circle";
    case 1:
        return "ellipse";
    case 2:
        return "text";
    case 3:
        return "textInEllipse";
    case 4:
        return "triangle";
    case 5:
        return "triangleText";
    case 6:
        return "triangleWithCorners";
    }

}

void MainWindow::on_chooseObject_currentIndexChanged(int index){

    auto scenes = getAllScenes();
    auto figure = QString::fromStdString(get_figure_type(index));
    for (auto scene : scenes)
        scene->setFigureType(figure);
}

void MainWindow::on_radius_1_textChanged(const QString &arg1){
    auto scenes = getAllScenes();
    for (auto scene : scenes) {
        scene->setFigureRadius1(arg1.toInt());
    }
}

void MainWindow::on_radius_2_textChanged(const QString &arg1){
    auto scenes = getAllScenes();
    for (auto scene : scenes) {
        scene->setFigureRadius2(arg1.toInt());
    }
}

void MainWindow::on_lineEditText_textChanged(const QString &arg1)
{
    auto scenes = getAllScenes();
    for (auto scene : scenes) {
        scene->setFigureText(arg1);
    }
}

void MainWindow::on_pushButton_clicked()
{
    auto scene = getCurrentScene();
    scene->popFigure();
}

void MainWindow::on_newSceneButton_clicked()
{
    auto newWindow = new FiguresSceneMdi(ui->mdiArea);
    auto newFiguresScene = ui->mdiArea->addSubWindow(newWindow);
//    newFiguresScene->setFixedSize(QSize(3800, 380));
    newFiguresScene->setWindowTitle("Сцена");

    newWindow->figureScene->setFigureType(
                QString::fromStdString(get_figure_type(ui->chooseObject->currentIndex())));

    newWindow->figureScene->setFigureRadius1(ui->radius_1->displayText().toInt());
    newWindow->figureScene->setFigureRadius2(ui->radius_2->displayText().toInt());

    newWindow->figureScene->setFigureText(ui->lineEditText->displayText());

//    setFigureText(int fontSz);


    newWindow->show();
}

void MainWindow::on_openAction_triggered()
{
    auto currentScene = getCurrentScene();
        if (!currentScene) {
            return;
        }

        auto file_name = QFileDialog::getOpenFileName(this, "Открыть из файла", QString(), "Text File(*.txt)");

        if (file_name.isEmpty()) {
            return;
        }

        QFile file(file_name);

        if (file.open(QIODevice::ReadOnly)) {
            QDataStream input(&file);
            currentScene->deserialize(input);
        }

        file.close();
}

void MainWindow::on_saveAction_triggered()
{
    auto currentScene = getCurrentScene();
        if (!currentScene) {
            return;
        }

        auto file_name = QFileDialog::getSaveFileName(this, "Сохранить в файл", QString(), "Text File(*.txt)");

        if (file_name.isEmpty()) {
            return;
        }

        QFile file(file_name);

        if (file.open(QIODevice::WriteOnly)) {
            QDataStream output(&file);
            currentScene->serialize(output);
        }

        file.close();
}
