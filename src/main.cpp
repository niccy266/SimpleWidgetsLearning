#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget window;
    window.setFixedSize(100, 50);

    QPushButton *button = new QPushButton("Hello", &window);

    //button.setText("My text");
    button->setToolTip("A tooltip");
    button->setGeometry(10, 10, 80, 30);

    QFont font("Courier");
    button->setFont(font);

    window.show();

    return a.exec();
}
