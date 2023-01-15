#include "bagimlilikturuteshis.h"

BagimlilikTuruTeshis::BagimlilikTuruTeshis(QObject *parent)
    : TemelVeriSinifi{parent}
{

}

BagimlilikTurleri BagimlilikTuruTeshis::bagimlilikTurleri() const
{
    return _bagimlilikTurleri;
}

void BagimlilikTuruTeshis::setBagimlilikTurleri(BagimlilikTurleri newBagimlilikTurleri)
{
    if (_bagimlilikTurleri == newBagimlilikTurleri)
        return;
    _bagimlilikTurleri = newBagimlilikTurleri;
    emit bagimlilikTurleriChanged(_bagimlilikTurleri);
}

TamSayi BagimlilikTuruTeshis::bagimlilikTuruTeshisId() const
{
    return _bagimlilikTuruTeshisId;
}

void BagimlilikTuruTeshis::setBagimlilikTuruTeshisId(TamSayi newBagimlilikTuruTeshisId)
{
    if (_bagimlilikTuruTeshisId == newBagimlilikTuruTeshisId)
        return;
    _bagimlilikTuruTeshisId = newBagimlilikTuruTeshisId;
    emit bagimlilikTuruTeshisIdChanged(_bagimlilikTuruTeshisId);
}

TamSayi BagimlilikTuruTeshis::ziyaretId() const
{
    return _ziyaretId;
}

void BagimlilikTuruTeshis::setZiyaretId(TamSayi newZiyaretId)
{
    if (_ziyaretId == newZiyaretId)
        return;
    _ziyaretId = newZiyaretId;
    emit ziyaretIdChanged(_ziyaretId);
}

QDataStream &operator<<(QDataStream &stream, const BagimlilikTuruTeshis &veri)
{
    stream << veri._bagimlilikTuruTeshisId;
    stream << veri._bagimlilikTurleri;
    stream << veri._ziyaretId;
    stream << veri._id;
    stream << veri._silindiMi;
    return stream;
}


QDataStream &operator>>(QDataStream &stream, BagimlilikTuruTeshis &veri)
{
    stream >> veri._bagimlilikTuruTeshisId;
    stream >> veri._bagimlilikTurleri;
    stream >> veri._ziyaretId;
    stream >> veri._id;
    stream >> veri._silindiMi;
    return stream;
}
