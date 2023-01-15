#include "hasta.h"

Hasta::Hasta(QObject *parent)
    : Insan{parent}
{

}


const Metin &Hasta::oykusu() const
{
    return _oykusu;
}

void Hasta::setOykusu(const Metin &newOykusu)
{
    if (_oykusu == newOykusu)
        return;
    _oykusu = newOykusu;
    emit oykusuChanged(_oykusu);
}

TamSayi Hasta::psikiyatrId() const
{
    return _psikiyatrId;
}

void Hasta::setPsikiyatrId(TamSayi newPsikiyatrId)
{
    if (_psikiyatrId == newPsikiyatrId)
        return;
    _psikiyatrId = newPsikiyatrId;
    emit psikiyatrIdChanged(_psikiyatrId);
}

TamSayi Hasta::gozetmenId() const
{
    return _gozetmenId;
}

void Hasta::setGozetmenId(TamSayi newGozetmenId)
{
    if (_gozetmenId == newGozetmenId)
        return;
    _gozetmenId = newGozetmenId;
    emit gozetmenIdChanged(_gozetmenId);
}

TamSayi Hasta::bagimlilikTuruTeshisId() const
{
    return _bagimlilikTuruTeshisId;
}

void Hasta::setBagimlilikTuruTeshisId(TamSayi newBagimlilikTuruTeshisId)
{
    if (_bagimlilikTuruTeshisId == newBagimlilikTuruTeshisId)
        return;
    _bagimlilikTuruTeshisId = newBagimlilikTuruTeshisId;
    emit bagimlilikTuruTeshisIdChanged(_bagimlilikTuruTeshisId);
}

const Tarih &Hasta::dogumTarihi() const
{
    return _dogumTarihi;
}

void Hasta::setDogumTarihi(const Tarih &newDogumTarihi)
{
    if (_dogumTarihi == newDogumTarihi)
        return;
    _dogumTarihi = newDogumTarihi;
    emit dogumTarihiChanged(_dogumTarihi);
}

QDataStream &operator<<(QDataStream &stream, const Hasta &veri)
{
    stream << veri._ad;
    stream << veri._soyad;
    stream << veri._TCKimlik;
    stream << veri._dogumTarihi;
    stream << veri._oykusu;
    stream << veri._psikiyatrId;
    stream << veri._gozetmenId;
    stream << veri._bagimlilikTuruTeshisId;
    stream << veri._silindiMi;
    stream << veri._id;
    return stream;
}

QDataStream &operator>>(QDataStream &stream, Hasta &veri)
{
    stream >> veri._ad;
    stream >> veri._soyad;
    stream >> veri._TCKimlik;
    stream >> veri._dogumTarihi;
    stream >> veri._oykusu;
    stream >> veri._psikiyatrId;
    stream >> veri._gozetmenId;
    stream >> veri._bagimlilikTuruTeshisId;
    stream >> veri._silindiMi;
    stream >> veri._id;
    return stream;
}
