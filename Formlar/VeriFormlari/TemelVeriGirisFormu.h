#ifndef TEMELVERIGIRISFORMU_H
#define TEMELVERIGIRISFORMU_H
#include <Veri/Tanimlar.h>

template <class Ptr>
class TemelVeriGirisFormu
{
protected:
    Ptr _veri;

public:
    Ptr getVeri()
    {
        veriGuncelle();
        return _veri;
    }

    void setVeri(Ptr a)
    {
        _veri = a;
        ekranGuncelle();

    }

    virtual void ekranGuncelle() = 0;  // virtual ve = 0 olmasının sebebi inherit
    virtual void veriGuncelle()  = 0; // edilen sınıfta yapılma zorunluluğu kılar.

};

#endif // TEMELVERIGIRISFORMU_H
