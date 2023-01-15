#ifndef YESILAYYONETIMSISTEMI_H
#define YESILAYYONETIMSISTEMI_H

#include <QMainWindow>
#include <Islemler/TemelKullaniciIslemleri.h>

QT_BEGIN_NAMESPACE
namespace Ui { class YesilayYonetimSistemi; }
QT_END_NAMESPACE

class YesilayYonetimSistemi : public QMainWindow
{
    Q_OBJECT

public:
    YesilayYonetimSistemi(QWidget *parent = nullptr);
    ~YesilayYonetimSistemi();

private:
    Ui::YesilayYonetimSistemi *ui;
};
#endif // YESILAYYONETIMSISTEMI_H
