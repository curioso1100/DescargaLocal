#include "descargalocal.h"
#include "ui_descargalocal.h"
#include <QProcess>

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
    QProcess process;
    process.start("/bin/bash -c \"date > /tmp/aversiva.txt\"");
    process.waitForFinished(-1); // espera a que termine antes de seguir

   ui->FicheroDescargar->setText("wget -c http://www.iesmajuelo.com/~florid/"+ui->FicheroDescargar->text());



}
