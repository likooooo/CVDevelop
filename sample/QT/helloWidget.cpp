/*
 * @Description: 
 * @Version: 1.0
 * @Autor: like
 * @Date: 2022-09-11 09:58:40
 * @LastEditors: like
 * @LastEditTime: 2022-09-11 10:07:35
 */
#include "helloWidget.h"
#include "./ui_helloWidget.h"

helloWidget::helloWidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::helloWidget)
{
    ui->setupUi(this);
}

helloWidget::~helloWidget()
{
    delete ui;
}

