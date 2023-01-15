#include "veri.h"
#include <QStandardPaths>
#include <QDir>
#include <QFile>
#include <QDataStream>
#include <QDebug>

void Veri::kaydet()
{
    QFile dosya(dosyaYolu());
    if(dosya.open(QIODevice::WriteOnly))
    {
        QDataStream out(&dosya);

        out << *this;
        dosya.close();
    }
}

void Veri::yukle()
{
    QFile dosya(dosyaYolu());
    if(dosya.open(QIODevice::ReadOnly))
    {
        QDataStream in(&dosya);

        in >> *this;
        dosya.close();
    }
}

Veri::~Veri()
{
    kaydet();
}

Veri::Veri(QObject *parent)
    : QObject{parent}
{
    yukle();
}

QString Veri::dosyaYolu()
{
    auto klasor = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QDir a(klasor);
    if(!a.exists())
    {
        a.mkpath(klasor);
    }
    qDebug() << klasor + "/veri.dat";
    return klasor + "/veri.dat";
}


QDataStream &operator<<(QDataStream &stream, const Veri &veri)
{
    stream << veri._hasta;
    stream << veri._gozetmen;
    stream << veri._psikiyatr;
    stream << veri._birim;
    stream << veri._ziyaret;
    stream << veri._tedaviYontemi;
    stream << veri._bagimlilikTuruTeshis;
    stream << veri._sonuc;
    return stream;
}

QDataStream &operator>>(QDataStream &stream, Veri &veri)
{
    stream >> veri._hasta;
    stream >> veri._gozetmen;
    stream >> veri._psikiyatr;
    stream >> veri._birim;
    stream >> veri._ziyaret;
    stream >> veri._tedaviYontemi;
    stream >> veri._bagimlilikTuruTeshis;
    stream >> veri._sonuc;
    return stream;
}
