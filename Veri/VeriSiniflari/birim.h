#ifndef BIRIM_H
#define BIRIM_H

#include "temelverisinifi.h"

class Birim : public TemelVeriSinifi
{
    Q_OBJECT
public:
    Q_PROPERTY(Metin birimAdi READ birimAdi WRITE setBirimAdi NOTIFY birimAdiChanged)
    Q_PROPERTY(Metin birimKodu READ birimKodu WRITE setBirimKodu NOTIFY birimKoduChanged)
    Q_PROPERTY(Metin birimIletisim READ birimIletisim WRITE setBirimIletisim NOTIFY birimIletisimChanged)
    Q_PROPERTY(TamSayi birimId READ birimId WRITE setBirimId NOTIFY birimIdChanged)

    explicit Birim(QObject *parent = nullptr);

    const Metin &birimAdi() const;

    const Metin &birimKodu() const;

    const Metin &birimIletisim() const;

    TamSayi birimId() const;

public slots:
    void setBirimAdi(const Metin &newBirimAdi);
    void setBirimKodu(const Metin &newBirimKodu);
    void setBirimIletisim(const Metin &newBirimIletisim);
    void setBirimId(TamSayi newBirimId);

signals:
    void birimAdiChanged(const Metin &newBirimAdi);

    void birimKoduChanged(const Metin &newBirimKodu);

    void birimIletisimChanged(const Metin &newBirimIletisim);

    void birimIdChanged(TamSayi newBirimId);

private:
    Metin   _birimAdi;
    Metin   _birimKodu;
    Metin   _birimIletisim;
    TamSayi _birimId;

    friend QDataStream &operator<<(QDataStream &stream, const Birim &veri);
    friend QDataStream &operator>>(QDataStream &stream, Birim &veri);

};

QDataStream &operator<<(QDataStream &stream, const Birim &veri);
QDataStream &operator>>(QDataStream &stream, Birim &veri);

#endif // BIRIM_H
