#ifndef ISLEMDEPOSU_H
#define ISLEMDEPOSU_H

#include <QObject>
#include <QList>
#include "TemelKullaniciIslemleri.h"
#include <memory>

class IslemDeposu : public QObject
{
    Q_OBJECT
public:
    static IslemDeposu &getVeri();
    typedef enum
    {
      IslemBirimGirisi = 0,
      IslemGozetmenGirisi = 1,
      IslemHastaGirisi = 2,
      IslemPsikiyatrGirisi = 3,

      IslemGozetmenListesi = 4,
      IslemBirimListesi = 5,
      IslemHastaListesi = 6,
      IslemPsikiyatrListesi = 7,

    } IslemSirasi;

    QAction *getAction(IslemSirasi x);
    void calistir(IslemSirasi y);

signals:

private:
    QList <std::shared_ptr<TemelKullaniciIslemleri>> _islemler;
    explicit IslemDeposu(QObject *parent = nullptr);

};

#endif // ISLEMDEPOSU_H
