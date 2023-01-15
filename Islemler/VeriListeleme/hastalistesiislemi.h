#ifndef HASTALISTESIISLEMI_H
#define HASTALISTESIISLEMI_H

#include <QObject>
#include <Islemler/TemelKullaniciIslemleri.h>

class HastaListesiIslemi : public QObject, public TemelKullaniciIslemleri
{
    Q_OBJECT
public:
    explicit HastaListesiIslemi(QObject *parent = nullptr);

signals:


private:
    QAction *_islem;




    // TemelKullaniciIslemleri interface
public slots:
    void main() override;

public:
    QAction *islem() override;
};

#endif // HASTALISTESIISLEMI_H
