/********************************************************************************
** Form generated from reading UI file 'figuresscene.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIGURESSCENE_H
#define UI_FIGURESSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "shapeview.h"

QT_BEGIN_NAMESPACE

class Ui_FiguresSceneMdi
{
public:
    ShapeView *graphicsView;

    void setupUi(QWidget *FiguresSceneMdi)
    {
        if (FiguresSceneMdi->objectName().isEmpty())
            FiguresSceneMdi->setObjectName(QString::fromUtf8("FiguresSceneMdi"));
        FiguresSceneMdi->setEnabled(true);
        FiguresSceneMdi->setMinimumSize(QSize(270, 273));
        FiguresSceneMdi->setMaximumSize(QSize(270, 273));
        graphicsView = new ShapeView(FiguresSceneMdi);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 251, 251));
        graphicsView->setMinimumSize(QSize(251, 251));
        graphicsView->setMaximumSize(QSize(251, 251));
        graphicsView->setDragMode(QGraphicsView::NoDrag);

        retranslateUi(FiguresSceneMdi);

        QMetaObject::connectSlotsByName(FiguresSceneMdi);
    } // setupUi

    void retranslateUi(QWidget *FiguresSceneMdi)
    {
        FiguresSceneMdi->setWindowTitle(QApplication::translate("FiguresSceneMdi", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FiguresSceneMdi: public Ui_FiguresSceneMdi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIGURESSCENE_H
