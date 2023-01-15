#ifndef HASTALISTESIFORMU_H
#define HASTALISTESIFORMU_H

#include <QWidget>
#include <Veri/Tanimlar.h>

namespace Ui {
class HastaListesiFormu;
}

class HastaListesiFormu : public QWidget
{
    Q_OBJECT

public:
    explicit HastaListesiFormu(QWidget *parent = nullptr);
    ~HastaListesiFormu();

    const HastaListesi &liste() const;
    void setListe(const HastaListesi &newListe);

private:
    Ui::HastaListesiFormu *ui;
    HastaListesi _liste;
    void ekranGuncelle();
};

#endif // HASTALISTESIFORMU_H
