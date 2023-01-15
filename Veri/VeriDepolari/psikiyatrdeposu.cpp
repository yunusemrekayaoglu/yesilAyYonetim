#include "psikiyatrdeposu.h"

PsikiyatrDeposu::PsikiyatrDeposu(QObject *parent)
    : QObject{parent}, TemelVeriDeposu<Psikiyatr> {}
{

}


QDataStream &operator<<(QDataStream &stream, const PsikiyatrDeposu &veri)
{
    stream << veri._sonId;
    stream << veri._veriler;
    return stream;
}

QDataStream &operator>>(QDataStream &stream, PsikiyatrDeposu &veri)
{
    stream >> veri._sonId;
    stream >> veri._veriler;
    return stream;
}
