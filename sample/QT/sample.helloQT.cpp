/*
 * @Description: 
 * @Version: 1.0
 * @Autor: like
 * @Date: 2022-09-11 09:55:40
 * @LastEditors: like
 * @LastEditTime: 2022-09-11 10:01:11
 */
#include "helloWidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    helloWidget  w;
    w.show();
    return a.exec();
}
