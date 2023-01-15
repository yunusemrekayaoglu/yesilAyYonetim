#ifndef BIRIMLISTESIISLEMI_H
#define BIRIMLISTESIISLEMI_H

#include <QObject>
#include <Islemler/TemelKullaniciIslemleri.h>


class BirimListesiIslemi : public QObject, public TemelKullaniciIslemleri
{
    Q_OBJECT
public:
    explicit BirimListesiIslemi(QObject *parent = nullptr);

signals:

private:
    QAction *_islem;



    // TemelKullaniciIslemleri interface
public slots:
    void main() override;

public:
    QAction *islem() override;
};

#endif // BIRIMLISTESIISLEMI_H
