#ifndef PSIKIYATRLISTESIISLEMI_H
#define PSIKIYATRLISTESIISLEMI_H

#include <QObject>
#include <Islemler/TemelKullaniciIslemleri.h>

class PsikiyatrListesiIslemi : public QObject, public TemelKullaniciIslemleri
{
    Q_OBJECT
public:
    explicit PsikiyatrListesiIslemi(QObject *parent = nullptr);

signals:
private:
    QAction *_islem;




    // TemelKullaniciIslemleri interface
public slots:
    void main() override;

public:
    QAction *islem() override;
};

#endif // PSIKIYATRLISTESIISLEMI_H
