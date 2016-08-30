/********************************************************************************
** Form generated from reading UI file 'dprint.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPRINT_H
#define UI_DPRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DPrint
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *toolBar;
    QHBoxLayout *horizontalLayout;
    QToolButton *print;
    QToolButton *toolButton_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QFrame *DPrint)
    {
        if (DPrint->objectName().isEmpty())
            DPrint->setObjectName(QStringLiteral("DPrint"));
        DPrint->resize(476, 387);
        DPrint->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(DPrint);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        toolBar = new QFrame(DPrint);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy);
        toolBar->setFrameShape(QFrame::Panel);
        toolBar->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(toolBar);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 3, -1, 3);
        print = new QToolButton(toolBar);
        print->setObjectName(QStringLiteral("print"));
        QFont font;
        font.setPointSize(7);
        print->setFont(font);

        horizontalLayout->addWidget(print);

        toolButton_2 = new QToolButton(toolBar);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setFont(font);

        horizontalLayout->addWidget(toolButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(toolBar);


        retranslateUi(DPrint);

        QMetaObject::connectSlotsByName(DPrint);
    } // setupUi

    void retranslateUi(QFrame *DPrint)
    {
        DPrint->setWindowTitle(QApplication::translate("DPrint", "Frame", 0));
        print->setText(QApplication::translate("DPrint", "PRINT", 0));
        toolButton_2->setText(QApplication::translate("DPrint", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class DPrint: public Ui_DPrint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DPRINT_H
