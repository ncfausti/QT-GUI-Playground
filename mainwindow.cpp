#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QListWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked(bool)), ui->spinBox, SLOT(stepUp()));
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(slot_addItemToListWidget()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slot_addItemToListWidget()
{
    QListWidgetItem* item = new QListWidgetItem(QString("New Item"));
    ui->listWidget->addItem(item);
}
