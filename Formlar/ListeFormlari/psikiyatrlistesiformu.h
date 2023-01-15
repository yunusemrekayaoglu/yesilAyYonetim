#ifndef PSIKIYATRLISTESIFORMU_H
#define PSIKIYATRLISTESIFORMU_H

#include <QWidget>
#include <Veri/Tanimlar.h>

namespace Ui {
class PsikiyatrListesiFormu;
}

class PsikiyatrListesiFormu : public QWidget
{
    Q_OBJECT

public:
    explicit PsikiyatrListesiFormu(QWidget *parent = nullptr);
    ~PsikiyatrListesiFormu();

    const PsikiyatrListesi &liste() const;
    void setListe(const PsikiyatrListesi &newListe);

private:
    Ui::PsikiyatrListesiFormu *ui;
    PsikiyatrListesi _liste;
    void ekranGuncelle();
};

#endif // PSIKIYATRLISTESIFORMU_H
