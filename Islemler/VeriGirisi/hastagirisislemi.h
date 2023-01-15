#ifndef HASTAGIRISISLEMI_H
#define HASTAGIRISISLEMI_H

#include <QObject>
#include "../TemelKullaniciIslemleri.h"

class HastaGirisIslemi : public QObject, public TemelKullaniciIslemleri
{
    Q_OBJECT
public:
    explicit HastaGirisIslemi(QObject *parent = nullptr);


signals:

    // TemelKullaniciIslemleri interface
public:
    QAction *islem() override;

public slots:
    void main() override;
    void depoEkle();
private:
    QAction *_islem;

};

#endif // HASTAGIRISISLEMI_H
