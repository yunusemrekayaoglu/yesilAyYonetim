#ifndef HASTADEPOSU_H
#define HASTADEPOSU_H

#include <QObject>
#include <Veri/VeriDepolari/TemelVeriDeposu.h>
#include <Veri/VeriSiniflari/hasta.h>

class HastaDeposu : public QObject, public TemelVeriDeposu<Hasta>
{
    Q_OBJECT
public:
    explicit HastaDeposu(QObject *parent = nullptr);

signals:

private:
    friend QDataStream &operator<<(QDataStream &stream, const HastaDeposu &veri);
    friend QDataStream &operator>>(QDataStream &stream, HastaDeposu &veri);

};

QDataStream &operator<<(QDataStream &stream, const HastaDeposu &veri);
QDataStream &operator>>(QDataStream &stream, HastaDeposu &veri);


#endif // HASTADEPOSU_H
