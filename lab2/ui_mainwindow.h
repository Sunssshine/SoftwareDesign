/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openAction;
    QAction *saveAction;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QMdiArea *mdiArea;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QLineEdit *radius_2;
    QLineEdit *radius_1;
    QComboBox *chooseObject;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *lineEditLength;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditRadius;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditText;
    QVBoxLayout *verticalLayout_4;
    QPushButton *newSceneButton;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1146, 772);
        MainWindow->setMinimumSize(QSize(800, 570));
        openAction = new QAction(MainWindow);
        openAction->setObjectName(QString::fromUtf8("openAction"));
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName(QString::fromUtf8("saveAction"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(919, 0));
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));

        verticalLayout_6->addWidget(mdiArea);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(415, 0));
        groupBox->setMaximumSize(QSize(415, 16777215));
        radius_2 = new QLineEdit(groupBox);
        radius_2->setObjectName(QString::fromUtf8("radius_2"));
        radius_2->setGeometry(QRect(160, 70, 140, 25));
        radius_2->setMinimumSize(QSize(140, 25));
        radius_2->setMaximumSize(QSize(140, 16777215));
        radius_1 = new QLineEdit(groupBox);
        radius_1->setObjectName(QString::fromUtf8("radius_1"));
        radius_1->setGeometry(QRect(10, 70, 140, 25));
        radius_1->setMinimumSize(QSize(140, 25));
        radius_1->setMaximumSize(QSize(140, 16777215));
        chooseObject = new QComboBox(groupBox);
        chooseObject->addItem(QString());
        chooseObject->addItem(QString());
        chooseObject->addItem(QString());
        chooseObject->addItem(QString());
        chooseObject->addItem(QString());
        chooseObject->addItem(QString());
        chooseObject->setObjectName(QString::fromUtf8("chooseObject"));
        chooseObject->setGeometry(QRect(10, 30, 252, 23));

        horizontalLayout->addWidget(groupBox);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));

        horizontalLayout->addLayout(verticalLayout_10);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 10));
        label->setMaximumSize(QSize(140, 16777215));

        verticalLayout_3->addWidget(label);

        lineEditLength = new QLineEdit(centralwidget);
        lineEditLength->setObjectName(QString::fromUtf8("lineEditLength"));
        lineEditLength->setMinimumSize(QSize(140, 25));
        lineEditLength->setMaximumSize(QSize(140, 16777215));

        verticalLayout_3->addWidget(lineEditLength);


        gridLayout->addLayout(verticalLayout_3, 3, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditRadius = new QLineEdit(centralwidget);
        lineEditRadius->setObjectName(QString::fromUtf8("lineEditRadius"));
        lineEditRadius->setMinimumSize(QSize(140, 25));
        lineEditRadius->setMaximumSize(QSize(140, 16777215));

        verticalLayout->addWidget(lineEditRadius);


        gridLayout->addLayout(verticalLayout, 6, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 10));
        label_3->setMaximumSize(QSize(140, 16777215));

        verticalLayout_2->addWidget(label_3);

        lineEditText = new QLineEdit(centralwidget);
        lineEditText->setObjectName(QString::fromUtf8("lineEditText"));
        lineEditText->setMinimumSize(QSize(140, 25));
        lineEditText->setMaximumSize(QSize(140, 16777215));

        verticalLayout_2->addWidget(lineEditText);


        gridLayout->addLayout(verticalLayout_2, 3, 3, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        newSceneButton = new QPushButton(centralwidget);
        newSceneButton->setObjectName(QString::fromUtf8("newSceneButton"));
        newSceneButton->setMinimumSize(QSize(0, 25));
        newSceneButton->setMaximumSize(QSize(140, 16777215));

        verticalLayout_4->addWidget(newSceneButton);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 25));
        pushButton->setMaximumSize(QSize(140, 16777215));

        verticalLayout_4->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout_4, 6, 3, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout_6->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_6);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1146, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addSeparator();
        menu->addAction(openAction);
        menu->addAction(saveAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        openAction->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        saveAction->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\244\320\270\320\263\321\203\321\200\321\213", nullptr));
        radius_1->setText(QString());
        chooseObject->setItemText(0, QApplication::translate("MainWindow", "\320\236\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        chooseObject->setItemText(1, QApplication::translate("MainWindow", "\320\255\320\273\320\273\320\270\320\277\321\201", nullptr));
        chooseObject->setItemText(2, QApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202", nullptr));
        chooseObject->setItemText(3, QApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202 \320\262 \321\215\320\273\320\273\320\270\320\277\321\201\320\265", nullptr));
        chooseObject->setItemText(4, QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\320\271 \321\202\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272 \321\201 \321\202\320\265\320\272\321\201\321\202\320\276\320\274", nullptr));
        chooseObject->setItemText(5, QApplication::translate("MainWindow", "\320\242\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));

        label->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 \321\201\321\202\320\276\321\200\320\276\320\275\321\213", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202", nullptr));
        newSceneButton->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\206\320\265\320\275\320\260", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\320\265\321\200\321\210\320\270\320\275\321\203", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
