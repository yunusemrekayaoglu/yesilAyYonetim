#include "gozetmenlistesiislemi.h"

#include <Veri/veri.h>

#include <Formlar/ListeFormlari/gozetmenlistesiformu.h>

GozetmenListesiIslemi::GozetmenListesiIslemi(QObject *parent)
    : QObject{parent}
{
    _islem = new QAction();
    _islem->setText(tr("Gözetmen Listesi"));
    connect(_islem, &QAction::triggered, this, &GozetmenListesiIslemi::main);
}


void GozetmenListesiIslemi::main()
{
    auto veri = Veri::getVeri().gozetmen().tumunuBul([] (GozetmenPtr ) {return true;});
    GozetmenListesiFormu *form = new GozetmenListesiFormu();

    form->setListe(veri);

    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);
    form->show();
}

QAction *GozetmenListesiIslemi::islem()
{
    return _islem;
}


