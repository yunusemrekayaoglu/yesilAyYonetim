#include "birimlistesiformu.h"
#include "ui_birimlistesiformu.h"
#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/birim.h>

BirimListesiFormu::BirimListesiFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BirimListesiFormu)
{
    ui->setupUi(this);
}

BirimListesiFormu::~BirimListesiFormu()
{
    delete ui;
}

const BirimListesi &BirimListesiFormu::liste() const
{
    return _liste;
}

void BirimListesiFormu::setListe(const BirimListesi &newListe)
{
    _liste = newListe;
    ekranGuncelle();
}

void BirimListesiFormu::ekranGuncelle()
{
    ui->tblBirimListeleri->clear();
    ui->tblBirimListeleri->setColumnCount(2);
    QStringList Basliklar;
    Basliklar << tr("Birim Adı") << tr("Birim İletişim");
    ui->tblBirimListeleri->setHorizontalHeaderLabels(Basliklar);
    ui->tblBirimListeleri->setRowCount(_liste.size());

    for(int i   = 0; i < _liste.size(); i++)
    {
        const auto &nesne_i = _liste[i];
        QTableWidgetItem *hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->birimAdi());
        ui->tblBirimListeleri->setItem(i, 0, hucre);

        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->birimIletisim());
        ui->tblBirimListeleri->setItem(i, 1, hucre);
    }
}
