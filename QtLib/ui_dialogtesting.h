/********************************************************************************
** Form generated from reading UI file 'dialogtesting.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTESTING_H
#define UI_DIALOGTESTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogTesting
{
public:
    QLabel *label;

    void setupUi(QDialog *DialogTesting)
    {
        if (DialogTesting->objectName().isEmpty())
            DialogTesting->setObjectName(QStringLiteral("DialogTesting"));
        DialogTesting->resize(442, 239);
        label = new QLabel(DialogTesting);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 70, 59, 15));

        retranslateUi(DialogTesting);

        QMetaObject::connectSlotsByName(DialogTesting);
    } // setupUi

    void retranslateUi(QDialog *DialogTesting)
    {
        DialogTesting->setWindowTitle(QApplication::translate("DialogTesting", "Dialog for testing", 0));
        label->setText(QApplication::translate("DialogTesting", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogTesting: public Ui_DialogTesting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTESTING_H
