#ifndef BAGIMLILIKTURUTESHISDEPOSU_H
#define BAGIMLILIKTURUTESHISDEPOSU_H

#include <QObject>
#include <Veri/VeriDepolari/TemelVeriDeposu.h>
#include <Veri/VeriSiniflari/bagimlilikturuteshis.h>

class BagimlilikTuruTeshisDeposu : public QObject, public TemelVeriDeposu<BagimlilikTuruTeshis>
{
    Q_OBJECT
public:
    explicit BagimlilikTuruTeshisDeposu(QObject *parent = nullptr);

signals:

private:
    friend QDataStream &operator<<(QDataStream &stream, const BagimlilikTuruTeshisDeposu &veri);
    friend QDataStream &operator>>(QDataStream &stream, BagimlilikTuruTeshisDeposu &veri);


};

QDataStream &operator<<(QDataStream &stream, const BagimlilikTuruTeshisDeposu &veri);
QDataStream &operator>>(QDataStream &stream, BagimlilikTuruTeshisDeposu &veri);


#endif // BAGIMLILIKTURUTESHISDEPOSU_H
