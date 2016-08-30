/********************************************************************************
** Form generated from reading UI file 'dialogpainter.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPAINTER_H
#define UI_DIALOGPAINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogPainter
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *DialogPainter)
    {
        if (DialogPainter->objectName().isEmpty())
            DialogPainter->setObjectName(QStringLiteral("DialogPainter"));
        DialogPainter->resize(400, 300);
        gridLayout = new QGridLayout(DialogPainter);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(DialogPainter);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 1, 1, 1);

        label = new QLabel(DialogPainter);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(DialogPainter);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogPainter, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogPainter, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogPainter);
    } // setupUi

    void retranslateUi(QDialog *DialogPainter)
    {
        DialogPainter->setWindowTitle(QApplication::translate("DialogPainter", "Dialog", 0));
        label->setText(QApplication::translate("DialogPainter", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogPainter: public Ui_DialogPainter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPAINTER_H
