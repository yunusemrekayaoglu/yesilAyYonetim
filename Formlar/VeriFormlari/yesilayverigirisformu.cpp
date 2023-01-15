#include "yesilayverigirisformu.h"
#include "ui_yesilayverigirisformu.h"

YesilayVeriGirisFormu::YesilayVeriGirisFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::YesilayVeriGirisFormu)
{
    ui->setupUi(this);
    connect(ui->pbKaydet, SIGNAL(clicked()), this, SIGNAL(veriKaydet()));
}

YesilayVeriGirisFormu::~YesilayVeriGirisFormu()
{
    delete ui;
}


void YesilayVeriGirisFormu::ekranGuncelle()
{
    ui->leBirimAdi->setText(_veri->birimAdi());
    ui->leBirimKodu->setText(_veri->birimKodu());
    ui->pteIletisim->setPlainText(_veri->birimIletisim());
}

void YesilayVeriGirisFormu::veriGuncelle()
{
    _veri->setBirimAdi(ui->leBirimAdi->text());
    _veri->setBirimKodu(ui->leBirimKodu->text());
    _veri->setBirimIletisim(ui->pteIletisim->toPlainText());
}
