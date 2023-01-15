#ifndef GOZETMENLISTESIISLEMI_H
#define GOZETMENLISTESIISLEMI_H

#include <QObject>
#include <Islemler/TemelKullaniciIslemleri.h>

class GozetmenListesiIslemi : public QObject, public TemelKullaniciIslemleri
{
    Q_OBJECT
public:
    explicit GozetmenListesiIslemi(QObject *parent = nullptr);


signals:


private:
    QAction *_islem;

    // TemelKullaniciIslemleri interface
public slots:
    void main() override;

public:
    QAction *islem() override;


};

#endif // GOZETMENLISTESIISLEMI_H
