#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);

signals:

};

#endif // WINDOW_H
