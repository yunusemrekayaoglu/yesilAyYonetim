#include "ziyaretdeposu.h"

ZiyaretDeposu::ZiyaretDeposu(QObject *parent)
    : QObject{parent}, TemelVeriDeposu<Ziyaret> {}
{

}


QDataStream &operator<<(QDataStream &stream, const ZiyaretDeposu &veri)
{
    stream << veri._sonId;
    stream << veri._veriler;
    return stream;

}


QDataStream &operator>>(QDataStream &stream, ZiyaretDeposu &veri)
{
    stream >> veri._sonId;
    stream >> veri._veriler;
    return stream;
}
