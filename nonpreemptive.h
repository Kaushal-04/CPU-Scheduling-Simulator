#ifndef NONPREEMPTIVE_H
#define NONPREEMPTIVE_H

#include <QWidget>

namespace Ui {
class NonPreemptive;
}

class NonPreemptive : public QWidget
{
    Q_OBJECT

public:
    explicit NonPreemptive(QWidget *parent = nullptr);
    ~NonPreemptive();

private:
    Ui::NonPreemptive *ui;
};

#endif // NONPREEMPTIVE_H
