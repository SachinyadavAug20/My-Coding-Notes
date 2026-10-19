#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int firstnum,secondnum,result;


void MainWindow::on_add_clicked()
{
    firstnum=ui->First_number->text().toInt();
    secondnum=ui->Second_number->text().toInt();
    result=firstnum+secondnum;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_sub_clicked()
{
    firstnum=ui->First_number->text().toInt();
    secondnum=ui->Second_number->text().toInt();
    result=firstnum-secondnum;
    ui->result->setText(QString::number(result));

}


void MainWindow::on_mul_clicked()
{
    firstnum=ui->First_number->text().toInt();
    secondnum=ui->Second_number->text().toInt();
    result=firstnum*secondnum;
    ui->result->setText(QString::number(result));

}


void MainWindow::on_div_clicked()
{
    firstnum=ui->First_number->text().toInt();
    secondnum=ui->Second_number->text().toInt();
    result=firstnum/secondnum;
    ui->result->setText(QString::number(result));

}

