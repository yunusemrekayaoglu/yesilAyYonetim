#ifndef VERI_H
#define VERI_H

#include <QObject>
#include <QDataStream>
#include <Veri/VeriDepolari/bagimlilikturuteshisdeposu.h>
#include <Veri/VeriDepolari/birimdeposu.h>
#include <Veri/VeriDepolari/gozetmendeposu.h>
#include <Veri/VeriDepolari/hastadeposu.h>
#include <Veri/VeriDepolari/psikiyatrdeposu.h>
#include <Veri/VeriDepolari/sonucdeposu.h>
#include <Veri/VeriDepolari/tedaviyontemideposu.h>
#include <Veri/VeriDepolari/ziyaretdeposu.h>



class Veri : public QObject
{
    Q_OBJECT
public:

    BagimlilikTuruTeshisDeposu &bagimlilikTuruTeshis() { return _bagimlilikTuruTeshis;}
    BirimDeposu                &birim()                { return _birim;               }
    GozetmenDeposu             &gozetmen()             { return _gozetmen;            }
    HastaDeposu                &hasta()                { return _hasta;               }
    PsikiyatrDeposu            &psikiyatr()            { return _psikiyatr;           }
    SonucDeposu                &sonuc()                { return _sonuc;               }
    TedaviYontemiDeposu        &tedaviYontemi()        { return _tedaviYontemi;       }
    ZiyaretDeposu              &ziyaret()              { return _ziyaret;             }

    void kaydet();
    void yukle();

    ~Veri();

    static Veri &getVeri() { static Veri nesne; return nesne; }


signals:

private:
    explicit Veri(QObject *parent = nullptr);

    BagimlilikTuruTeshisDeposu  _bagimlilikTuruTeshis;
    BirimDeposu                 _birim;
    GozetmenDeposu              _gozetmen;
    HastaDeposu                 _hasta;
    PsikiyatrDeposu             _psikiyatr;
    SonucDeposu                 _sonuc;
    TedaviYontemiDeposu         _tedaviYontemi;
    ZiyaretDeposu               _ziyaret;

    QString dosyaYolu();

    friend QDataStream &operator<<(QDataStream &stream, const Veri &veri);
    friend QDataStream &operator>>(QDataStream &stream, Veri &veri);


};

QDataStream &operator<<(QDataStream &stream, const Veri &veri);
QDataStream &operator>>(QDataStream &stream, Veri &veri);


#endif // VERI_H
