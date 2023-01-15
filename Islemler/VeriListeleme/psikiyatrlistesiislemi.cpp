#include "psikiyatrlistesiislemi.h"

#include <Veri/veri.h>

#include <Formlar/ListeFormlari/psikiyatrlistesiformu.h>

PsikiyatrListesiIslemi::PsikiyatrListesiIslemi(QObject *parent)
    : QObject{parent}
{
    _islem = new QAction();
    _islem->setText(tr("Psikiyatr Listesi"));
    connect(_islem, &QAction::triggered, this, &PsikiyatrListesiIslemi::main);
}


void PsikiyatrListesiIslemi::main()
{
    auto veri = Veri::getVeri().psikiyatr().tumunuBul([] (PsikiyatrPtr) {return true;});
    PsikiyatrListesiFormu *form = new PsikiyatrListesiFormu();

    form->setListe(veri);

    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);
    form->show();
}

QAction *PsikiyatrListesiIslemi::islem()
{
    return _islem;
}
