#include "preemptive.h"
#include "ui_preemptive.h"

Preemptive::Preemptive(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Preemptive)
{
    ui->setupUi(this);
}

Preemptive::~Preemptive()
{
    delete ui;
}
