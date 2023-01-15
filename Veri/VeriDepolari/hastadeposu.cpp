#include "hastadeposu.h"

HastaDeposu::HastaDeposu(QObject *parent)
    : QObject{parent}, TemelVeriDeposu<Hasta>{}
{

}


QDataStream &operator<<(QDataStream &stream, const HastaDeposu &veri)
{
    stream << veri._sonId;
    stream << veri._veriler;
    return stream;

}

QDataStream &operator>>(QDataStream &stream, HastaDeposu &veri)
{
    stream >> veri._sonId;
    stream >> veri._veriler;
    return stream;
}
