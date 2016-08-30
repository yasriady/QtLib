/********************************************************************************
** Form generated from reading UI file 'dialogthread.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTHREAD_H
#define UI_DIALOGTHREAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogThread
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_StartThread;
    QPushButton *pushButton_StopThread;
    QPushButton *pushButton_PauseThread;
    QPushButton *pushButton_ResumeThread;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_PlaySound;
    QPushButton *pushButton_QSoundEffect;
    QPushButton *pushButton_PlayMedia;
    QSpacerItem *verticalSpacer;
    QWidget *logger;

    void setupUi(QDialog *DialogThread)
    {
        if (DialogThread->objectName().isEmpty())
            DialogThread->setObjectName(QStringLiteral("DialogThread"));
        DialogThread->resize(639, 416);
        horizontalLayout = new QHBoxLayout(DialogThread);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(DialogThread);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_StartThread = new QPushButton(groupBox);
        pushButton_StartThread->setObjectName(QStringLiteral("pushButton_StartThread"));

        verticalLayout->addWidget(pushButton_StartThread);

        pushButton_StopThread = new QPushButton(groupBox);
        pushButton_StopThread->setObjectName(QStringLiteral("pushButton_StopThread"));

        verticalLayout->addWidget(pushButton_StopThread);

        pushButton_PauseThread = new QPushButton(groupBox);
        pushButton_PauseThread->setObjectName(QStringLiteral("pushButton_PauseThread"));

        verticalLayout->addWidget(pushButton_PauseThread);

        pushButton_ResumeThread = new QPushButton(groupBox);
        pushButton_ResumeThread->setObjectName(QStringLiteral("pushButton_ResumeThread"));

        verticalLayout->addWidget(pushButton_ResumeThread);


        verticalLayout_2->addWidget(groupBox);

        frame = new QFrame(DialogThread);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton_PlaySound = new QPushButton(frame);
        pushButton_PlaySound->setObjectName(QStringLiteral("pushButton_PlaySound"));

        verticalLayout_3->addWidget(pushButton_PlaySound);

        pushButton_QSoundEffect = new QPushButton(frame);
        pushButton_QSoundEffect->setObjectName(QStringLiteral("pushButton_QSoundEffect"));

        verticalLayout_3->addWidget(pushButton_QSoundEffect);

        pushButton_PlayMedia = new QPushButton(frame);
        pushButton_PlayMedia->setObjectName(QStringLiteral("pushButton_PlayMedia"));

        verticalLayout_3->addWidget(pushButton_PlayMedia);


        verticalLayout_2->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        logger = new QWidget(DialogThread);
        logger->setObjectName(QStringLiteral("logger"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logger->sizePolicy().hasHeightForWidth());
        logger->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(logger);


        retranslateUi(DialogThread);

        QMetaObject::connectSlotsByName(DialogThread);
    } // setupUi

    void retranslateUi(QDialog *DialogThread)
    {
        DialogThread->setWindowTitle(QApplication::translate("DialogThread", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("DialogThread", "Thread", 0));
        pushButton_StartThread->setText(QApplication::translate("DialogThread", "Start", 0));
        pushButton_StopThread->setText(QApplication::translate("DialogThread", "Stop", 0));
        pushButton_PauseThread->setText(QApplication::translate("DialogThread", "Pause", 0));
        pushButton_ResumeThread->setText(QApplication::translate("DialogThread", "Resume", 0));
        pushButton_PlaySound->setText(QApplication::translate("DialogThread", "Play Sound", 0));
        pushButton_QSoundEffect->setText(QApplication::translate("DialogThread", "QSoundEffect", 0));
        pushButton_PlayMedia->setText(QApplication::translate("DialogThread", "Play Media", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogThread: public Ui_DialogThread {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTHREAD_H
