#include "descargalocal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DescargaLocal w;
    w.show();

    return a.exec();
}
