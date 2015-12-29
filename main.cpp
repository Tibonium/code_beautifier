#include "code_beautifier.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    code_beautifier w;
    w.show();

    return a.exec();
}
