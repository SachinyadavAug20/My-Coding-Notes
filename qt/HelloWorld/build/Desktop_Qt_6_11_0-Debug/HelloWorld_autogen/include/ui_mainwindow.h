/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *FirstNumberLabel;
    QLabel *SecondNumberLabel;
    QLineEdit *First_number;
    QLineEdit *Second_number;
    QPushButton *add;
    QPushButton *mul;
    QPushButton *sub;
    QPushButton *div;
    QLabel *ResultLabel;
    QLineEdit *result;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(870, 564);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        FirstNumberLabel = new QLabel(centralwidget);
        FirstNumberLabel->setObjectName("FirstNumberLabel");
        FirstNumberLabel->setGeometry(QRect(220, 150, 91, 31));
        SecondNumberLabel = new QLabel(centralwidget);
        SecondNumberLabel->setObjectName("SecondNumberLabel");
        SecondNumberLabel->setGeometry(QRect(220, 200, 101, 31));
        First_number = new QLineEdit(centralwidget);
        First_number->setObjectName("First_number");
        First_number->setGeometry(QRect(330, 160, 113, 22));
        Second_number = new QLineEdit(centralwidget);
        Second_number->setObjectName("Second_number");
        Second_number->setGeometry(QRect(360, 200, 113, 22));
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(250, 260, 61, 41));
        mul = new QPushButton(centralwidget);
        mul->setObjectName("mul");
        mul->setGeometry(QRect(400, 260, 61, 41));
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(320, 260, 61, 41));
        div = new QPushButton(centralwidget);
        div->setObjectName("div");
        div->setGeometry(QRect(470, 260, 61, 41));
        ResultLabel = new QLabel(centralwidget);
        ResultLabel->setObjectName("ResultLabel");
        ResultLabel->setGeometry(QRect(230, 330, 71, 21));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(310, 330, 113, 22));
        result->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        FirstNumberLabel->setText(QCoreApplication::translate("MainWindow", "First Number", nullptr));
        SecondNumberLabel->setText(QCoreApplication::translate("MainWindow", "Second Number", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        ResultLabel->setText(QCoreApplication::translate("MainWindow", "Result :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
