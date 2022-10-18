#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("MayaHello");

    connect(ui->dateEdit, SIGNAL(dateChanged(QDate)),
            ui->calendarWidget, SLOT(setSelectedDate(QDate)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


