#include "photophrame.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PhotoPhrame w;
    w.show();

    return a.exec();
}
