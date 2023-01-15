#include "psikiyatrgirisislemi.h"

#include <Veri/veri.h>
#include <Formlar/VeriFormlari/psikiyatrverigirisformu.h>

PsikiyatrGirisIslemi::PsikiyatrGirisIslemi(QObject *parent)
    : QObject{parent}
{
    _islem = new QAction();
    _islem->setText(tr("Psikiyatr Giriş İşlemi"));
    _islem->setIcon(QIcon(":/Resimler/psikiyatr.png"));
    connect(_islem, &QAction::triggered, this, &PsikiyatrGirisIslemi::main);
}


void PsikiyatrGirisIslemi::main()
{
    auto veri = Veri::getVeri().psikiyatr().yeniNesne();
    PsikiyatrVeriGirisFormu *form = new PsikiyatrVeriGirisFormu();
    connect(form, &PsikiyatrVeriGirisFormu::veriKaydet, this, &PsikiyatrGirisIslemi::depoEkle);
    form->setVeri(veri);
    form->show();

}

void PsikiyatrGirisIslemi::depoEkle()
{
    PsikiyatrVeriGirisFormu *frmx = dynamic_cast<PsikiyatrVeriGirisFormu *>(sender());
    auto veri = frmx->getVeri();
    Veri::getVeri().psikiyatr().nesneEkle(veri);
    frmx->close();
}


QAction *PsikiyatrGirisIslemi::islem()
{
    return _islem;
}
