#include "sonuc.h"

Sonuc::Sonuc(QObject *parent)
    : TemelVeriSinifi{parent}
{

}

Mantiksal Sonuc::basariliMi() const
{
    return _basariliMi;
}

void Sonuc::setBasariliMi(Mantiksal newBasariliMi)
{
    if (_basariliMi == newBasariliMi)
        return;
    _basariliMi = newBasariliMi;
    emit basariliMiChanged(_basariliMi);
}

const TarihSaat &Sonuc::iyilesmeSuresi() const
{
    return _iyilesmeSuresi;
}

void Sonuc::setIyilesmeSuresi(const TarihSaat &newIyilesmeSuresi)
{
    if (_iyilesmeSuresi == newIyilesmeSuresi)
        return;
    _iyilesmeSuresi = newIyilesmeSuresi;
    emit iyilesmeSuresiChanged(_iyilesmeSuresi);
}

TamSayi Sonuc::sonucId() const
{
    return _sonucId;
}

void Sonuc::setSonucId(TamSayi newSonucId)
{
    if (_sonucId == newSonucId)
        return;
    _sonucId = newSonucId;
    emit sonucIdChanged(_sonucId);
}

TamSayi Sonuc::hastaId() const
{
    return _hastaId;
}

void Sonuc::setHastaId(TamSayi newHastaId)
{
    if (_hastaId == newHastaId)
        return;
    _hastaId = newHastaId;
    emit hastaIdChanged(_hastaId);
}


QDataStream &operator<<(QDataStream &stream, const Sonuc &veri)
{
    stream << veri._sonucId;
    stream << veri._basariliMi;
    stream << veri._hastaId;
    stream << veri._iyilesmeSuresi;
    stream << veri._id;
    stream << veri._silindiMi;
    return stream;
}

QDataStream &operator>>(QDataStream &stream, Sonuc &veri)
{
    stream >> veri._sonucId;
    stream >> veri._basariliMi;
    stream >> veri._hastaId;
    stream >> veri._iyilesmeSuresi;
    stream >> veri._id;
    stream >> veri._silindiMi;
    return stream;
}

