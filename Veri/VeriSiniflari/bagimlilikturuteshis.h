#ifndef BAGIMLILIKTURUTESHIS_H
#define BAGIMLILIKTURUTESHIS_H

#include "temelverisinifi.h"

class BagimlilikTuruTeshis : public TemelVeriSinifi
{
    Q_OBJECT
public:

    Q_PROPERTY(BagimlilikTurleri bagimlilikTurleri READ bagimlilikTurleri WRITE setBagimlilikTurleri NOTIFY bagimlilikTurleriChanged)
    Q_PROPERTY(TamSayi bagimlilikTuruTeshisId READ bagimlilikTuruTeshisId WRITE setBagimlilikTuruTeshisId NOTIFY bagimlilikTuruTeshisIdChanged)
    Q_PROPERTY(TamSayi ziyaretId READ ziyaretId WRITE setZiyaretId NOTIFY ziyaretIdChanged)


    explicit BagimlilikTuruTeshis(QObject *parent = nullptr);

    BagimlilikTurleri bagimlilikTurleri() const;

    TamSayi bagimlilikTuruTeshisId() const;



    TamSayi ziyaretId() const;

public slots:
    void setBagimlilikTurleri(BagimlilikTurleri newBagimlilikTurleri);
    void setBagimlilikTuruTeshisId(TamSayi newBagimlilikTuruTeshisId);
    void setZiyaretId(TamSayi newZiyaretId);

signals:
    void bagimlilikTurleriChanged(BagimlilikTurleri newBagimlilikTurleri);

    void bagimlilikTuruTeshisIdChanged(TamSayi newBagimlilikTuruTeshisId);

    void ziyaretIdChanged(TamSayi newZiyaretId);

private:
    BagimlilikTurleri   _bagimlilikTurleri;
    TamSayi             _bagimlilikTuruTeshisId;
    TamSayi             _ziyaretId;

    friend QDataStream &operator<<(QDataStream &stream, const BagimlilikTuruTeshis &veri);
    friend QDataStream &operator>>(QDataStream &stream, BagimlilikTuruTeshis &veri);

};

QDataStream &operator<<(QDataStream &stream, const BagimlilikTuruTeshis &veri);
QDataStream &operator>>(QDataStream &stream, BagimlilikTuruTeshis &veri);


#endif // BAGIMLILIKTURUTESHIS_H
