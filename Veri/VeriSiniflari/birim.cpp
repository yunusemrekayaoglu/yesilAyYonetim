#include "birim.h"

Birim::Birim(QObject *parent)
    : TemelVeriSinifi{parent}
{

}

const Metin &Birim::birimAdi() const
{
    return _birimAdi;
}

void Birim::setBirimAdi(const Metin &newBirimAdi)
{
    if (_birimAdi == newBirimAdi)
        return;
    _birimAdi = newBirimAdi;
    emit birimAdiChanged(_birimAdi);
}

const Metin &Birim::birimKodu() const
{
    return _birimKodu;
}

void Birim::setBirimKodu(const Metin &newBirimKodu)
{
    if (_birimKodu == newBirimKodu)
        return;
    _birimKodu = newBirimKodu;
    emit birimKoduChanged(_birimKodu);
}

const Metin &Birim::birimIletisim() const
{
    return _birimIletisim;
}

void Birim::setBirimIletisim(const Metin &newBirimIletisim)
{
    if (_birimIletisim == newBirimIletisim)
        return;
    _birimIletisim = newBirimIletisim;
    emit birimIletisimChanged(_birimIletisim);
}

TamSayi Birim::birimId() const
{
    return _birimId;
}

void Birim::setBirimId(TamSayi newBirimId)
{
    if (_birimId == newBirimId)
        return;
    _birimId = newBirimId;
    emit birimIdChanged(_birimId);
}

QDataStream &operator<<(QDataStream &stream, const Birim &veri)
{
    stream << veri._birimAdi;
    stream << veri._birimId;
    stream << veri._birimIletisim;
    stream << veri._id;
    stream << veri._silindiMi;
    return stream;
}


QDataStream &operator>>(QDataStream &stream, Birim &veri)
{
    stream >> veri._birimAdi;
    stream >> veri._birimId;
    stream >> veri._birimIletisim;
    stream >> veri._id;
    stream >> veri._silindiMi;
    return stream;
}
