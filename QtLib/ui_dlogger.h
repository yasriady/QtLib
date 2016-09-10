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
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QToolButton *clear;
    QToolButton *about;
    QToolButton *hide;
    QToolButton *increase_font;
    QToolButton *decrease_font;
    QSpacerItem *verticalSpacer;
    QTextEdit *textEdit;

    void setupUi(QWidget *DLogger)
    {
        if (DLogger->objectName().isEmpty())
            DLogger->setObjectName(QStringLiteral("DLogger"));
        DLogger->resize(549, 148);
        horizontalLayout = new QHBoxLayout(DLogger);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        frame_2 = new QFrame(DLogger);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        clear = new QToolButton(frame_2);
        clear->setObjectName(QStringLiteral("clear"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/png_64/edit-clear-3.png"), QSize(), QIcon::Normal, QIcon::Off);
        clear->setIcon(icon);

        verticalLayout->addWidget(clear);

        about = new QToolButton(frame_2);
        about->setObjectName(QStringLiteral("about"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/png_64/help-about-3.png"), QSize(), QIcon::Normal, QIcon::Off);
        about->setIcon(icon1);

        verticalLayout->addWidget(about);

        hide = new QToolButton(frame_2);
        hide->setObjectName(QStringLiteral("hide"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/png_16/process-stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        hide->setIcon(icon2);

        verticalLayout->addWidget(hide);

        increase_font = new QToolButton(frame_2);
        increase_font->setObjectName(QStringLiteral("increase_font"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/png_32/style_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        increase_font->setIcon(icon3);

        verticalLayout->addWidget(increase_font);

        decrease_font = new QToolButton(frame_2);
        decrease_font->setObjectName(QStringLiteral("decrease_font"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/png_32/style_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        decrease_font->setIcon(icon4);

        verticalLayout->addWidget(decrease_font);

        verticalSpacer = new QSpacerItem(20, 45, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(frame_2);

        textEdit = new QTextEdit(DLogger);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QStringLiteral("font: 7pt \"Sans Serif\";"));

        horizontalLayout->addWidget(textEdit);


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
#ifndef QT_NO_TOOLTIP
        hide->setToolTip(QApplication::translate("DLogger", "hide", 0));
#endif // QT_NO_TOOLTIP
        hide->setText(QApplication::translate("DLogger", "hide", 0));
        increase_font->setText(QApplication::translate("DLogger", "+", 0));
        decrease_font->setText(QApplication::translate("DLogger", "-", 0));
    } // retranslateUi

};

namespace Ui {
    class DLogger: public Ui_DLogger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLOGGER_H
