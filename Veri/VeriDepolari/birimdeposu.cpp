#include "birimdeposu.h"

BirimDeposu::BirimDeposu(QObject *parent)
    : QObject{parent}, TemelVeriDeposu<Birim> {}
{

}


QDataStream &operator<<(QDataStream &stream, const BirimDeposu &veri)
{
    stream << veri._sonId;
    stream << veri._veriler;
    return stream;
}

QDataStream &operator>>(QDataStream &stream, BirimDeposu &veri)
{
    stream >> veri._sonId;
    stream >> veri._veriler;
    return stream;
}
