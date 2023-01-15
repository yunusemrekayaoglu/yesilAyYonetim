#include "gozetmenlistesiformu.h"
#include "ui_gozetmenlistesiformu.h"
#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/gozetmen.h>

GozetmenListesiFormu::GozetmenListesiFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GozetmenListesiFormu)
{
    ui->setupUi(this);
}

GozetmenListesiFormu::~GozetmenListesiFormu()
{
    delete ui;
}

const GozetmenListesi &GozetmenListesiFormu::liste() const
{
    return _liste;
}

void GozetmenListesiFormu::setListe(const GozetmenListesi &newListe)
{
    _liste = newListe;
    ekranGuncelle();
}

void GozetmenListesiFormu::ekranGuncelle()
{
    ui->tblGozetmenListeleri->clear();
    ui->tblGozetmenListeleri->setColumnCount(3);
    QStringList Basliklar;
    Basliklar << tr("Gözetmen Adı") << tr("Gözetmen Soyadı") << tr("Gözetmen Sicil No");
    ui->tblGozetmenListeleri->setHorizontalHeaderLabels(Basliklar);
    ui->tblGozetmenListeleri->setRowCount(_liste.size());

    for(int i = 0; i < _liste.size(); i++)
    {
        const auto &nesne_i = _liste[i];
        QTableWidgetItem *hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->Ad());
        ui->tblGozetmenListeleri->setItem(i, 0, hucre);

        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->Soyad());
        ui->tblGozetmenListeleri->setItem(i, 1, hucre);

        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->sicilNo());
        ui->tblGozetmenListeleri->setItem(i, 2, hucre);
    }
}
