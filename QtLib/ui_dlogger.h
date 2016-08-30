/********************************************************************************
** Form generated from reading UI file 'dlogger.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLOGGER_H
#define UI_DLOGGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DLogger
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *clear;
    QToolButton *about;
    QToolButton *increase_font;
    QToolButton *decrease_font;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *DLogger)
    {
        if (DLogger->objectName().isEmpty())
            DLogger->setObjectName(QStringLiteral("DLogger"));
        DLogger->resize(509, 434);
        verticalLayout = new QVBoxLayout(DLogger);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(DLogger);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setStyleSheet(QStringLiteral("font: 7pt \"Sans Serif\";"));

        verticalLayout->addWidget(textEdit);

        frame_2 = new QFrame(DLogger);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        clear = new QToolButton(frame_2);
        clear->setObjectName(QStringLiteral("clear"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/png_64/edit-clear-3.png"), QSize(), QIcon::Normal, QIcon::Off);
        clear->setIcon(icon);

        horizontalLayout->addWidget(clear);

        about = new QToolButton(frame_2);
        about->setObjectName(QStringLiteral("about"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/png_64/help-about-3.png"), QSize(), QIcon::Normal, QIcon::Off);
        about->setIcon(icon1);

        horizontalLayout->addWidget(about);

        increase_font = new QToolButton(frame_2);
        increase_font->setObjectName(QStringLiteral("increase_font"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/png_32/style_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        increase_font->setIcon(icon2);

        horizontalLayout->addWidget(increase_font);

        decrease_font = new QToolButton(frame_2);
        decrease_font->setObjectName(QStringLiteral("decrease_font"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/png_32/style_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        decrease_font->setIcon(icon3);

        horizontalLayout->addWidget(decrease_font);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame_2);

        frame = new QFrame(DLogger);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);

        verticalLayout->addWidget(frame);


        retranslateUi(DLogger);

        QMetaObject::connectSlotsByName(DLogger);
    } // setupUi

    void retranslateUi(QWidget *DLogger)
    {
        DLogger->setWindowTitle(QApplication::translate("DLogger", "Form", 0));
#ifndef QT_NO_TOOLTIP
        clear->setToolTip(QApplication::translate("DLogger", "clear...", 0));
#endif // QT_NO_TOOLTIP
        clear->setText(QApplication::translate("DLogger", "clear", 0));
        about->setText(QApplication::translate("DLogger", "about", 0));
        increase_font->setText(QApplication::translate("DLogger", "+", 0));
        decrease_font->setText(QApplication::translate("DLogger", "-", 0));
    } // retranslateUi

};

namespace Ui {
    class DLogger: public Ui_DLogger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLOGGER_H
