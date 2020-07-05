#include "utabwidget.h"

UTabWidget::UTabWidget(QWidget *parent)
    :QTabWidget(parent)
{
//    setStyleSheet("QTabWidget::pane{border-width:1px;border-color:rgb(48, 104, 151);\
//                                        border-style: outset;background-color: rgb(132, 171, 208);\
//                                        background: transparent;} \
//    QTabWidget::tab-bar{border-width:0px;}\
//    QTabBar::tab{border-bottom-color: #C2C7CB;\
//                 border-top-left-radius: 0px;\
//                 border-top-right-radius: 0px;\
//                 max-width: 75px; min-width:75px; min-height:25px;\
//                 font:14px Times New Roman;\
//                     padding: 0px;\
//                     }\
//    QTabBar::scroller {\
//                       width:25;\
//                           border:0;\
//                               padding: 0px;\
//                               }\
//    QTabBar QToolButton::right-arrow {\
//                                      background-color:rgb(132, 171, 208);\
//                                      border-width: 0;\
//                                      background-image: url(:/images/tab/rightbtn.png);\
//                                  }\
//    QTabBar QToolButton::right-arrow:hover {\
//                                            background-color:rgb(132, 171, 208);\
//                                            border-width: 0;\
//                                            background-image: url(:/images/tab/hoverrightbtn.png);\
//                                        }\
//    QTabBar QToolButton::right-arrow:disabled {\
//                                            background-color:rgb(132, 171, 208);\
//                                            border-width: 0;\
//                                            background-image: url(:/images/tab/grayrightbtn.png);\
//                                        }\
//    QTabBar QToolButton::left-arrow {\
//                                     background-color:rgb(132, 171, 208);\
//                                     border-width: 0;\
//                                     background-image: url(:/images/tab/leftbtn.png);\
//                                 }\
//    QTabBar QToolButton::left-arrow:hover {\
//                                           background-color:rgb(132, 171, 208);\
//                                           border-width: 0;\
//                                           background-image: url(:/images/tab/hoverleftbtn.png);\
//                                       }\
//    QTabBar QToolButton::left-arrow:disabled {\
//                                           background-color:rgb(132, 171, 208);\
//                                           border-width: 0;\
//                                           background-image: url(:/images/tab/grayleftbtn.png);\
//                                       }\
//    QTabBar::tab:first:selected {\
//                                 margin-left: 30; margin-right: 0;\
//                                 color: white;\
//                                     border-image: url(:/images/tab/sel3.png);\
//                                 }\
//    QTabBar::tab:first:!selected {\
//                                  color: black;\
//                                      margin-left: 30; margin-right: 0;\
//                                      border-image: url(:/images/tab/normal3.png);\
//                                  }\
//    QTabBar::tab:first:hover:!selected {\
//                                        color: black;\
//                                            margin-left: 30; margin-right: 0;\
//                                            border-image: url(:/images/tab/hover3.png);\
//                                        }\
//    QTabBar::tab:middle:selected {\
//                                  margin-top: 0; margin-left: -15; margin-right: 8;\
//                                  color: white;\
//                                      border-image: url(:/images/tab/sel3.png);\
//                                  }\
//    QTabBar::tab:middle:!selected {\
//                                   color: black;\
//                                       margin-top: 0; margin-left: -15; margin-right: 8;\
//                                       border-image: url(:/images/tab/normal3.png);\
//                                   }\
//    QTabBar::tab:middle:hover:!selected {\
//                                         color: black;\
//                                             margin-top: 0; margin-left: -15; margin-right: 8;\
//                                             border-image: url(:/images/tab/hover3.png);\
//                                         }\
//    QTabBar::tab:last:selected {\
//                                margin-top: 0px; margin-left: 0; margin-right: 0;\
//                                color: white;\
//                                    border-image: url();\
//                                }\
//    QTabBar::tab:last:!selected {\
//                                 color: black;\
//                                     margin-top: 0; margin-left: 0; margin-right: 0;\
//                                     border-image: url();\
//                                 }\
//    QTabBar::tab:last:hover:!selected {\
//                                       color: black;\
//                                           margin-top: 0; margin-left: 0; margin-right: 0;\
//                                           border-image: url();\
//                                       }\
//    QTabBar::tab:only-one {\
//                           margin: 0;\
//                           }");



    setStyleSheet("QTabWidget::pane{border-width:1px;border-color:rgb(96, 96, 96);\
                                          border-style: outset;background-color: rgb(96, 96, 96);} \
      QTabWidget::tab-bar{border-width:0px;}\
      QTabBar::tab{border-bottom-color: #FF0000;\
                   border-top-left-radius: 0px;\
                   border-top-right-radius: 0px;\
                   min-width:100px; min-height:25px;\
                   font:14px Times New Roman;\
                       padding: 0px;\
                       }\
      QTabBar::tab:!selected {\
                              margin-top: 0px; margin-left: 30;\
                              border-image: url(:/icon/OIP.jpg);\
                          }\
      QTabBar::tab:selected {\
                             color: blue;\
                                 border-image: url(:/icon/OIP1.jpg);\
                             }\
      QTabBar::tab:hover:!selected {\
                                    border-image: url(:/icon/OIP2.jpg);\
                                }\
      QTabBar::tab:selected {\
                             margin-left: 10;\
                         }");
}
