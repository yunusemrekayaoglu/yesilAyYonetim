#ifndef BIRIMGIRISISLEMI_H
#define BIRIMGIRISISLEMI_H

#include <QObject>

#include "../TemelKullaniciIslemleri.h"


class BirimGirisIslemi : public QObject, public TemelKullaniciIslemleri
{
    Q_OBJECT
public:
    explicit BirimGirisIslemi(QObject *parent = nullptr);

signals:

    void islemChanged();


    // TemelKullaniciIslemleri interface
public:
    QAction *islem() override;
    void setIslem(QAction *newIslem);

public slots:
    void main() override;
    void depoEkle();
private:
    QAction *_islem;


};

#endif // BIRIMGIRISISLEMI_H
