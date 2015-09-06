/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
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
            mainWindow->setObjectName(QStringLiteral("mainWindow"));
        mainWindow->resize(948, 471);
        widget = new glWidget(mainWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 531, 451));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        treeWidget = new QTreeWidget(mainWindow);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(690, 10, 251, 241));
        layoutWidget = new QWidget(mainWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(690, 260, 251, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        save = new QPushButton(layoutWidget);
        save->setObjectName(QStringLiteral("save"));

        verticalLayout->addWidget(save);

        load = new QPushButton(layoutWidget);
        load->setObjectName(QStringLiteral("load"));

        verticalLayout->addWidget(load);

        quit = new QPushButton(layoutWidget);
        quit->setObjectName(QStringLiteral("quit"));

        verticalLayout->addWidget(quit);

        createbutton = new QToolButton(mainWindow);
        createbutton->setObjectName(QStringLiteral("createbutton"));
        createbutton->setGeometry(QRect(550, 160, 25, 29));
        createbutton->setCheckable(false);
        groupBox = new QGroupBox(mainWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(550, 10, 131, 61));
        cambutton = new QToolButton(groupBox);
        cambutton->setObjectName(QStringLiteral("cambutton"));
        cambutton->setGeometry(QRect(0, 30, 24, 29));
        cambutton->setCheckable(true);
        cambutton->setChecked(true);
        cambutton->setAutoExclusive(true);
        objectbutton = new QToolButton(groupBox);
        objectbutton->setObjectName(QStringLiteral("objectbutton"));
        objectbutton->setGeometry(QRect(30, 30, 26, 29));
        objectbutton->setCheckable(true);
        objectbutton->setAutoExclusive(true);
        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QStringLiteral("toolButton"));
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
        mainWindow->setWindowTitle(QApplication::translate("mainWindow", "Echtzeit-Terraineditor", 0));
        save->setText(QApplication::translate("mainWindow", "Save", 0));
        load->setText(QApplication::translate("mainWindow", "Load", 0));
        quit->setText(QApplication::translate("mainWindow", "&Quitte", 0));
        createbutton->setText(QApplication::translate("mainWindow", "B", 0));
        groupBox->setTitle(QApplication::translate("mainWindow", "Maus Tools", 0));
        cambutton->setText(QApplication::translate("mainWindow", "C", 0));
        objectbutton->setText(QApplication::translate("mainWindow", "O", 0));
        toolButton->setText(QApplication::translate("mainWindow", "D", 0));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
