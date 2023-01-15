#include "birimlistesiislemi.h"

#include <Veri/veri.h>

#include <Formlar/ListeFormlari/birimlistesiformu.h>

BirimListesiIslemi::BirimListesiIslemi(QObject *parent)
    : QObject{parent}
{
    _islem = new QAction();
    _islem->setText(tr("Birim Listesi"));
    connect(_islem, &QAction::triggered, this, &BirimListesiIslemi::main);

}


void BirimListesiIslemi::main()
{
    auto veri = Veri::getVeri().birim().tumunuBul([] (BirimPtr) {return true;});
    BirimListesiFormu *form = new BirimListesiFormu();

    form->setListe(veri);

    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);
    form->show();
}

QAction *BirimListesiIslemi::islem()
{
    return _islem;
}
