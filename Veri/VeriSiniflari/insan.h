#ifndef INSAN_H
#define INSAN_H

#include "temelverisinifi.h"

class Insan : public TemelVeriSinifi
{
    Q_OBJECT
public:
    Q_PROPERTY(Metin Ad READ Ad WRITE setAd NOTIFY AdChanged)
    Q_PROPERTY(Metin Soyad READ Soyad WRITE setSoyad NOTIFY SoyadChanged)
    Q_PROPERTY(Metin TCKimlik READ TCKimlik WRITE setTCKimlik NOTIFY TCKimlikChanged)
    Q_PROPERTY(Tarih dogumTarihi READ dogumTarihi WRITE setDogumTarihi NOTIFY dogumTarihiChanged)
    Q_PROPERTY(Cinsiyet cinsiyet READ cinsiyet WRITE setCinsiyet NOTIFY cinsiyetChanged)

    explicit Insan(QObject *parent = nullptr);

    const Metin &Ad() const;

    const Metin &Soyad() const;

    const Metin &TCKimlik() const;



    const Tarih &dogumTarihi() const;

    Cinsiyet cinsiyet() const;

public slots:
    void setAd(const Metin &newAd);
    void setSoyad(const Metin &newSoyad);
    void setTCKimlik(const Metin &newTCKimlik);
    void setDogumTarihi(const Tarih &newDogumTarihi);
    void setCinsiyet(Cinsiyet newCinsiyet);

signals:
    void AdChanged(const Metin &newAd);

    void SoyadChanged(const Metin &newSoyad);

    void TCKimlikChanged(const Metin &newTCKimlik);

    void dogumTarihiChanged(const Tarih &newDogumTarihi);

    void cinsiyetChanged(Cinsiyet newCinsiyet);

protected:
    Metin       _ad;
    Metin       _soyad;
    Metin       _TCKimlik;
    Tarih       _dogumTarihi;
    Cinsiyet    _cinsiyet;

};

#endif // INSAN_H
