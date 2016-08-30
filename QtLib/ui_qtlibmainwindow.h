/********************************************************************************
** Form generated from reading UI file 'qtlibmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTLIBMAINWINDOW_H
#define UI_QTLIBMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "Testing/Painter/mywidget.h"

QT_BEGIN_NAMESPACE

class Ui_QtLibMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_QThreadPool;
    QPushButton *pushButton_AdaptFontSize;
    MyWidget *widget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QtLibMainWindow)
    {
        if (QtLibMainWindow->objectName().isEmpty())
            QtLibMainWindow->setObjectName(QStringLiteral("QtLibMainWindow"));
        QtLibMainWindow->resize(800, 600);
        centralwidget = new QWidget(QtLibMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_QThreadPool = new QPushButton(centralwidget);
        pushButton_QThreadPool->setObjectName(QStringLiteral("pushButton_QThreadPool"));
        pushButton_QThreadPool->setGeometry(QRect(40, 20, 80, 23));
        pushButton_AdaptFontSize = new QPushButton(centralwidget);
        pushButton_AdaptFontSize->setObjectName(QStringLiteral("pushButton_AdaptFontSize"));
        pushButton_AdaptFontSize->setGeometry(QRect(40, 50, 121, 23));
        widget = new MyWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 100, 461, 121));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 310, 321, 101));
        QtLibMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QtLibMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        QtLibMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(QtLibMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        QtLibMainWindow->setStatusBar(statusbar);

        retranslateUi(QtLibMainWindow);

        QMetaObject::connectSlotsByName(QtLibMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QtLibMainWindow)
    {
        QtLibMainWindow->setWindowTitle(QApplication::translate("QtLibMainWindow", "MainWindow", 0));
        pushButton_QThreadPool->setText(QApplication::translate("QtLibMainWindow", "QThreadPool", 0));
        pushButton_AdaptFontSize->setText(QApplication::translate("QtLibMainWindow", "AdaptFontSize", 0));
        label->setText(QApplication::translate("QtLibMainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class QtLibMainWindow: public Ui_QtLibMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTLIBMAINWINDOW_H
