/********************************************************************************
** Form generated from reading UI file 'mainwindowtesting.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWTESTING_H
#define UI_MAINWINDOWTESTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowTesting
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowTesting)
    {
        if (MainWindowTesting->objectName().isEmpty())
            MainWindowTesting->setObjectName(QStringLiteral("MainWindowTesting"));
        MainWindowTesting->resize(570, 296);
        centralwidget = new QWidget(MainWindowTesting);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 80, 59, 15));
        MainWindowTesting->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowTesting);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 570, 20));
        MainWindowTesting->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowTesting);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowTesting->setStatusBar(statusbar);

        retranslateUi(MainWindowTesting);

        QMetaObject::connectSlotsByName(MainWindowTesting);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowTesting)
    {
        MainWindowTesting->setWindowTitle(QApplication::translate("MainWindowTesting", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindowTesting", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowTesting: public Ui_MainWindowTesting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWTESTING_H
