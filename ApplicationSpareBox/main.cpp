#include "projetSparebox.h"
#include "interface_creation_iot.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    projetSparebox w;
   interface_Creation_iot x;
    w.show();
    x.show();


    return a.exec();
}
