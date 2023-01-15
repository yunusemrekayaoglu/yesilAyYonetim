#ifndef BAGIMLILIKTURUTESHISVERIGIRISFORMU_H
#define BAGIMLILIKTURUTESHISVERIGIRISFORMU_H

#include <QWidget>
#include <Formlar/VeriFormlari/TemelVeriGirisFormu.h>
#include <Veri/VeriSiniflari/bagimlilikturuteshis.h>

namespace Ui {
class BagimlilikTuruTeshisVeriGirisFormu;
}

class BagimlilikTuruTeshisVeriGirisFormu : public QWidget, public TemelVeriGirisFormu<BagimlilikTuruTeshisPtr>
{
    Q_OBJECT

public:
    explicit BagimlilikTuruTeshisVeriGirisFormu(QWidget *parent = nullptr);
    ~BagimlilikTuruTeshisVeriGirisFormu();

private:
    Ui::BagimlilikTuruTeshisVeriGirisFormu *ui;

    // TemelVeriGirisFormu interface
public:
    void ekranGuncelle() override;
    void veriGuncelle() override;
signals:
    void veriKaydet();
};

#endif // BAGIMLILIKTURUTESHISVERIGIRISFORMU_H
