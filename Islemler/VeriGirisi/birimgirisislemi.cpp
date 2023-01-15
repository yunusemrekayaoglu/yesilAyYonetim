#include "birimgirisislemi.h"

#include <Veri/veri.h>
#include <Formlar/VeriFormlari/yesilayverigirisformu.h>

BirimGirisIslemi::BirimGirisIslemi(QObject *parent)
    : QObject{parent}
{
    _islem = new QAction();
    _islem->setText(tr("Birim Giriş İşlemi"));
    _islem->setIcon(QIcon(":Resimler/yesilayLogo.png"));
    connect(_islem, &QAction::triggered, this, &BirimGirisIslemi::main);
}


void BirimGirisIslemi::main()
{
    auto veri = Veri::getVeri().birim().yeniNesne();
    YesilayVeriGirisFormu *form = new YesilayVeriGirisFormu();
    connect (form, &YesilayVeriGirisFormu::veriKaydet, this, &BirimGirisIslemi::depoEkle);
    form->setVeri(veri);

    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);
    form->show();
}

void BirimGirisIslemi::depoEkle()
{
    YesilayVeriGirisFormu *frmx = dynamic_cast<YesilayVeriGirisFormu *>(sender());
    auto veri = frmx->getVeri();
    Veri::getVeri().birim().nesneEkle(veri);
    frmx->close();
}

void BirimGirisIslemi::setIslem(QAction *newIslem)
{
    if (_islem == newIslem)
        return;
    _islem = newIslem;
    emit islemChanged();
}

QAction *BirimGirisIslemi::islem()
{
    return _islem;
}
