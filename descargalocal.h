#ifndef DESCARGALOCAL_H
#define DESCARGALOCAL_H

#include <QMainWindow>

namespace Ui {
class DescargaLocal;
}

class DescargaLocal : public QMainWindow
{
    Q_OBJECT

public:
    explicit DescargaLocal(QWidget *parent = 0);
    ~DescargaLocal();

private:
    Ui::DescargaLocal *ui;
};

#endif // DESCARGALOCAL_H
