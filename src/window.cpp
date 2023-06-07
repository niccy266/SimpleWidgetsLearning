#include "window.h"

Window::Window(QWidget *parent)
    : QWidget{parent}
{
    setFixedSize(100, 50);

    QPushButton *button = new QPushButton("Hello", this);

    button->setToolTip("A tooltip");
    button->setGeometry(10, 10, 80, 30);

    QFont font("Courier");
    button->setFont(font);
}
