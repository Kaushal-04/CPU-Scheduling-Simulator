#include "nonpreemptive.h"
#include "ui_nonpreemptive.h"

NonPreemptive::NonPreemptive(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NonPreemptive)
{
    ui->setupUi(this);
}

NonPreemptive::~NonPreemptive()
{
    delete ui;
}
