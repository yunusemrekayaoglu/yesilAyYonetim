#ifndef PSIKIYATR_H
#define PSIKIYATR_H

#include "insan.h"

class Psikiyatr : public Insan
{
    Q_OBJECT
public:
    Q_PROPERTY(TamSayi diplomaNo READ diplomaNo WRITE setDiplomaNo NOTIFY diplomaNoChanged)
    Q_PROPERTY(Metin sicilNo READ sicilNo WRITE setSicilNo NOTIFY sicilNoChanged)
    Q_PROPERTY(Metin bolum READ bolum WRITE setBolum NOTIFY bolumChanged)
    Q_PROPERTY(TamSayi psikiyatrId READ psikiyatrId WRITE setPsikiyatrId NOTIFY psikiyatrIdChanged)
    Q_PROPERTY(TamSayi birimId READ birimId WRITE setBirimId NOTIFY birimIdChanged)

    explicit Psikiyatr(QObject *parent = nullptr);


    const Metin &sicilNo() const;

    const Metin &bolum() const;

    TamSayi psikiyatrId() const;

    TamSayi birimId() const;

    TamSayi diplomaNo() const;

public slots:
    void setDiplomaNo(TamSayi newDiplomaNo);
    void setSicilNo(const Metin &newSicilNo);
    void setBolum(const Metin &newBolum);
    void setPsikiyatrId(TamSayi newPsikiyatrId);
    void setBirimId(TamSayi newBirimId);

signals:

    void diplomaNoChanged(TamSayi newDiplomaNo);

    void sicilNoChanged(const Metin &newSicilNo);

    void bolumChanged(const Metin &newBolum);

    void psikiyatrIdChanged(TamSayi newPsikiyatrId);

    void birimIdChanged(TamSayi newBirimId);


private:
    TamSayi _diplomaNo;
    Metin   _sicilNo;
    Metin   _bolum;
    TamSayi _psikiyatrId;
    TamSayi _birimId;

    friend QDataStream &operator<<(QDataStream &stream, const Psikiyatr &veri);
    friend QDataStream &operator>>(QDataStream &stream, Psikiyatr &veri);

};

QDataStream &operator<<(QDataStream &stream, const Psikiyatr &veri);
QDataStream &operator>>(QDataStream &stream, Psikiyatr &veri);


#endif // PSIKIYATR_H
