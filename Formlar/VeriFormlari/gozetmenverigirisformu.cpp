#include "gozetmenverigirisformu.h"
#include "ui_gozetmenverigirisformu.h"

GozetmenVeriGirisFormu::GozetmenVeriGirisFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GozetmenVeriGirisFormu)
{
    ui->setupUi(this);
    connect(ui->pbKaydet, SIGNAL(clicked()), this, SIGNAL(veriKaydet()));

}

GozetmenVeriGirisFormu::~GozetmenVeriGirisFormu()
{
    delete ui;
}


void GozetmenVeriGirisFormu::ekranGuncelle()
{
    ui->leAdi->setText(_veri->Ad());
    ui->leSoyadi->setText(_veri->Soyad());
    ui->leTCKimlikNo->setText(_veri->TCKimlik());
    ui->leSicilNo->setText(_veri->sicilNo());
    ui->rbErkek->setChecked(_veri->cinsiyet() == Erkek);
    ui->rbKadin->setChecked(_veri->cinsiyet() == Kadin);
    ui->deDogumTarihi->setDate(_veri->dogumTarihi());
}

void GozetmenVeriGirisFormu::veriGuncelle()
{
    _veri->setAd(ui->leAdi->text());
    _veri->setSoyad(ui->leSoyadi->text());
    _veri->setTCKimlik(ui->leTCKimlikNo->text());
    _veri->setSicilNo(ui->leSicilNo->text());
    if(ui->rbErkek->isChecked())
    {
        _veri->setCinsiyet(Erkek);
    }
    if(ui->rbKadin->isChecked())
    {
        _veri->setCinsiyet(Kadin);
    }
    _veri->setDogumTarihi(ui->deDogumTarihi->date());
}
