#ifndef PSIKIYATRGIRISISLEMI_H
#define PSIKIYATRGIRISISLEMI_H

#include <QObject>
#include "../TemelKullaniciIslemleri.h"

class PsikiyatrGirisIslemi : public QObject, public TemelKullaniciIslemleri
{
    Q_OBJECT
public:
    explicit PsikiyatrGirisIslemi(QObject *parent = nullptr);

signals:

    void islemChanged();

public:


    // TemelKullaniciIslemleri interface
public:
    QAction *islem() override;


public slots:
    void main() override;
    void depoEkle();

private:
    QAction *_islem;

};

#endif // PSIKIYATRGIRISISLEMI_H
