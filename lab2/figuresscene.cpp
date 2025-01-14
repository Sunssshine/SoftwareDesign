#include "figuresscene.h"
//#include "righttriangle.h"
//#include "righttriangleroundedcorners.h"
#include "Text.h"
#include "Shape.h"
//#include "triangletext.h"
#include "Circle.h"
#include "Ellipse.h"
#include "TextInEllipse.h"
#include <QMouseEvent>
#include <QGraphicsSceneEvent>
#include "mainwindow.h"

FiguresScene::FiguresScene(QObject *parent)
    : QGraphicsScene(parent) {
    setItemIndexMethod(QGraphicsScene::NoIndex);
}

FiguresScene::~FiguresScene(){
}

void FiguresScene::setFigureType(QString newFigureType) {
     typeFigure = newFigureType;
}

void FiguresScene::setFigureRadius1(int newRadius) {
    if (newRadius <= 0) {
        newRadius = 30;
    }
    radius_1 = newRadius;
}

void FiguresScene::setFigureRadius2(int newRadius) {
    if (newRadius <= 0) {
        newRadius = 40;
    }
    radius_2 = newRadius;
}


void FiguresScene::setFigureFontSize(int fontSz) {
    if (fontSz <= 12)
        fontSz = 12;
    fontSize = fontSz;
}

void FiguresScene::setFigureText(QString newText) {
    if (!newText.size()) {
        newText = "\"\"";
    }
    figureText = newText;
}
void FiguresScene::popFigure() {
    try {
        auto item = this->itemAt(figuresQueue.front()->getCentCoords().x, figuresQueue.front()->getCentCoords().y, QTransform::fromScale(1, 1));
        this->removeItem(item);
        figuresQueue.pop();
        figuresCount--;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

}
void FiguresScene::serialize(QDataStream &stream) {
    stream << figuresQueue.size();
    while (figuresQueue.size()) {
        Shape *fig = figuresQueue.front();
        stream << *fig;
        popFigure();
    }

}
void FiguresScene::clearSFiguresScene() {
    this->clear();

    while (figuresQueue.size()) {
        figuresQueue.pop();
    }
}
void FiguresScene::deserialize(QDataStream &stream) {
    std::size_t figuresToLoadCount;
    stream >> figuresToLoadCount;

    if (figuresToLoadCount > 0) {
        clearSFiguresScene();
    } else {
        return;
    }

    for (size_t i = 0; i < figuresToLoadCount; i++) {
       Shape* figure = Shape::loadFigure(stream);

    	
        if (figure) {
            figuresCount++;
            figuresQueue.push(figure);
            this->addItem(figure);
        }
    }
}

QString FiguresScene::getFigureType() const {
    return typeFigure;
}

void FiguresScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event) {
    auto item = this->itemAt(event->scenePos(), QTransform::fromScale(1, 1));
    if(!item) {
        auto type = this->getFigureType().toStdString();
        if (type == "text") {
            shape = new Text(event->scenePos().rx(),event->scenePos().ry(),this->figureText, this->fontSize);
        } else if (type == "circle") {
            shape = new Circle(event->scenePos().rx(),event->scenePos().ry(),this->radius_1);
        } else if (type == "ellipse") {
            shape = new Ellipse(event->scenePos().rx(), event->scenePos().ry(), this->radius_1, this->radius_2);
        } else if (type == "textInEllipse") {
            shape = new TextInEllipse(event->scenePos().rx(), event->scenePos().ry(), this->radius_1, this->radius_2, this->figureText, this->fontSize);
        }

        shape->setPos(event->scenePos());
        this->addItem(shape);
        figuresCount++;
        figuresQueue.push(shape);
    }
}
