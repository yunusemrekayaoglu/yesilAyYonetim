#include "hastagirisislemi.h"
#include <Veri/veri.h>
#include <Formlar/VeriFormlari/hastaverigirisformu.h>


HastaGirisIslemi::HastaGirisIslemi(QObject *parent)
    : QObject{parent}
{
    _islem = new QAction();
    _islem->setText(tr("Hasta Giriş İşlemi"));
    _islem->setIcon(QIcon(":/Resimler/hasta.png"));
    connect(_islem, &QAction::triggered, this, &HastaGirisIslemi::main);
}


void HastaGirisIslemi::main()
{
    auto veri = Veri::getVeri().hasta().yeniNesne();
    HastaVeriGirisFormu *form = new HastaVeriGirisFormu();
    connect(form, &HastaVeriGirisFormu::veriKaydet, this, &HastaGirisIslemi::depoEkle);
    form->setVeri(veri);
    form->show();
}

void HastaGirisIslemi::depoEkle()
{
    HastaVeriGirisFormu *frmx = dynamic_cast<HastaVeriGirisFormu *>(sender());
    auto veri = frmx->getVeri();
    Veri::getVeri().hasta().nesneEkle(veri);
    frmx->close();
}

QAction *HastaGirisIslemi::islem()
{
    return _islem;
}
