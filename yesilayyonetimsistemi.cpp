#include "yesilayyonetimsistemi.h"
#include "ui_yesilayyonetimsistemi.h"
#include <Islemler/islemdeposu.h>

YesilayYonetimSistemi::YesilayYonetimSistemi(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::YesilayYonetimSistemi)
{
    ui->setupUi(this);
    ui->menuBirim->addAction(IslemDeposu::getVeri().getAction(IslemDeposu::IslemBirimGirisi));
    ui->menuPsikiyatr->addAction(IslemDeposu::getVeri().getAction(IslemDeposu::IslemPsikiyatrGirisi));
    ui->menuG_zetmen->addAction(IslemDeposu::getVeri().getAction(IslemDeposu::IslemGozetmenGirisi));
    ui->menuHasta->addAction(IslemDeposu::getVeri().getAction(IslemDeposu::IslemHastaGirisi));

    ui->menuG_zetmen->addAction(IslemDeposu::getVeri().getAction(IslemDeposu::IslemGozetmenListesi));
    ui->menuBirim->addAction(IslemDeposu::getVeri().getAction(IslemDeposu::IslemBirimListesi));
    ui->menuHasta->addAction(IslemDeposu::getVeri().getAction(IslemDeposu::IslemHastaListesi));
    ui->menuPsikiyatr->addAction(IslemDeposu::getVeri().getAction(IslemDeposu::IslemPsikiyatrListesi));

}

YesilayYonetimSistemi::~YesilayYonetimSistemi()
{
    delete ui;
}

