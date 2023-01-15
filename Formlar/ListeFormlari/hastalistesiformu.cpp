#include "hastalistesiformu.h"
#include "ui_hastalistesiformu.h"

#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/hasta.h>

HastaListesiFormu::HastaListesiFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HastaListesiFormu)
{
    ui->setupUi(this);
}

HastaListesiFormu::~HastaListesiFormu()
{
    delete ui;
}

const HastaListesi &HastaListesiFormu::liste() const
{
    return _liste;
}

void HastaListesiFormu::setListe(const HastaListesi &newListe)
{
    _liste = newListe;
    ekranGuncelle();

}

void HastaListesiFormu::ekranGuncelle()
{
    ui->tblHastaListeleri->clear();
    ui->tblHastaListeleri->setColumnCount(3);
    QStringList Basliklar;
    Basliklar << tr("Hasta Adı") << tr("Hasta Soyadı") << tr("T.C. Kimlik No");
    ui->tblHastaListeleri->setHorizontalHeaderLabels(Basliklar);
    ui->tblHastaListeleri->setRowCount(_liste.size());

    for(int i = 0; i < _liste.size(); i++)
    {
        const auto &nesne_i = _liste[i];
        QTableWidgetItem *hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->Ad());
        ui->tblHastaListeleri->setItem(i, 0, hucre);

        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->Soyad());
        ui->tblHastaListeleri->setItem(i, 1, hucre);

        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->TCKimlik());
        ui->tblHastaListeleri->setItem(i, 2, hucre);

    }

}
