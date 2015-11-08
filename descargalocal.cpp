#include "descargalocal.h"
#include "ui_descargalocal.h"

DescargaLocal::DescargaLocal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DescargaLocal)
{
    ui->setupUi(this);
}

DescargaLocal::~DescargaLocal()
{
    delete ui;
}
