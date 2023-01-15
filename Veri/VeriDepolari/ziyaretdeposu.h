#ifndef ZIYARETDEPOSU_H
#define ZIYARETDEPOSU_H

#include <QObject>
#include <Veri/VeriDepolari/TemelVeriDeposu.h>
#include <Veri/VeriSiniflari/ziyaret.h>

class ZiyaretDeposu : public QObject, public TemelVeriDeposu<Ziyaret>
{
    Q_OBJECT
public:
    explicit ZiyaretDeposu(QObject *parent = nullptr);

signals:

private:
    friend QDataStream &operator<<(QDataStream &stream, const ZiyaretDeposu &veri);
    friend QDataStream &operator>>(QDataStream &stream, ZiyaretDeposu &veri);

};


QDataStream &operator<<(QDataStream &stream, const ZiyaretDeposu &veri);
QDataStream &operator>>(QDataStream &stream, ZiyaretDeposu &veri);

#endif // ZIYARETDEPOSU_H
