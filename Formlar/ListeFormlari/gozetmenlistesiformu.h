#ifndef GOZETMENLISTESIFORMU_H
#define GOZETMENLISTESIFORMU_H

#include <QWidget>
#include <Veri/Tanimlar.h>
namespace Ui {
class GozetmenListesiFormu;
}

class GozetmenListesiFormu : public QWidget
{
    Q_OBJECT

public:
    explicit GozetmenListesiFormu(QWidget *parent = nullptr);
    ~GozetmenListesiFormu();

    const GozetmenListesi &liste() const;

public slots:
    void setListe(const GozetmenListesi &newListe);

private:
    Ui::GozetmenListesiFormu *ui;
    GozetmenListesi _liste;
    void ekranGuncelle();
};

#endif // GOZETMENLISTESIFORMU_H
