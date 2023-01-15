#include "hastalistesiislemi.h"

#include <Veri/veri.h>

#include <Formlar/ListeFormlari/hastalistesiformu.h>

HastaListesiIslemi::HastaListesiIslemi(QObject *parent)
    : QObject{parent}
{
    _islem = new QAction();
    _islem->setText(tr("Hasta Listesi"));
    connect(_islem, &QAction::triggered, this, &HastaListesiIslemi::main);
}


void HastaListesiIslemi::main()
{
    auto veri = Veri::getVeri().hasta().tumunuBul([] (HastaPtr) {return true;});
    HastaListesiFormu *form = new HastaListesiFormu();

    form->setListe(veri);

    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);
    form->show();
}

QAction *HastaListesiIslemi::islem()
{
    return _islem;
}
