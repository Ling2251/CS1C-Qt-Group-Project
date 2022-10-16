#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Add a calender and the data
    connect(ui->dateEdit, SIGNAL(dateChanged(QDate)),
            ui->calendarWidget, SLOT(setSelectedDate(QDate)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


