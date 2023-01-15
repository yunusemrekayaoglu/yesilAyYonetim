#ifndef GOZETMENGIRISISLEMI_H
#define GOZETMENGIRISISLEMI_H

#include <QObject>

#include "../TemelKullaniciIslemleri.h"

class GozetmenGirisIslemi : public QObject, public TemelKullaniciIslemleri
{
    Q_OBJECT
public:
    explicit GozetmenGirisIslemi(QObject *parent = nullptr);



signals:

    // TemelKullaniciIslemleri interface
    void islemChanged();

public:
    QAction *islem() override;

    void setIslem(QAction *newIslem);

public slots:
    void main() override;
    void depoEkle();

private:
    QAction *_islem;
};

#endif // GOZETMENGIRISISLEMI_H
