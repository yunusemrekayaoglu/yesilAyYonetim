#include "bagimlilikturuteshisverigirisformu.h"
#include "ui_bagimlilikturuteshisverigirisformu.h"

BagimlilikTuruTeshisVeriGirisFormu::BagimlilikTuruTeshisVeriGirisFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BagimlilikTuruTeshisVeriGirisFormu)
{
    ui->setupUi(this);
    connect(ui->pbKaydet, SIGNAL(clicked()), this, SIGNAL(veriKaydet()));

}

BagimlilikTuruTeshisVeriGirisFormu::~BagimlilikTuruTeshisVeriGirisFormu()
{
    delete ui;
}


void BagimlilikTuruTeshisVeriGirisFormu::ekranGuncelle()
{
    ui->cbAlkol->setChecked(_veri->bagimlilikTurleri()      == alkol);
    ui->cbTutun->setChecked(_veri->bagimlilikTurleri()      == tutun);
    ui->cbMadde->setChecked(_veri->bagimlilikTurleri()      == madde);
    ui->cbKumar->setChecked(_veri->bagimlilikTurleri()      == kumar);
    ui->cbTeknoloji->setChecked(_veri->bagimlilikTurleri()  == teknoloji);


}

void BagimlilikTuruTeshisVeriGirisFormu::veriGuncelle()
{
    if(ui->cbAlkol->isChecked())
    {
        _veri->setBagimlilikTurleri(alkol);
    }
    if(ui->cbTutun->isChecked())
    {
        _veri->setBagimlilikTurleri(tutun);
    }
    if(ui->cbMadde->isChecked())
    {
        _veri->setBagimlilikTurleri(madde);
    }
    if(ui->cbKumar->isChecked())
    {
        _veri->setBagimlilikTurleri(kumar);
    }
    if(ui->cbTeknoloji->isChecked())
    {
        _veri->setBagimlilikTurleri(teknoloji);
    }
}
