#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setFixedSize(1300,400);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

