#include "psikiyatrverigirisformu.h"
#include "ui_psikiyatrverigirisformu.h"

PsikiyatrVeriGirisFormu::PsikiyatrVeriGirisFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PsikiyatrVeriGirisFormu)
{
    ui->setupUi(this);
    connect(ui->pbKaydet, SIGNAL(clicked()), this, SIGNAL(veriKaydet()));
}

PsikiyatrVeriGirisFormu::~PsikiyatrVeriGirisFormu()
{
    delete ui;
}


void PsikiyatrVeriGirisFormu::ekranGuncelle()
{
    ui->leAdi->setText(_veri->Ad());
    ui->leSoyadi->setText(_veri->Soyad());
    ui->leTCKimlikNo->setText(_veri->TCKimlik());
    ui->deDogumTarihi->setDate(_veri->dogumTarihi());
    ui->rbErkek->setChecked(_veri->cinsiyet() == Erkek);
    ui->rbKadin->setChecked(_veri->cinsiyet() == Kadin);
    ui->sbDiplomaNo->setValue(_veri->diplomaNo());
    ui->leSicilNo->setText(_veri->sicilNo());
    ui->leBolumu->setText(_veri->bolum());

}

void PsikiyatrVeriGirisFormu::veriGuncelle()
{
    _veri->setAd(ui->leAdi->text());
    _veri->setSoyad(ui->leSoyadi->text());
    _veri->setTCKimlik(ui->leTCKimlikNo->text());
    _veri->setDogumTarihi(ui->deDogumTarihi->date());
    if(ui->rbErkek->isChecked())
    {
        _veri->setCinsiyet(Erkek);
    }
    if(ui->rbKadin->isChecked())
    {
        _veri->setCinsiyet(Kadin);
    }

    _veri->setDiplomaNo(ui->sbDiplomaNo->value());
    _veri->setSicilNo(ui->leSicilNo->text());
    _veri->setBolum(ui->leBolumu->text());


}
