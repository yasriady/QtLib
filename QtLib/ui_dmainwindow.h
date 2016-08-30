/********************************************************************************
** Form generated from reading UI file 'dmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DMAINWINDOW_H
#define UI_DMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DMainWindow
{
public:
    QWidget *centralwidget;

    void setupUi(QMainWindow *DMainWindow)
    {
        if (DMainWindow->objectName().isEmpty())
            DMainWindow->setObjectName(QStringLiteral("DMainWindow"));
        DMainWindow->resize(800, 600);
        centralwidget = new QWidget(DMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        DMainWindow->setCentralWidget(centralwidget);

        retranslateUi(DMainWindow);

        QMetaObject::connectSlotsByName(DMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DMainWindow)
    {
        DMainWindow->setWindowTitle(QApplication::translate("DMainWindow", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class DMainWindow: public Ui_DMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DMAINWINDOW_H
