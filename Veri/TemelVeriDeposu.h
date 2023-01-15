#ifndef TEMELVERIDEPOSU_H
#define TEMELVERIDEPOSU_H

#include <Veri/Tanimlar.h>
#include <functional>

template<class Veri>
class TemelVeriDeposu
{
public:
    typedef std::shared_ptr<Veri> VeriPtr;
    typedef QList<VeriPtr>        VeriListesi;

    typedef std::function<bool(Veri)> FiltreFonksiyonu;
    TemelVeriDeposu() : _veriler{0}, _sonId{0} {}

    VeriPtr yeniNesne()
    {
        return std::make_shared<Veri>();
    }

    bool nesneEkle(VeriPtr veri)
    {
        for(const auto &kayitliVeri : _veriler)
        {
            if(veri->id() == kayitliVeri->id())
            {
                return false;
            }
        }
        _veriler.append(veri);
        return true;
    }

    bool nesneSil(VeriPtr silinecekVeri)
    {
        for(const auto &kayitliVeri : _veriler)
        {
            if(silinecekVeri->id() == kayitliVeri->id())
            {
                kayitliVeri->setSilindiMi(true);
                return true;
            }
        }
        return false;
    }

    VeriPtr ilkiniBul(FiltreFonksiyonu f)
    {
        for(auto i = _veriler.begin(); i != _veriler.end(); i++)
        {
            auto veri = *i;
            if(veri->silindiMi() == false && f(veri) == true)
            {
                return veri;
            }
        }
        return VeriPtr(nullptr);
    }

    VeriPtr sonuncuyuBul(FiltreFonksiyonu f)
    {
        for(auto i = _veriler.rbegin(); i != _veriler.rend(); i++)
        {
            auto veri = *i;
            if(veri->silindiMi() == false && f(veri) == true)
            {
                return veri;
            }
        }
        return VeriPtr(nullptr);
    }

    VeriListesi tumunuBul(FiltreFonksiyonu f)
    {
        VeriListesi sonuc;
        for(auto i = _veriler.begin(); i != _veriler.end(); i++)
        {
            auto veri = *i;
            if(veri->silindiMi() == false && f(veri) == true)
            {
                sonuc.append(veri);
            }
        }
        return sonuc;
    }

protected:
    VeriListesi _veriler;
    TamSayi _sonId;
};

#endif // TEMELVERIDEPOSU_H
