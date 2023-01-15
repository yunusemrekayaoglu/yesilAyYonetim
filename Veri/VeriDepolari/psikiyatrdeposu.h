#ifndef PSIKIYATRDEPOSU_H
#define PSIKIYATRDEPOSU_H

#include <QObject>
#include <Veri/VeriDepolari/TemelVeriDeposu.h>
#include <Veri/VeriSiniflari/psikiyatr.h>

class PsikiyatrDeposu : public QObject, public TemelVeriDeposu<Psikiyatr>
{
    Q_OBJECT
public:
    explicit PsikiyatrDeposu(QObject *parent = nullptr);

signals:

private:
    friend QDataStream &operator<<(QDataStream &stream, const PsikiyatrDeposu &veri);
    friend QDataStream &operator>>(QDataStream &stream, PsikiyatrDeposu &veri);

};


QDataStream &operator<<(QDataStream &stream, const PsikiyatrDeposu &veri);
QDataStream &operator>>(QDataStream &stream, PsikiyatrDeposu &veri);


#endif // PSIKIYATRDEPOSU_H
