/********************************************************************************
** Form generated from reading UI file 'ddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DDIALOG_H
#define UI_DDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DDialog)
    {
        if (DDialog->objectName().isEmpty())
            DDialog->setObjectName(QStringLiteral("DDialog"));
        DDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(DDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(DDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DDialog);
    } // setupUi

    void retranslateUi(QDialog *DDialog)
    {
        DDialog->setWindowTitle(QApplication::translate("DDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class DDialog: public Ui_DDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DDIALOG_H
