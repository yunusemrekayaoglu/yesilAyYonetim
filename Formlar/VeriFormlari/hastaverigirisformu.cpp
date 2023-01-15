#include "hastaverigirisformu.h"
#include "ui_hastaverigirisformu.h"

HastaVeriGirisFormu::HastaVeriGirisFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HastaVeriGirisFormu)
{
    ui->setupUi(this);
    connect(ui->pbKaydet, SIGNAL(clicked()), this, SIGNAL(veriKaydet()));

}

HastaVeriGirisFormu::~HastaVeriGirisFormu()
{
    delete ui;
}


void HastaVeriGirisFormu::ekranGuncelle()
{
    ui->leAdi->setText(_veri->Ad());
    ui->leSoyadi->setText(_veri->Soyad());
    ui->leTCKimlikNo->setText(_veri->TCKimlik());
    ui->rbErkek->setChecked(_veri->cinsiyet() == Erkek);
    ui->rbKadin->setChecked(_veri->cinsiyet() == Kadin);
    ui->deDogumTarihi->setDate(_veri->dogumTarihi());
    ui->pteOykusu->setPlainText(_veri->oykusu());
}

void HastaVeriGirisFormu::veriGuncelle()
{
    _veri->setAd(ui->leAdi->text());
    _veri->setSoyad(ui->leSoyadi->text());
    _veri->setTCKimlik(ui->leTCKimlikNo->text());
    if(ui->rbErkek->isChecked())
    {
        _veri->setCinsiyet(Erkek);
    }
    if(ui->rbKadin->isChecked())
    {
        _veri->setCinsiyet(Kadin);
    }
    _veri->setDogumTarihi(ui->deDogumTarihi->date());
    _veri->setOykusu(ui->pteOykusu->toPlainText());
}
