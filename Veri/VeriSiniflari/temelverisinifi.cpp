#include "temelverisinifi.h"

TemelVeriSinifi::TemelVeriSinifi(QObject *parent)
    : QObject{parent}
{

}

TamSayi TemelVeriSinifi::id() const
{
    return _id;
}

void TemelVeriSinifi::setId(TamSayi newId)
{
    if (_id == newId)
        return;
    _id = newId;
    emit idChanged(_id);
}

Mantiksal TemelVeriSinifi::silindiMi() const
{
    return _silindiMi;
}

void TemelVeriSinifi::setSilindiMi(Mantiksal newSilindiMi)
{
    if (_silindiMi == newSilindiMi)
        return;
    _silindiMi = newSilindiMi;
    emit silindiMiChanged(_silindiMi);
}
