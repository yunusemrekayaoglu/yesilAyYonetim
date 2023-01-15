#ifndef TEMELVERISINIFI_H
#define TEMELVERISINIFI_H

#include <QObject>
#include <Veri/Tanimlar.h>

class TemelVeriSinifi : public QObject
{
    Q_OBJECT
public:
    Q_PROPERTY(TamSayi id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(Mantiksal silindiMi READ silindiMi WRITE setSilindiMi NOTIFY silindiMiChanged)

    explicit TemelVeriSinifi(QObject *parent = nullptr);

    TamSayi id() const;

    Mantiksal silindiMi() const;

public slots:
    void setId(TamSayi newId);
    void setSilindiMi(Mantiksal newSilindiMi);

signals:
    void idChanged(TamSayi newId);

    void silindiMiChanged(Mantiksal newSilindiMi);

protected:
    TamSayi     _id;
    Mantiksal   _silindiMi;


};

#endif // TEMELVERISINIFI_H
