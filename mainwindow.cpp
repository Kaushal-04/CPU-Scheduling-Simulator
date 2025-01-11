#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "preemptive.h"
#include "nonpreemptive.h"
#include "QMessageBox"

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

void MainWindow::on_nextButton_clicked()
{
    if (ui->preemptiveRadioButton->isChecked()) {
        Preemptive *preemptivePage = new Preemptive();
        preemptivePage->show();
        this->close();
    } else if (ui->nonPreemptiveRadioButton->isChecked()) {
        NonPreemptive *nonPreemptivePage = new NonPreemptive();
        nonPreemptivePage->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Selection Error", "Please select a scheduling type!");
    }
}

