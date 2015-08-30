/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
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
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QHBoxLayout *horizontalLayout;
    glWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QString::fromUtf8("mainWindow"));
        mainWindow->resize(615, 349);
        horizontalLayout = new QHBoxLayout(mainWindow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new glWidget(mainWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(widget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(88, 238, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(mainWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(mainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), mainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QDialog *mainWindow)
    {
        mainWindow->setWindowTitle(QApplication::translate("mainWindow", "mainWindow", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("mainWindow", "&Quitte", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
