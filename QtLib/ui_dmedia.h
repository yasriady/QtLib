/********************************************************************************
** Form generated from reading UI file 'dmedia.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DMEDIA_H
#define UI_DMEDIA_H

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

class Ui_DMedia
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *toolBar;
    QHBoxLayout *horizontalLayout;
    QToolButton *start;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *DMedia)
    {
        if (DMedia->objectName().isEmpty())
            DMedia->setObjectName(QStringLiteral("DMedia"));
        DMedia->resize(511, 423);
        DMedia->setFrameShape(QFrame::NoFrame);
        DMedia->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(DMedia);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toolBar = new QFrame(DMedia);
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
        start = new QToolButton(toolBar);
        start->setObjectName(QStringLiteral("start"));

        horizontalLayout->addWidget(start);

        toolButton_2 = new QToolButton(toolBar);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        horizontalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(toolBar);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));

        horizontalLayout->addWidget(toolButton_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(toolBar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(DMedia);

        QMetaObject::connectSlotsByName(DMedia);
    } // setupUi

    void retranslateUi(QFrame *DMedia)
    {
        DMedia->setWindowTitle(QApplication::translate("DMedia", "Frame", 0));
        start->setText(QApplication::translate("DMedia", "start", 0));
        toolButton_2->setText(QApplication::translate("DMedia", "...", 0));
        toolButton_3->setText(QApplication::translate("DMedia", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class DMedia: public Ui_DMedia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DMEDIA_H
