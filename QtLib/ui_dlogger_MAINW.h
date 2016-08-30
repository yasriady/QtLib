/********************************************************************************
** Form generated from reading UI file 'dlogger_MAINW.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLOGGER_MAINW_H
#define UI_DLOGGER_MAINW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DLogger
{
public:
    QAction *actionClear;
    QAction *actionAbout;
    QAction *actionIncreaseFont;
    QAction *actionDecreaseFont;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QToolBar *toolBar;

    void setupUi(QMainWindow *DLogger)
    {
        if (DLogger->objectName().isEmpty())
            DLogger->setObjectName(QStringLiteral("DLogger"));
        DLogger->resize(467, 347);
        actionClear = new QAction(DLogger);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        actionAbout = new QAction(DLogger);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionIncreaseFont = new QAction(DLogger);
        actionIncreaseFont->setObjectName(QStringLiteral("actionIncreaseFont"));
        actionDecreaseFont = new QAction(DLogger);
        actionDecreaseFont->setObjectName(QStringLiteral("actionDecreaseFont"));
        centralwidget = new QWidget(DLogger);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setStyleSheet(QStringLiteral("font: 7pt \"Sans Serif\";"));

        verticalLayout->addWidget(textEdit);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);

        verticalLayout->addWidget(frame);

        DLogger->setCentralWidget(centralwidget);
        toolBar = new QToolBar(DLogger);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setStyleSheet(QStringLiteral("font: 6pt \"Sans Serif\";"));
        DLogger->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionClear);
        toolBar->addAction(actionAbout);
        toolBar->addAction(actionIncreaseFont);
        toolBar->addAction(actionDecreaseFont);

        retranslateUi(DLogger);

        QMetaObject::connectSlotsByName(DLogger);
    } // setupUi

    void retranslateUi(QMainWindow *DLogger)
    {
        DLogger->setWindowTitle(QApplication::translate("DLogger", "MainWindow", 0));
        actionClear->setText(QApplication::translate("DLogger", "Clear", 0));
        actionAbout->setText(QApplication::translate("DLogger", "About", 0));
        actionIncreaseFont->setText(QApplication::translate("DLogger", "+", 0));
        actionDecreaseFont->setText(QApplication::translate("DLogger", "-", 0));
        toolBar->setWindowTitle(QApplication::translate("DLogger", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class DLogger: public Ui_DLogger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLOGGER_MAINW_H
