#ifndef AYARLAR_H
#define AYARLAR_H

#include <QObject>
#include "../Tanimlar.h"

class Ayarlar : public QObject
{
    Q_OBJECT
public:
    Q_PROPERTY(TamSayi birimId READ birimId WRITE setBirimId NOTIFY birimIdChanged)
    Q_PROPERTY(TamSayi gozetmenId READ gozetmenId WRITE setGozetmenId NOTIFY gozetmenIdChanged)
    Q_PROPERTY(TamSayi hastaId READ hastaId WRITE setHastaId NOTIFY hastaIdChanged)
    Q_PROPERTY(TamSayi psikiyatrId READ psikiyatrId WRITE setPsikiyatrId NOTIFY psikiyatrIdChanged)


    static Ayarlar &ayar();
    ~Ayarlar();

    TamSayi birimId() const;

    TamSayi gozetmenId() const;

    TamSayi hastaId() const;

    TamSayi psikiyatrId() const;

public slots:
    void setBirimId(TamSayi newBirimId);
    void setGozetmenId(TamSayi newGozetmenId);
    void setHastaId(TamSayi newHastaId);
    void setPsikiyatrId(TamSayi newPsikiyatrId);


signals:

    void birimIdChanged(TamSayi newBirimId);

    void gozetmenIdChanged(TamSayi newGozetmenId);

    void hastaIdChanged(TamSayi newHastaId);

    void psikiyatrIdChanged(TamSayi newPsikiyatrId);

private:
    explicit Ayarlar(QObject *parent = nullptr);

    TamSayi _birimId;
    TamSayi _gozetmenId;
    TamSayi _hastaId;
    TamSayi _psikiyatrId;
};

#endif // AYARLAR_H
