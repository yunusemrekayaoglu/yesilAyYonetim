#ifndef GOZETMEN_H
#define GOZETMEN_H

#include "insan.h"

class Gozetmen : public Insan
{
    Q_OBJECT
public:
    Q_PROPERTY(Metin sicilNo READ sicilNo WRITE setSicilNo NOTIFY sicilNoChanged)
    Q_PROPERTY(TamSayi gozetmenId READ gozetmenId WRITE setGozetmenId NOTIFY gozetmenIdChanged)
    Q_PROPERTY(TamSayi birimId READ birimId WRITE setBirimId NOTIFY birimIdChanged)

    explicit Gozetmen(QObject *parent = nullptr);
    const Metin &sicilNo() const;

    TamSayi gozetmenId() const;

    TamSayi birimId() const;

public slots:
    void setSicilNo(const Metin &newSicilNo);
    void setGozetmenId(TamSayi newGozetmenId);
    void setBirimId(TamSayi newBirimId);

signals:
    void sicilNoChanged(const Metin &newSicilNo);

    void gozetmenIdChanged(TamSayi newGozetmenId);

    void birimIdChanged(TamSayi newBirimId);

private:
    Metin   _sicilNo;
    TamSayi _gozetmenId;
    TamSayi _birimId;

    friend QDataStream &operator<<(QDataStream &stream, const Gozetmen &veri);
    friend QDataStream &operator>>(QDataStream &stream, Gozetmen &veri);

};

QDataStream &operator<<(QDataStream &stream, const Gozetmen &veri);
QDataStream &operator>>(QDataStream &stream, Gozetmen &veri);


#endif // GOZETMEN_H
