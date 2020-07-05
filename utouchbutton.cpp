#include "utouchbutton.h"
#include <QDebug>

UTouchButton::UTouchButton(QWidget *parent)
    :QPushButton(parent)
{
    QString style_str = R"(
    QPushButton{
        color: white;
        font: bold 10pt;
        border:none;
        min-height: 24px;
        min-width: 60px;
        background:url(:/icon/OIP.jpg) ;
    }
    QPushButton:hover{
        color: lightgray;
        background:url(:/icon/OIP1.jpg);;
    }
    QPushButton:pressed {
        color: lightgray;
        background:url(:/icon/OIP2.jpg) ;;
        padding-top: -15px;
        padding-bottom: -17px;
    })";


    setStyleSheet("background-color: rgb(170, 0, 255);");
    setStyleSheet(style_str);
}

void UTouchButton::mousePressEvent(QMouseEvent *e)
{
    printf("%s",this->objectName());
    QString objName = objectName();
    qDebug()<<objName;
    QPushButton::mousePressEvent(e);
}
