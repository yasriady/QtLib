/********************************************************************************
** Form generated from reading UI file 'dialogtest_sound.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTEST_SOUND_H
#define UI_DIALOGTEST_SOUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogTest_Sound
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *DialogTest_Sound)
    {
        if (DialogTest_Sound->objectName().isEmpty())
            DialogTest_Sound->setObjectName(QStringLiteral("DialogTest_Sound"));
        DialogTest_Sound->resize(605, 300);
        pushButton = new QPushButton(DialogTest_Sound);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 30, 80, 23));

        retranslateUi(DialogTest_Sound);

        QMetaObject::connectSlotsByName(DialogTest_Sound);
    } // setupUi

    void retranslateUi(QDialog *DialogTest_Sound)
    {
        DialogTest_Sound->setWindowTitle(QApplication::translate("DialogTest_Sound", "Dialog", 0));
        pushButton->setText(QApplication::translate("DialogTest_Sound", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogTest_Sound: public Ui_DialogTest_Sound {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTEST_SOUND_H
