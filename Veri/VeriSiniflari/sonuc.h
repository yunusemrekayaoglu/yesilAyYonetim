#ifndef SONUC_H
#define SONUC_H

#include "temelverisinifi.h"

class Sonuc : public TemelVeriSinifi
{
    Q_OBJECT
public:
    Q_PROPERTY(Mantiksal basariliMi READ basariliMi WRITE setBasariliMi NOTIFY basariliMiChanged)
    Q_PROPERTY(TarihSaat iyilesmeSuresi READ iyilesmeSuresi WRITE setIyilesmeSuresi NOTIFY iyilesmeSuresiChanged)
    Q_PROPERTY(TamSayi sonucId READ sonucId WRITE setSonucId NOTIFY sonucIdChanged)
    Q_PROPERTY(TamSayi hastaId READ hastaId WRITE setHastaId NOTIFY hastaIdChanged)

    explicit Sonuc(QObject *parent = nullptr);

    Mantiksal basariliMi() const;

    const TarihSaat &iyilesmeSuresi() const;

    TamSayi sonucId() const;


    TamSayi hastaId() const;

public slots:
    void setBasariliMi(Mantiksal newBasariliMi);
    void setIyilesmeSuresi(const TarihSaat &newIyilesmeSuresi);
    void setSonucId(TamSayi newSonucId);
    void setHastaId(TamSayi newHastaId);


signals:
    void basariliMiChanged(Mantiksal newBasariliMi);

    void iyilesmeSuresiChanged(const TarihSaat &newIyilesmeSuresi);

    void sonucIdChanged(TamSayi newSonucId);


    void hastaIdChanged(TamSayi newHastaId);

private:
    Mantiksal   _basariliMi;
    TarihSaat   _iyilesmeSuresi;
    TamSayi     _sonucId;
    TamSayi     _hastaId;

    friend QDataStream &operator<<(QDataStream &stream, const Sonuc &veri);
    friend QDataStream &operator>>(QDataStream &stream, Sonuc &veri);

};

QDataStream &operator<<(QDataStream &stream, const Sonuc &veri);
QDataStream &operator>>(QDataStream &stream, Sonuc &veri);


#endif // SONUC_H
