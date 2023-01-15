#ifndef TEDAVIYONTEMIDEPOSU_H
#define TEDAVIYONTEMIDEPOSU_H

#include <QObject>
#include <Veri/VeriDepolari/TemelVeriDeposu.h>
#include <Veri/VeriSiniflari/tedaviyontemi.h>

class TedaviYontemiDeposu : public QObject, public TemelVeriDeposu<TedaviYontemi>
{
    Q_OBJECT
public:
    explicit TedaviYontemiDeposu(QObject *parent = nullptr);

signals:

private:
    friend QDataStream &operator<<(QDataStream &stream, const TedaviYontemiDeposu &veri);
    friend QDataStream &operator>>(QDataStream &stream, TedaviYontemiDeposu &veri);


};


QDataStream &operator<<(QDataStream &stream, const TedaviYontemiDeposu &veri);
QDataStream &operator>>(QDataStream &stream, TedaviYontemiDeposu &veri);

#endif // TEDAVIYONTEMIDEPOSU_H
