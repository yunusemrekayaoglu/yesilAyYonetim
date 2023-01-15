#include "psikiyatrlistesiformu.h"
#include "ui_psikiyatrlistesiformu.h"

#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/psikiyatr.h>


PsikiyatrListesiFormu::PsikiyatrListesiFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PsikiyatrListesiFormu)
{
    ui->setupUi(this);
}

PsikiyatrListesiFormu::~PsikiyatrListesiFormu()
{
    delete ui;
}

const PsikiyatrListesi &PsikiyatrListesiFormu::liste() const
{
    return _liste;
}

void PsikiyatrListesiFormu::setListe(const PsikiyatrListesi &newListe)
{
    _liste = newListe;
    ekranGuncelle();
}

void PsikiyatrListesiFormu::ekranGuncelle()
{
    ui->tblPsikiyatrListeleri->clear();
    ui->tblPsikiyatrListeleri->setColumnCount(3);
    QStringList Basliklar;
    Basliklar << tr("Psikiyatr Adı") << tr("Psikiyatr Soyadı") << tr("Psikiyatr Bölümü");
    ui->tblPsikiyatrListeleri->setRowCount(_liste.size());

    for(int i = 0; i < _liste.size(); i++)
    {
        const auto &nesne_i = _liste[i];
        QTableWidgetItem *hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->Ad());
        ui->tblPsikiyatrListeleri->setItem(i, 0, hucre);

        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->Soyad());
        ui->tblPsikiyatrListeleri->setItem(i, 1, hucre);

        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->bolum());
        ui->tblPsikiyatrListeleri->setItem(i, 2, hucre);

    }

}
