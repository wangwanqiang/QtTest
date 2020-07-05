#ifndef UINDICATORBUTTON_H
#define UINDICATORBUTTON_H

#include <QWidget>

namespace Ui {
class UIndicatorButton;
}

class UIndicatorButton : public QWidget
{
    Q_OBJECT

public:
    explicit UIndicatorButton(QWidget *parent = nullptr);
    ~UIndicatorButton();

private:
    Ui::UIndicatorButton *ui;
};

#endif // UINDICATORBUTTON_H
