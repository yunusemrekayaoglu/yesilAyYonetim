#ifndef BIRIMDEPOSU_H
#define BIRIMDEPOSU_H

#include <QObject>
#include <Veri/VeriDepolari/TemelVeriDeposu.h>
#include <Veri/VeriSiniflari/birim.h>

class BirimDeposu : public QObject, public TemelVeriDeposu<Birim>
{
    Q_OBJECT
public:
    explicit BirimDeposu(QObject *parent = nullptr);

signals:

private:
    friend QDataStream &operator<<(QDataStream &stream, const BirimDeposu &veri);
    friend QDataStream &operator>>(QDataStream &stream, BirimDeposu &veri);

};

QDataStream &operator<<(QDataStream &stream, const BirimDeposu &veri);
QDataStream &operator>>(QDataStream &stream, BirimDeposu &veri);

#endif // BIRIMDEPOSU_H
