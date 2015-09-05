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
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    glWidget *widget;
    QTreeWidget *treeWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *save;
    QPushButton *load;
    QPushButton *quit;
    QToolButton *createbutton;
    QGroupBox *groupBox;
    QToolButton *cambutton;
    QToolButton *objectbutton;
    QToolButton *toolButton;

    void setupUi(QDialog *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QString::fromUtf8("mainWindow"));
        mainWindow->resize(948, 471);
        widget = new glWidget(mainWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 531, 451));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        treeWidget = new QTreeWidget(mainWindow);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(690, 10, 251, 241));
        layoutWidget = new QWidget(mainWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(690, 260, 251, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        save = new QPushButton(layoutWidget);
        save->setObjectName(QString::fromUtf8("save"));

        verticalLayout->addWidget(save);

        load = new QPushButton(layoutWidget);
        load->setObjectName(QString::fromUtf8("load"));

        verticalLayout->addWidget(load);

        quit = new QPushButton(layoutWidget);
        quit->setObjectName(QString::fromUtf8("quit"));

        verticalLayout->addWidget(quit);

        createbutton = new QToolButton(mainWindow);
        createbutton->setObjectName(QString::fromUtf8("createbutton"));
        createbutton->setGeometry(QRect(550, 160, 25, 29));
        createbutton->setCheckable(false);
        groupBox = new QGroupBox(mainWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(550, 10, 131, 61));
        cambutton = new QToolButton(groupBox);
        cambutton->setObjectName(QString::fromUtf8("cambutton"));
        cambutton->setGeometry(QRect(0, 30, 24, 29));
        cambutton->setCheckable(true);
        cambutton->setChecked(true);
        cambutton->setAutoExclusive(true);
        objectbutton = new QToolButton(groupBox);
        objectbutton->setObjectName(QString::fromUtf8("objectbutton"));
        objectbutton->setGeometry(QRect(30, 30, 26, 29));
        objectbutton->setCheckable(true);
        objectbutton->setAutoExclusive(true);
        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(60, 30, 27, 29));
        toolButton->setCheckable(true);
        toolButton->setChecked(false);
        toolButton->setAutoExclusive(true);

        retranslateUi(mainWindow);
        QObject::connect(quit, SIGNAL(clicked()), mainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QDialog *mainWindow)
    {
        mainWindow->setWindowTitle(QApplication::translate("mainWindow", "Echtzeit-Terraineditor", 0, QApplication::UnicodeUTF8));
        save->setText(QApplication::translate("mainWindow", "Save", 0, QApplication::UnicodeUTF8));
        load->setText(QApplication::translate("mainWindow", "Load", 0, QApplication::UnicodeUTF8));
        quit->setText(QApplication::translate("mainWindow", "&Quitte", 0, QApplication::UnicodeUTF8));
        createbutton->setText(QApplication::translate("mainWindow", "B", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("mainWindow", "Maus Tools", 0, QApplication::UnicodeUTF8));
        cambutton->setText(QApplication::translate("mainWindow", "C", 0, QApplication::UnicodeUTF8));
        objectbutton->setText(QApplication::translate("mainWindow", "O", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("mainWindow", "D", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
