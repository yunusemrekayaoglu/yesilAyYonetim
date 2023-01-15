#ifndef SONUCDEPOSU_H
#define SONUCDEPOSU_H

#include <QObject>
#include <Veri/VeriDepolari/TemelVeriDeposu.h>
#include <Veri/VeriSiniflari/sonuc.h>

class SonucDeposu : public QObject, public TemelVeriDeposu<Sonuc>
{
    Q_OBJECT
public:
    explicit SonucDeposu(QObject *parent = nullptr);

signals:

private:
    friend QDataStream &operator<<(QDataStream &stream, const SonucDeposu &veri);
    friend QDataStream &operator>>(QDataStream &stream, SonucDeposu &veri);

};


QDataStream &operator<<(QDataStream &stream, const SonucDeposu &veri);
QDataStream &operator>>(QDataStream &stream, SonucDeposu &veri);

#endif // SONUCDEPOSU_H
