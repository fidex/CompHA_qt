/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QHBoxLayout *horizontalLayout;
    glwidget *frame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QString::fromUtf8("mainWindow"));
        mainWindow->resize(597, 383);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainWindow->sizePolicy().hasHeightForWidth());
        mainWindow->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(mainWindow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new glwidget(mainWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(frame);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(78, 248, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(mainWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(16777206, 16777215));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        pushButton->raise();
        frame->raise();

        retranslateUi(mainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), mainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QWidget *mainWindow)
    {
        mainWindow->setWindowTitle(QApplication::translate("mainWindow", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("mainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
