#include "uindicatorbutton.h"
#include "ui_uindicatorbutton.h"

UIndicatorButton::UIndicatorButton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UIndicatorButton)
{
    ui->setupUi(this);
}

UIndicatorButton::~UIndicatorButton()
{
    delete ui;
}
