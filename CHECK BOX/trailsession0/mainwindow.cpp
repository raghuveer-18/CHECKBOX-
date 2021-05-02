#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
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


void MainWindow::on_radioButton_2_clicked()
{ if(ui->radioButton_2->isChecked())
    {
        QMessageBox::information(0,"AGE","AGE IS BELOW 18");
    }
}

void MainWindow::on_radioButton_clicked()
{
    { if(ui->radioButton->isChecked())
        {
            QMessageBox::information(0,"AGE","AGE IS ABOVE 18");
        }
    }

}


void MainWindow::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked())
        {
            QMessageBox::information(0,"LIKES","CRICKET");
        }
}

void MainWindow::on_checkBox_2_clicked()
{
    if(ui->checkBox_2->isChecked())
        {
            QMessageBox::information(0,"LIKES","FOOTBALL");
        }
}

void MainWindow::on_checkBox_3_clicked()
{
    if(ui->checkBox_3->isChecked())
        {
            QMessageBox::information(0,"LIKES","TENNIS");
        }

}
