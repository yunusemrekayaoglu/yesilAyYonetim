#ifndef HASTAVERIGIRISFORMU_H
#define HASTAVERIGIRISFORMU_H

#include <QWidget>
#include <Formlar/VeriFormlari/TemelVeriGirisFormu.h>
#include <Veri/VeriSiniflari/hasta.h>

namespace Ui {
class HastaVeriGirisFormu;
}

class HastaVeriGirisFormu : public QWidget, public TemelVeriGirisFormu<HastaPtr>
{
    Q_OBJECT

public:
    explicit HastaVeriGirisFormu(QWidget *parent = nullptr);
    ~HastaVeriGirisFormu();

private:
    Ui::HastaVeriGirisFormu *ui;

    // TemelVeriGirisFormu interface
public:
    void ekranGuncelle() override;
    void veriGuncelle() override;
signals:
    void veriKaydet();
};

#endif // HASTAVERIGIRISFORMU_H
