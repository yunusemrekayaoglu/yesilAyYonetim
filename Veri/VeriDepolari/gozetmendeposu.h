#ifndef GOZETMENDEPOSU_H
#define GOZETMENDEPOSU_H

#include <QObject>
#include <Veri/VeriDepolari/TemelVeriDeposu.h>
#include <Veri/VeriSiniflari/gozetmen.h>
class GozetmenDeposu : public QObject, public TemelVeriDeposu<Gozetmen>
{
    Q_OBJECT
public:
    explicit GozetmenDeposu(QObject *parent = nullptr);

signals:

private:
    friend QDataStream &operator<<(QDataStream &stream, const GozetmenDeposu &veri);
    friend QDataStream &operator>>(QDataStream &stream, GozetmenDeposu &veri);

};

QDataStream &operator<<(QDataStream &stream, const GozetmenDeposu &veri);
QDataStream &operator>>(QDataStream &stream, GozetmenDeposu &veri);

#endif // GOZETMENDEPOSU_H
