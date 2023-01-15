#include "tedaviyontemideposu.h"

TedaviYontemiDeposu::TedaviYontemiDeposu(QObject *parent)
    : QObject{parent}, TemelVeriDeposu<TedaviYontemi> {}
{

}


QDataStream &operator<<(QDataStream &stream, const TedaviYontemiDeposu &veri)
{
    stream << veri._sonId;
    stream << veri._veriler;
    return stream;
}

QDataStream &operator>>(QDataStream &stream, TedaviYontemiDeposu &veri)
{
    stream >> veri._sonId;
    stream >> veri._veriler;
    return stream;
}
