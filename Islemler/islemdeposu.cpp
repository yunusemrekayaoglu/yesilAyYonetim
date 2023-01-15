#include "islemdeposu.h"
#include <Islemler/VeriGirisi/birimgirisislemi.h>
#include <Islemler/VeriGirisi/gozetmengirisislemi.h>
#include <Islemler/VeriGirisi/hastagirisislemi.h>
#include <Islemler/VeriGirisi/psikiyatrgirisislemi.h>

#include <Islemler/VeriListeleme/gozetmenlistesiislemi.h>
#include <Islemler/VeriListeleme/birimlistesiislemi.h>
#include <Islemler/VeriListeleme/hastalistesiislemi.h>
#include <Islemler/VeriListeleme/psikiyatrlistesiislemi.h>

IslemDeposu &IslemDeposu::getVeri()
{
    static IslemDeposu islemDeposu;
    return islemDeposu;
}

QAction *IslemDeposu::getAction(IslemSirasi x)
{
    return _islemler[x]->islem();
}

void IslemDeposu::calistir(IslemSirasi y)
{
    _islemler[y]->main();
}

IslemDeposu::IslemDeposu(QObject *parent)
    : QObject{parent}
{
    _islemler.append(std::make_shared<BirimGirisIslemi>());
    _islemler.append(std::make_shared<GozetmenGirisIslemi>());
    _islemler.append(std::make_shared<HastaGirisIslemi>());
    _islemler.append(std::make_shared<PsikiyatrGirisIslemi>());

    _islemler.append(std::make_shared<GozetmenListesiIslemi>());
    _islemler.append(std::make_shared<BirimListesiIslemi>());
    _islemler.append(std::make_shared<HastaListesiIslemi>());
    _islemler.append(std::make_shared<PsikiyatrListesiIslemi>());

}
