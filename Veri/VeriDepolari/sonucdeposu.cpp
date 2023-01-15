#include "sonucdeposu.h"

SonucDeposu::SonucDeposu(QObject *parent)
    : QObject{parent}, TemelVeriDeposu<Sonuc> {}
{

}


QDataStream &operator<<(QDataStream &stream, const SonucDeposu &veri)
{
    stream << veri._sonId;
    stream << veri._veriler;
    return stream;
}

QDataStream &operator>>(QDataStream &stream, SonucDeposu &veri)
{
    stream >> veri._sonId;
    stream >> veri._veriler;
    return stream;
}
