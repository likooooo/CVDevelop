/*
 * @Description: 
 * @Version: 1.0
 * @Autor: like
 * @Date: 2022-09-11 09:58:40
 * @LastEditors: like
 * @LastEditTime: 2022-09-11 10:00:06
 */
#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class helloWidget; }
QT_END_NAMESPACE

class helloWidget : public QMainWindow
{
    Q_OBJECT

public:
    helloWidget(QWidget *parent = nullptr);
    ~helloWidget();

private:
    Ui::helloWidget *ui;
};
