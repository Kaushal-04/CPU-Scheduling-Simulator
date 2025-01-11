#ifndef PREEMPTIVE_H
#define PREEMPTIVE_H

#include <QWidget>

namespace Ui {
class Preemptive;
}

class Preemptive : public QWidget
{
    Q_OBJECT

public:
    explicit Preemptive(QWidget *parent = nullptr);
    ~Preemptive();

private:
    Ui::Preemptive *ui;
};

#endif // PREEMPTIVE_H
