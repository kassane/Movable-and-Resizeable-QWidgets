/*
 * Programmer Aleksey Osipov
 * email: aliks-os@yandex.ru
 */

#include "mainwindow.h"
//#include "ui_mainwindow.h"
#include <QLabel>
#include <QPushButton>
#include "tcontainer.hpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)//, ui(new Ui::MainWindow)
{
    //ui->setupUi(this);
    this->showMaximized();
    QLabel *lab1 = new QLabel("Label1",this);
    QLabel *lab2 = new QLabel("Label2",this);
	QPushButton* btn = new QPushButton("My Button",this);
    TContainer *con1 = new TContainer(this, QPoint(10, 10), lab1);
    TContainer *con2 = new TContainer(this, QPoint(20, 50),lab2);
	TContainer *con3 = new TContainer(this, QPoint(30, 50),btn);
}

MainWindow::~MainWindow() {
    //delete ui;
}