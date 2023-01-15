#ifndef PSIKIYATRVERIGIRISFORMU_H
#define PSIKIYATRVERIGIRISFORMU_H

#include <QWidget>
#include <Formlar/VeriFormlari/TemelVeriGirisFormu.h>
#include <Veri/VeriSiniflari/psikiyatr.h>

namespace Ui {
class PsikiyatrVeriGirisFormu;
}

class PsikiyatrVeriGirisFormu : public QWidget, public TemelVeriGirisFormu<PsikiyatrPtr>
{
    Q_OBJECT

public:
    explicit PsikiyatrVeriGirisFormu(QWidget *parent = nullptr);
    ~PsikiyatrVeriGirisFormu();

private:
    Ui::PsikiyatrVeriGirisFormu *ui;

    // TemelVeriGirisFormu interface
public:
    void ekranGuncelle() override;
    void veriGuncelle() override;
signals:
    void veriKaydet();
};

#endif // PSIKIYATRVERIGIRISFORMU_H
