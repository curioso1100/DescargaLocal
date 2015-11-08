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

void DescargaLocal::on_Descargar_clicked()
{
   ui->FicheroDescargar->setText("http://www.iesmajuelo.com/~florid/"+ui->FicheroDescargar->text());
}
