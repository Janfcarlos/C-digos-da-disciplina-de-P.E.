#include "widget.h"
#include "ui_widget.h"
#include <QPixmap>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    close();
}

void Widget::on_pushButton_3_clicked()
{
    QPixmap logo("C:/Users/janca/OneDrive/Área de Trabalho/fla.jpg");
    ui->label->setPixmap(logo.scaled(600,400,Qt::KeepAspectRatio));
}

void Widget::on_pushButton_2_clicked()
{
    QString css="background-color:#f55;";
    ui->label_1->setStyleSheet(css);
}
