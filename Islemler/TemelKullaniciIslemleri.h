#ifndef TEMELKULLANICIISLEMLERI_H
#define TEMELKULLANICIISLEMLERI_H

#include <QAction>

class TemelKullaniciIslemleri
{
public:
    virtual void main() = 0;
    virtual QAction *islem() = 0;

};

#endif // TEMELKULLANICIISLEMLERI_H
