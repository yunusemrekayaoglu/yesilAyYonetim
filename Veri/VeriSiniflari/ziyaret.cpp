#include "ziyaret.h"

Ziyaret::Ziyaret(QObject *parent)
    : TemelVeriSinifi{parent}
{

}

const Metin &Ziyaret::sikayet() const
{
    return _sikayet;
}

void Ziyaret::setSikayet(const Metin &newSikayet)
{
    if (_sikayet == newSikayet)
        return;
    _sikayet = newSikayet;
    emit sikayetChanged(_sikayet);
}

const Tarih &Ziyaret::gelisTarihi() const
{
    return _gelisTarihi;
}

void Ziyaret::setGelisTarihi(const Tarih &newGelisTarihi)
{
    if (_gelisTarihi == newGelisTarihi)
        return;
    _gelisTarihi = newGelisTarihi;
    emit gelisTarihiChanged(_gelisTarihi);
}

const Saat &Ziyaret::gelisSaati() const
{
    return _gelisSaati;
}

void Ziyaret::setGelisSaati(const Saat &newGelisSaati)
{
    if (_gelisSaati == newGelisSaati)
        return;
    _gelisSaati = newGelisSaati;
    emit gelisSaatiChanged(_gelisSaati);
}

const TarihSaat &Ziyaret::ziyaretSuresi() const
{
    return _ziyaretSuresi;
}

void Ziyaret::setZiyaretSuresi(const TarihSaat &newZiyaretSuresi)
{
    if (_ziyaretSuresi == newZiyaretSuresi)
        return;
    _ziyaretSuresi = newZiyaretSuresi;
    emit ziyaretSuresiChanged(_ziyaretSuresi);
}

TamSayi Ziyaret::ziyaretId() const
{
    return _ziyaretId;
}

void Ziyaret::setZiyaretId(TamSayi newZiyaretId)
{
    if (_ziyaretId == newZiyaretId)
        return;
    _ziyaretId = newZiyaretId;
    emit ziyaretIdChanged(_ziyaretId);
}

TamSayi Ziyaret::hastaId() const
{
    return _hastaId;
}

void Ziyaret::setHastaId(TamSayi newHastaId)
{
    if (_hastaId == newHastaId)
        return;
    _hastaId = newHastaId;
    emit hastaIdChanged(_hastaId);
}

TamSayi Ziyaret::psikiyatrId() const
{
    return _psikiyatrId;
}

void Ziyaret::setPsikiyatrId(TamSayi newPsikiyatrId)
{
    if (_psikiyatrId == newPsikiyatrId)
        return;
    _psikiyatrId = newPsikiyatrId;
    emit psikiyatrIdChanged(_psikiyatrId);
}

TamSayi Ziyaret::tedaviYontemiId() const
{
    return _tedaviYontemiId;
}

void Ziyaret::setTedaviYontemiId(TamSayi newTedaviYontemiId)
{
    if (_tedaviYontemiId == newTedaviYontemiId)
        return;
    _tedaviYontemiId = newTedaviYontemiId;
    emit tedaviYontemiIdChanged(_tedaviYontemiId);
}

TamSayi Ziyaret::bagimlilikTuruTeshisId() const
{
    return _bagimlilikTuruTeshisId;
}

void Ziyaret::setBagimlilikTuruTeshisId(TamSayi newBagimlilikTuruTeshisId)
{
    if (_bagimlilikTuruTeshisId == newBagimlilikTuruTeshisId)
        return;
    _bagimlilikTuruTeshisId = newBagimlilikTuruTeshisId;
    emit bagimlilikTuruTeshisIdChanged(_bagimlilikTuruTeshisId);
}


QDataStream &operator<<(QDataStream &stream, const Ziyaret &veri)
{
    stream << veri._ziyaretId;
    stream << veri._ziyaretSuresi;
    stream << veri._bagimlilikTuruTeshisId;
    stream << veri._gelisSaati;
    stream << veri._gelisTarihi;
    stream << veri._hastaId;
    stream << veri._psikiyatrId;
    stream << veri._sikayet;
    stream << veri._tedaviYontemiId;
    stream << veri._silindiMi;
    stream << veri._id;
    return stream;
}


QDataStream &operator>>(QDataStream &stream, Ziyaret &veri)
{
    stream >> veri._ziyaretId;
    stream >> veri._ziyaretSuresi;
    stream >> veri._bagimlilikTuruTeshisId;
    stream >> veri._gelisSaati;
    stream >> veri._gelisTarihi;
    stream >> veri._hastaId;
    stream >> veri._psikiyatrId;
    stream >> veri._sikayet;
    stream >> veri._tedaviYontemiId;
    stream >> veri._silindiMi;
    stream >> veri._id;
    return stream;
}
