#include "bagimlilikturuteshisdeposu.h"

BagimlilikTuruTeshisDeposu::BagimlilikTuruTeshisDeposu(QObject *parent)
    : QObject{parent}, TemelVeriDeposu<BagimlilikTuruTeshis> {}
{

}

QDataStream &operator<<(QDataStream &stream, const BagimlilikTuruTeshisDeposu &veri)
{
    stream << veri._sonId;
    stream << veri._veriler;
    return stream;
}

QDataStream &operator>>(QDataStream &stream, BagimlilikTuruTeshisDeposu &veri)
{
    stream >> veri._sonId;
    stream >> veri._veriler;
    return stream;
}

