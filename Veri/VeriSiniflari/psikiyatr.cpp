#include "psikiyatr.h"

Psikiyatr::Psikiyatr(QObject *parent)
    : Insan{parent}
{

}

TamSayi Psikiyatr::diplomaNo() const
{
    return _diplomaNo;
}

void Psikiyatr::setDiplomaNo(TamSayi newDiplomaNo)
{
    if (_diplomaNo == newDiplomaNo)
        return;
    _diplomaNo = newDiplomaNo;
    emit diplomaNoChanged(_diplomaNo);
}


const Metin &Psikiyatr::sicilNo() const
{
    return _sicilNo;
}

void Psikiyatr::setSicilNo(const Metin &newSicilNo)
{
    if (_sicilNo == newSicilNo)
        return;
    _sicilNo = newSicilNo;
    emit sicilNoChanged(_sicilNo);
}

const Metin &Psikiyatr::bolum() const
{
    return _bolum;
}

void Psikiyatr::setBolum(const Metin &newBolum)
{
    if (_bolum == newBolum)
        return;
    _bolum = newBolum;
    emit bolumChanged(_bolum);
}

TamSayi Psikiyatr::psikiyatrId() const
{
    return _psikiyatrId;
}

void Psikiyatr::setPsikiyatrId(TamSayi newPsikiyatrId)
{
    if (_psikiyatrId == newPsikiyatrId)
        return;
    _psikiyatrId = newPsikiyatrId;
    emit psikiyatrIdChanged(_psikiyatrId);
}

TamSayi Psikiyatr::birimId() const
{
    return _birimId;
}

void Psikiyatr::setBirimId(TamSayi newBirimId)
{
    if (_birimId == newBirimId)
        return;
    _birimId = newBirimId;
    emit birimIdChanged(_birimId);
}

QDataStream &operator<<(QDataStream &stream, const Psikiyatr &veri)
{
    stream << veri._psikiyatrId;
    stream << veri._birimId;
    stream << veri._bolum;
    stream << veri._ad;
    stream << veri._soyad;
    stream << veri._diplomaNo;
    stream << veri._sicilNo;
    stream << veri._TCKimlik;
    stream << veri._cinsiyet;
    stream << veri._dogumTarihi;
    stream << veri._TCKimlik;
    stream << veri._cinsiyet;
    return stream;
}

QDataStream &operator>>(QDataStream &stream, Psikiyatr &veri)
{
    stream >> veri._psikiyatrId;
    stream >> veri._birimId;
    stream >> veri._bolum;
    stream >> veri._ad;
    stream >> veri._soyad;
    stream >> veri._diplomaNo;
    stream >> veri._sicilNo;
    stream >> veri._TCKimlik;
    stream >> veri._cinsiyet;
    stream >> veri._dogumTarihi;
    stream >> veri._TCKimlik;
    stream >> veri._cinsiyet;
    return stream;
}
