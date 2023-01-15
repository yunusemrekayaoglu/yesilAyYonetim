#ifndef YESILAYVERIGIRISFORMU_H
#define YESILAYVERIGIRISFORMU_H

#include <QWidget>
#include <Formlar/VeriFormlari/TemelVeriGirisFormu.h>
#include <Veri/VeriSiniflari/birim.h>

namespace Ui {
class YesilayVeriGirisFormu;
}

class YesilayVeriGirisFormu : public QWidget, public TemelVeriGirisFormu<BirimPtr>
{
    Q_OBJECT

public:
    explicit YesilayVeriGirisFormu(QWidget *parent = nullptr);
    ~YesilayVeriGirisFormu();

private:
    Ui::YesilayVeriGirisFormu *ui;

    // TemelVeriGirisFormu interface
public:
    void ekranGuncelle() override;
    void veriGuncelle() override;

signals:
    void veriKaydet();
};

#endif // YESILAYVERIGIRISFORMU_H
