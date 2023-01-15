#include "gozetmengirisislemi.h"

#include <Veri/veri.h>
#include <Formlar/VeriFormlari/gozetmenverigirisformu.h>

GozetmenGirisIslemi::GozetmenGirisIslemi(QObject *parent)
    : QObject{parent}
{
    _islem = new QAction();
    _islem->setText(tr("Gözetmen Giriş İşlemi"));
    _islem->setIcon(QIcon(":Resimler/gozetmen.png"));
    connect(_islem, &QAction::triggered, this, &GozetmenGirisIslemi::main);
}

void GozetmenGirisIslemi::main()
{
    auto veri = Veri::getVeri().gozetmen().yeniNesne();
    GozetmenVeriGirisFormu *form = new GozetmenVeriGirisFormu();
    connect(form, &GozetmenVeriGirisFormu::veriKaydet, this, &GozetmenGirisIslemi::depoEkle);
    form->setVeri(veri);
    form->show();
}

void GozetmenGirisIslemi::depoEkle()
{
    GozetmenVeriGirisFormu *frmx = dynamic_cast<GozetmenVeriGirisFormu *>(sender());
    auto veri = frmx->getVeri();
    Veri::getVeri().gozetmen().nesneEkle(veri);
    frmx->close();
}
void GozetmenGirisIslemi::setIslem(QAction *newIslem)
{
    if (_islem == newIslem)
        return;
    _islem = newIslem;
    emit islemChanged();
}




QAction *GozetmenGirisIslemi::islem()
{
    return _islem;
}
