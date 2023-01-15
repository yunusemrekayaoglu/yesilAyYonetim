#ifndef GOZETMENVERIGIRISFORMU_H
#define GOZETMENVERIGIRISFORMU_H

#include <QWidget>
#include <Formlar/VeriFormlari/TemelVeriGirisFormu.h>
#include <Veri/VeriSiniflari/gozetmen.h>

namespace Ui {
class GozetmenVeriGirisFormu;
}

class GozetmenVeriGirisFormu : public QWidget, public TemelVeriGirisFormu<GozetmenPtr>
{
    Q_OBJECT

public:
    explicit GozetmenVeriGirisFormu(QWidget *parent = nullptr);
    ~GozetmenVeriGirisFormu();

private:
    Ui::GozetmenVeriGirisFormu *ui;

    // TemelVeriGirisFormu interface
public:
    void ekranGuncelle() override;
    void veriGuncelle() override;
signals:
    void veriKaydet();
};

#endif // GOZETMENVERIGIRISFORMU_H
