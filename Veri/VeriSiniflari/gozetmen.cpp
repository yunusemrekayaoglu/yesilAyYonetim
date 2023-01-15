#include "gozetmen.h"

Gozetmen::Gozetmen(QObject *parent)
    : Insan{parent}
{

}

const Metin &Gozetmen::sicilNo() const
{
    return _sicilNo;
}

void Gozetmen::setSicilNo(const Metin &newSicilNo)
{
    if (_sicilNo == newSicilNo)
        return;
    _sicilNo = newSicilNo;
    emit sicilNoChanged(_sicilNo);
}

TamSayi Gozetmen::gozetmenId() const
{
    return _gozetmenId;
}

void Gozetmen::setGozetmenId(TamSayi newGozetmenId)
{
    if (_gozetmenId == newGozetmenId)
        return;
    _gozetmenId = newGozetmenId;
    emit gozetmenIdChanged(_gozetmenId);
}

TamSayi Gozetmen::birimId() const
{
    return _birimId;
}

void Gozetmen::setBirimId(TamSayi newBirimId)
{
    if (_birimId == newBirimId)
        return;
    _birimId = newBirimId;
    emit birimIdChanged(_birimId);
}


QDataStream &operator<<(QDataStream &stream, const Gozetmen &veri)
{
    stream << veri._gozetmenId;
    stream << veri._birimId;
    stream << veri._sicilNo;
    stream << veri._TCKimlik;
    stream << veri._ad;
    stream << veri._soyad;
    stream << veri._TCKimlik;
    stream << veri._dogumTarihi;
    stream << veri._id;
    stream << veri._silindiMi;
    return stream;
}

QDataStream &operator>>(QDataStream &stream, Gozetmen &veri)
{
    stream >> veri._gozetmenId;
    stream >> veri._birimId;
    stream >> veri._sicilNo;
    stream >> veri._TCKimlik;
    stream >> veri._ad;
    stream >> veri._soyad;
    stream >> veri._TCKimlik;
    stream >> veri._dogumTarihi;
    stream >> veri._id;
    stream >> veri._silindiMi;
    return stream;
}
