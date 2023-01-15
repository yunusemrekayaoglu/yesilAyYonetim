#ifndef ZIYARET_H
#define ZIYARET_H

#include "temelverisinifi.h"

class Ziyaret : public TemelVeriSinifi
{
    Q_OBJECT
public:
    Q_PROPERTY(Metin sikayet READ sikayet WRITE setSikayet NOTIFY sikayetChanged)
    Q_PROPERTY(Tarih gelisTarihi READ gelisTarihi WRITE setGelisTarihi NOTIFY gelisTarihiChanged)
    Q_PROPERTY(Saat gelisSaati READ gelisSaati WRITE setGelisSaati NOTIFY gelisSaatiChanged)
    Q_PROPERTY(TarihSaat ziyaretSuresi READ ziyaretSuresi WRITE setZiyaretSuresi NOTIFY ziyaretSuresiChanged)
    Q_PROPERTY(TamSayi ziyaretId READ ziyaretId WRITE setZiyaretId NOTIFY ziyaretIdChanged)
    Q_PROPERTY(TamSayi hastaId READ hastaId WRITE setHastaId NOTIFY hastaIdChanged)
    Q_PROPERTY(TamSayi psikiyatrId READ psikiyatrId WRITE setPsikiyatrId NOTIFY psikiyatrIdChanged)
    Q_PROPERTY(TamSayi tedaviYontemiId READ tedaviYontemiId WRITE setTedaviYontemiId NOTIFY tedaviYontemiIdChanged)
    Q_PROPERTY(TamSayi bagimlilikTuruTeshisId READ bagimlilikTuruTeshisId WRITE setBagimlilikTuruTeshisId NOTIFY bagimlilikTuruTeshisIdChanged)

    explicit Ziyaret(QObject *parent = nullptr);

    const Metin &sikayet() const;

    const Tarih &gelisTarihi() const;

    const Saat &gelisSaati() const;

    const TarihSaat &ziyaretSuresi() const;

    TamSayi ziyaretId() const;

    TamSayi hastaId() const;

    TamSayi psikiyatrId() const;

    TamSayi tedaviYontemiId() const;

    TamSayi bagimlilikTuruTeshisId() const;

public slots:
    void setSikayet(const Metin &newSikayet);
    void setGelisTarihi(const Tarih &newGelisTarihi);
    void setGelisSaati(const Saat &newGelisSaati);
    void setZiyaretSuresi(const TarihSaat &newZiyaretSuresi);
    void setZiyaretId(TamSayi newZiyaretId);
    void setHastaId(TamSayi newHastaId);
    void setPsikiyatrId(TamSayi newPsikiyatrId);
    void setTedaviYontemiId(TamSayi newTedaviYontemiId);
    void setBagimlilikTuruTeshisId(TamSayi newBagimlilikTuruTeshisId);

signals:
    void sikayetChanged(const Metin &newSikayet);

    void gelisTarihiChanged(const Tarih &newGelisTarihi);

    void gelisSaatiChanged(const Saat &newGelisSaati);

    void ziyaretSuresiChanged(const TarihSaat &newZiyaretSuresi);

    void ziyaretIdChanged(TamSayi newZiyaretId);

    void hastaIdChanged(TamSayi newHastaId);

    void psikiyatrIdChanged(TamSayi newPsikiyatrId);

    void tedaviYontemiIdChanged(TamSayi newTedaviYontemiId);

    void bagimlilikTuruTeshisIdChanged(TamSayi newBagimlilikTuruTeshisId);

private:
    Metin       _sikayet;
    Tarih       _gelisTarihi;
    Saat        _gelisSaati;
    TarihSaat   _ziyaretSuresi;
    TamSayi     _ziyaretId;
    TamSayi     _hastaId;
    TamSayi     _psikiyatrId;
    TamSayi     _tedaviYontemiId;
    TamSayi     _bagimlilikTuruTeshisId;

    friend QDataStream &operator<<(QDataStream &stream, const Ziyaret &veri);
    friend QDataStream &operator>>(QDataStream &stream, Ziyaret &veri);

};

QDataStream &operator<<(QDataStream &stream, const Ziyaret &veri);
QDataStream &operator>>(QDataStream &stream, Ziyaret &veri);



#endif // ZIYARET_H
