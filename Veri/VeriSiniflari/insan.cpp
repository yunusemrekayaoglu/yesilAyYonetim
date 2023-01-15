#include "insan.h"

Insan::Insan(QObject *parent)
    : TemelVeriSinifi{parent}
{

}

const Metin &Insan::Ad() const
{
    return _ad;
}

void Insan::setAd(const Metin &newAd)
{
    if (_ad == newAd)
        return;
    _ad = newAd;
    emit AdChanged(_ad);
}

const Metin &Insan::Soyad() const
{
    return _soyad;
}

void Insan::setSoyad(const Metin &newSoyad)
{
    if (_soyad == newSoyad)
        return;
    _soyad = newSoyad;
    emit SoyadChanged(_soyad);
}

const Metin &Insan::TCKimlik() const
{
    return _TCKimlik;
}

void Insan::setTCKimlik(const Metin &newTCKimlik)
{
    if (_TCKimlik == newTCKimlik)
        return;
    _TCKimlik = newTCKimlik;
    emit TCKimlikChanged(_TCKimlik);
}

const Tarih &Insan::dogumTarihi() const
{
    return _dogumTarihi;
}

void Insan::setDogumTarihi(const Tarih &newDogumTarihi)
{
    if (_dogumTarihi == newDogumTarihi)
        return;
    _dogumTarihi = newDogumTarihi;
    emit dogumTarihiChanged(_dogumTarihi);
}

Cinsiyet Insan::cinsiyet() const
{
    return _cinsiyet;
}

void Insan::setCinsiyet(Cinsiyet newCinsiyet)
{
    if (_cinsiyet == newCinsiyet)
        return;
    _cinsiyet = newCinsiyet;
    emit cinsiyetChanged(_cinsiyet);
}

