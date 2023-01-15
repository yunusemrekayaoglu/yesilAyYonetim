#ifndef TEDAVIYONTEMI_H
#define TEDAVIYONTEMI_H

#include "temelverisinifi.h"

class TedaviYontemi : public TemelVeriSinifi
{
    Q_OBJECT
public:
    Q_PROPERTY(TedaviYontemleri tedaviYontemleri READ tedaviYontemleri WRITE setTedaviYontemleri NOTIFY tedaviYontemleriChanged)

    Q_PROPERTY(TamSayi TedaviYontemiId READ TedaviYontemiId WRITE setTedaviYontemiId NOTIFY TedaviYontemiIdChanged)
    Q_PROPERTY(TamSayi ziyaretId READ ziyaretId WRITE setZiyaretId NOTIFY ziyaretIdChanged)
    Q_PROPERTY(TamSayi psikiyatrId READ psikiyatrId WRITE setPsikiyatrId NOTIFY psikiyatrIdChanged)
    Q_PROPERTY(TamSayi gozetmenId READ gozetmenId WRITE setGozetmenId NOTIFY gozetmenIdChanged)
    Q_PROPERTY(TamSayi bagimlilikTuruTeshisId READ bagimlilikTuruTeshisId WRITE setBagimlilikTuruTeshisId NOTIFY bagimlilikTuruTeshisIdChanged)

    explicit TedaviYontemi(QObject *parent = nullptr);

    TamSayi TedaviYontemiId() const;

    TamSayi ziyaretId() const;

    TamSayi psikiyatrId() const;

    TamSayi gozetmenId() const;

    TamSayi bagimlilikTuruTeshisId() const;

    TedaviYontemleri tedaviYontemleri() const;

public slots:
    void setTedaviYontemleri(TedaviYontemleri newTedaviYontemleri);
    void setTedaviYontemiId(TamSayi newTedaviYontemiId);
    void setZiyaretId(TamSayi newZiyaretId);
    void setPsikiyatrId(TamSayi newPsikiyatrId);
    void setGozetmenId(TamSayi newGozetmenId);
    void setBagimlilikTuruTeshisId(TamSayi newBagimlilikTuruTeshisId);

signals:

    void tedaviYontemleriChanged(TedaviYontemleri newTedaviYontemleri);

    void TedaviYontemiIdChanged(TamSayi newTedaviYontemiId);

    void ziyaretIdChanged(TamSayi newZiyaretId);

    void psikiyatrIdChanged(TamSayi newPsikiyatrId);

    void gozetmenIdChanged(TamSayi newGozetmenId);

    void bagimlilikTuruTeshisIdChanged(TamSayi newBagimlilikTuruTeshisId);


private:
    TedaviYontemleri _tedaviYontemleri;
    TamSayi _tedaviYontemiId;
    TamSayi _ziyaretId;
    TamSayi _psikiyatrId;
    TamSayi _gozetmenId;
    TamSayi _bagimlilikTuruTeshisId;

    friend QDataStream &operator<<(QDataStream &stream, const TedaviYontemi &veri);
    friend QDataStream &operator>>(QDataStream &stream, TedaviYontemi &veri);

};

QDataStream &operator<<(QDataStream &stream, const TedaviYontemi &veri);
QDataStream &operator>>(QDataStream &stream, TedaviYontemi &veri);

#endif // TEDAVIYONTEMI_H
