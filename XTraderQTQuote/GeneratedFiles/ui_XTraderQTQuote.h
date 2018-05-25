/********************************************************************************
** Form generated from reading UI file 'XTraderQTQuote.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTRADERQTQUOTE_H
#define UI_XTRADERQTQUOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XTraderQTQuoteClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *XTraderQTQuoteClass)
    {
        if (XTraderQTQuoteClass->objectName().isEmpty())
            XTraderQTQuoteClass->setObjectName(QStringLiteral("XTraderQTQuoteClass"));
        XTraderQTQuoteClass->resize(1774, 1271);
        centralWidget = new QWidget(XTraderQTQuoteClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(590, 70, 150, 46));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(250, 80, 281, 41));
        XTraderQTQuoteClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(XTraderQTQuoteClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1774, 37));
        XTraderQTQuoteClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(XTraderQTQuoteClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        XTraderQTQuoteClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(XTraderQTQuoteClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        XTraderQTQuoteClass->setStatusBar(statusBar);

        retranslateUi(XTraderQTQuoteClass);

        QMetaObject::connectSlotsByName(XTraderQTQuoteClass);
    } // setupUi

    void retranslateUi(QMainWindow *XTraderQTQuoteClass)
    {
        XTraderQTQuoteClass->setWindowTitle(QApplication::translate("XTraderQTQuoteClass", "XTraderQTQuote", Q_NULLPTR));
        pushButton->setText(QApplication::translate("XTraderQTQuoteClass", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class XTraderQTQuoteClass: public Ui_XTraderQTQuoteClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XTRADERQTQUOTE_H
