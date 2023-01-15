#ifndef HASTA_H
#define HASTA_H

#include "insan.h"

class Hasta : public Insan
{
    Q_OBJECT
public:
    Q_PROPERTY(Metin oykusu READ oykusu WRITE setOykusu NOTIFY oykusuChanged)
    Q_PROPERTY(TamSayi psikiyatrId READ psikiyatrId WRITE setPsikiyatrId NOTIFY psikiyatrIdChanged)
    Q_PROPERTY(TamSayi gozetmenId READ gozetmenId WRITE setGozetmenId NOTIFY gozetmenIdChanged)
    Q_PROPERTY(TamSayi bagimlilikTuruTeshisId READ bagimlilikTuruTeshisId WRITE setBagimlilikTuruTeshisId NOTIFY bagimlilikTuruTeshisIdChanged)
    Q_PROPERTY(Tarih dogumTarihi READ dogumTarihi WRITE setDogumTarihi NOTIFY dogumTarihiChanged)


    explicit Hasta(QObject *parent = nullptr);


    const Metin &oykusu() const;

    TamSayi psikiyatrId() const;

    TamSayi gozetmenId() const;

    TamSayi bagimlilikTuruTeshisId() const;

    const Tarih &dogumTarihi() const;

public slots:
    void setOykusu(const Metin &newOykusu);
    void setPsikiyatrId(TamSayi newPsikiyatrId);
    void setGozetmenId(TamSayi newGozetmenId);
    void setBagimlilikTuruTeshisId(TamSayi newBagimlilikTuruTeshisId);
    void setDogumTarihi(const Tarih &newDogumTarihi);

signals:

    void oykusuChanged(const Metin &newOykusu);

    void psikiyatrIdChanged(TamSayi newPsikiyatrId);

    void gozetmenIdChanged(TamSayi newGozetmenId);

    void bagimlilikTuruTeshisIdChanged(TamSayi newBagimlilikTuruTeshisId);

    void dogumTarihiChanged(const Tarih &newDogumTarihi);

private:
    Metin       _oykusu;
    TamSayi     _psikiyatrId;
    TamSayi     _gozetmenId;
    TamSayi     _bagimlilikTuruTeshisId;
    Tarih       _dogumTarihi;

    friend QDataStream &operator<<(QDataStream &stream, const Hasta &veri);
    friend QDataStream &operator>>(QDataStream &stream, Hasta &veri);
};

QDataStream &operator<<(QDataStream &stream, const Hasta &veri);
QDataStream &operator>>(QDataStream &stream, Hasta &veri);


#endif // HASTA_H
