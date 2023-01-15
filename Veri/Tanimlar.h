#ifndef TANIMLAR_H
#define TANIMLAR_H

#include <QString>
#include <QDateTime>
#include <memory> // shared_ptr -> için kullanıyoruz
#include <QList>

typedef QString                     Metin;
typedef int                         TamSayi;
typedef enum {Kadin = 1, Erkek = 2} Cinsiyet;
typedef QDate                       Tarih;
typedef QTime                       Saat;
typedef QDateTime                   TarihSaat;
typedef bool                        Mantiksal;


// Özel Tanımlamalar

typedef enum {tibbi = 1, psikolojik = 2} TedaviYontemleri;
typedef enum {alkol = 1, tutun = 2, madde = 3, kumar = 4, teknoloji = 5} BagimlilikTurleri;

class Insan;
class Hasta;
class Psikiyatr;
class Gozetmen;
class Birim;
class Ziyaret;
class TedaviYontemi;
class BagimlilikTuruTeshis;
class Sonuc;

typedef std::shared_ptr<Hasta>                  HastaPtr;
typedef std::shared_ptr<Psikiyatr>              PsikiyatrPtr;
typedef std::shared_ptr<Gozetmen>               GozetmenPtr;
typedef std::shared_ptr<Birim>                  BirimPtr;
typedef std::shared_ptr<Ziyaret>                ZiyaretPtr;
typedef std::shared_ptr<TedaviYontemi>          TedaviYontemiPtr;
typedef std::shared_ptr<BagimlilikTuruTeshis>   BagimlilikTuruTeshisPtr;
typedef std::shared_ptr<Sonuc>                  SonucPtr;


typedef QList<HastaPtr>                 HastaListesi;
typedef QList<PsikiyatrPtr>             PsikiyatrListesi;
typedef QList<GozetmenPtr>              GozetmenListesi;
typedef QList<BirimPtr>                 BirimListesi;
typedef QList<ZiyaretPtr>               ZiyaretListesi;
typedef QList<TedaviYontemiPtr>         TedaviYontemiListesi;
typedef QList<BagimlilikTuruTeshisPtr>  BagimlilikTuruTeshisListesi;
typedef QList<SonucPtr>                 SonucListesi;

class HastaDeposu;
class PsikiyatrDeposu;
class GozetmenDeposu;
class BirimDeposu;
class ZiyaretDeposu;
class TedaviYontemiDeposu;
class BagimlilikTuruTeshisDeposu;
class SonucDeposu;


#endif // TANIMLAR_H
