#ifndef BIRIMLISTESIFORMU_H
#define BIRIMLISTESIFORMU_H

#include <QWidget>
#include <Veri/Tanimlar.h>


namespace Ui {
class BirimListesiFormu;
}

class BirimListesiFormu : public QWidget
{
    Q_OBJECT

public:
    explicit BirimListesiFormu(QWidget *parent = nullptr);
    ~BirimListesiFormu();


    const BirimListesi &liste() const;

public slots:
    void setListe(const BirimListesi &newListe);

private:
    Ui::BirimListesiFormu *ui;
    BirimListesi _liste;
    void ekranGuncelle();
};

#endif // BIRIMLISTESIFORMU_H
