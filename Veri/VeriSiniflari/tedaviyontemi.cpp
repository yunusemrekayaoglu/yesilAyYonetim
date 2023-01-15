#include "tedaviyontemi.h"

TedaviYontemi::TedaviYontemi(QObject *parent)
    : TemelVeriSinifi{parent}
{

}



TamSayi TedaviYontemi::TedaviYontemiId() const
{
    return _tedaviYontemiId;
}

void TedaviYontemi::setTedaviYontemiId(TamSayi newTedaviYontemiId)
{
    if (_tedaviYontemiId == newTedaviYontemiId)
        return;
    _tedaviYontemiId = newTedaviYontemiId;
    emit TedaviYontemiIdChanged(_tedaviYontemiId);
}

TamSayi TedaviYontemi::ziyaretId() const
{
    return _ziyaretId;
}

void TedaviYontemi::setZiyaretId(TamSayi newZiyaretId)
{
    if (_ziyaretId == newZiyaretId)
        return;
    _ziyaretId = newZiyaretId;
    emit ziyaretIdChanged(_ziyaretId);
}

TamSayi TedaviYontemi::psikiyatrId() const
{
    return _psikiyatrId;
}

void TedaviYontemi::setPsikiyatrId(TamSayi newPsikiyatrId)
{
    if (_psikiyatrId == newPsikiyatrId)
        return;
    _psikiyatrId = newPsikiyatrId;
    emit psikiyatrIdChanged(_psikiyatrId);
}

TamSayi TedaviYontemi::gozetmenId() const
{
    return _gozetmenId;
}

void TedaviYontemi::setGozetmenId(TamSayi newGozetmenId)
{
    if (_gozetmenId == newGozetmenId)
        return;
    _gozetmenId = newGozetmenId;
    emit gozetmenIdChanged(_gozetmenId);
}

TamSayi TedaviYontemi::bagimlilikTuruTeshisId() const
{
    return _bagimlilikTuruTeshisId;
}

void TedaviYontemi::setBagimlilikTuruTeshisId(TamSayi newBagimlilikTuruTeshisId)
{
    if (_bagimlilikTuruTeshisId == newBagimlilikTuruTeshisId)
        return;
    _bagimlilikTuruTeshisId = newBagimlilikTuruTeshisId;
    emit bagimlilikTuruTeshisIdChanged(_bagimlilikTuruTeshisId);
}

TedaviYontemleri TedaviYontemi::tedaviYontemleri() const
{
    return _tedaviYontemleri;
}

void TedaviYontemi::setTedaviYontemleri(TedaviYontemleri newTedaviYontemleri)
{
    if (_tedaviYontemleri == newTedaviYontemleri)
        return;
    _tedaviYontemleri = newTedaviYontemleri;
    emit tedaviYontemleriChanged(_tedaviYontemleri);
}

QDataStream &operator<<(QDataStream &stream, const TedaviYontemi &veri)
{
    stream << veri._tedaviYontemiId;
    stream << veri._tedaviYontemleri;
    stream << veri._bagimlilikTuruTeshisId;
    stream << veri._gozetmenId;
    stream << veri._psikiyatrId;
    stream << veri._ziyaretId;
    stream << veri._id;
    stream << veri._silindiMi;
    return stream;
}

QDataStream &operator>>(QDataStream &stream, TedaviYontemi &veri)
{
    stream >> veri._tedaviYontemiId;
    stream >> veri._tedaviYontemleri;
    stream >> veri._bagimlilikTuruTeshisId;
    stream >> veri._gozetmenId;
    stream >> veri._psikiyatrId;
    stream >> veri._ziyaretId;
    stream >> veri._id;
    stream >> veri._silindiMi;
    return stream;
}
