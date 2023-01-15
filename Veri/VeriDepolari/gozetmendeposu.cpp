#include "gozetmendeposu.h"

GozetmenDeposu::GozetmenDeposu(QObject *parent)
    : QObject{parent}, TemelVeriDeposu<Gozetmen> {}
{

}


QDataStream &operator<<(QDataStream &stream, const GozetmenDeposu &veri)
{
    stream << veri._sonId;
    stream << veri._veriler;
    return stream;
}

QDataStream &operator>>(QDataStream &stream, GozetmenDeposu &veri)
{
    stream >> veri._sonId;
    stream >> veri._veriler;
    return stream;
}
