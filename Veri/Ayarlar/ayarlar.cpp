#include "ayarlar.h"
#include <QDir>
#include <QStandardPaths>
#include <QFile>
#include <QDataStream>

Ayarlar &Ayarlar::ayar()
{
    static Ayarlar ayr;
    return ayr;
}

Ayarlar::~Ayarlar()
{
    auto klasor = QStandardPaths::writableLocation(QStandardPaths::ConfigLocation);
    QDir a(klasor);
    if(!a.exists())
    {
        a.mkpath(klasor);
    }
    QFile dosya(klasor + "/ayarlar.cfg");
    if(dosya.open(QIODevice::WriteOnly))
    {
        QDataStream stream(&dosya);
        stream << _birimId;
        stream << _gozetmenId;
        stream << _hastaId;
        stream << _psikiyatrId;
    }
}


Ayarlar::Ayarlar(QObject *parent)
    : QObject{parent}, _birimId {-1}, _gozetmenId {-1}, _hastaId {-1}, _psikiyatrId {-1}
{
    auto klasor = QStandardPaths::writableLocation(QStandardPaths::ConfigLocation);
    QDir a(klasor);
    if(!a.exists())
    {
        a.mkpath(klasor);

    }
    QFile dosya(klasor + "/ayarlar.cfg");
    if(dosya.open(QIODevice::ReadOnly))
    {
        QDataStream stream(&dosya);
        stream >> _birimId;
        stream >> _gozetmenId;
        stream >> _hastaId;
        stream >> _psikiyatrId;
    }
}

TamSayi Ayarlar::psikiyatrId() const
{
    return _psikiyatrId;
}

void Ayarlar::setPsikiyatrId(TamSayi newPsikiyatrId)
{
    if (_psikiyatrId == newPsikiyatrId)
        return;
    _psikiyatrId = newPsikiyatrId;
    emit psikiyatrIdChanged(_psikiyatrId);
}

TamSayi Ayarlar::hastaId() const
{
    return _hastaId;
}

void Ayarlar::setHastaId(TamSayi newHastaId)
{
    if (_hastaId == newHastaId)
        return;
    _hastaId = newHastaId;
    emit hastaIdChanged(_hastaId);
}

TamSayi Ayarlar::gozetmenId() const
{
    return _gozetmenId;
}

void Ayarlar::setGozetmenId(TamSayi newGozetmenId)
{
    if (_gozetmenId == newGozetmenId)
        return;
    _gozetmenId = newGozetmenId;
    emit gozetmenIdChanged(_gozetmenId);
}

TamSayi Ayarlar::birimId() const
{
    return _birimId;
}

void Ayarlar::setBirimId(TamSayi newBirimId)
{
    if (_birimId == newBirimId)
        return;
    _birimId = newBirimId;
    emit birimIdChanged(_birimId);
}
