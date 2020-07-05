#ifndef UTOUCHBUTTON_H
#define UTOUCHBUTTON_H

#include <QWidget>
#include <QPushButton>

class UTouchButton:public QPushButton
{
public:
    UTouchButton(QWidget *parent = nullptr);
protected:
    virtual void mousePressEvent(QMouseEvent * e);
};

#endif // UTOUCHBUTTON_H
