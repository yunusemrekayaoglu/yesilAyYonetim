QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Formlar/ListeFormlari/birimlistesiformu.cpp \
    Formlar/ListeFormlari/gozetmenlistesiformu.cpp \
    Formlar/ListeFormlari/hastalistesiformu.cpp \
    Formlar/ListeFormlari/psikiyatrlistesiformu.cpp \
    Formlar/VeriFormlari/bagimlilikturuteshisverigirisformu.cpp \
    Formlar/VeriFormlari/gozetmenverigirisformu.cpp \
    Formlar/VeriFormlari/hastaverigirisformu.cpp \
    Formlar/VeriFormlari/psikiyatrverigirisformu.cpp \
    Formlar/VeriFormlari/yesilayverigirisformu.cpp \
    Islemler/VeriGirisi/birimgirisislemi.cpp \
    Islemler/VeriGirisi/gozetmengirisislemi.cpp \
    Islemler/VeriGirisi/hastagirisislemi.cpp \
    Islemler/VeriGirisi/psikiyatrgirisislemi.cpp \
    Islemler/VeriListeleme/birimlistesiislemi.cpp \
    Islemler/VeriListeleme/gozetmenlistesiislemi.cpp \
    Islemler/VeriListeleme/hastalistesiislemi.cpp \
    Islemler/VeriListeleme/psikiyatrlistesiislemi.cpp \
    Islemler/islemdeposu.cpp \
    Veri/Ayarlar/ayarlar.cpp \
    Veri/VeriDepolari/bagimlilikturuteshisdeposu.cpp \
    Veri/VeriDepolari/birimdeposu.cpp \
    Veri/VeriDepolari/gozetmendeposu.cpp \
    Veri/VeriDepolari/hastadeposu.cpp \
    Veri/VeriDepolari/psikiyatrdeposu.cpp \
    Veri/VeriDepolari/sonucdeposu.cpp \
    Veri/VeriDepolari/tedaviyontemideposu.cpp \
    Veri/VeriDepolari/ziyaretdeposu.cpp \
    Veri/VeriSiniflari/bagimlilikturuteshis.cpp \
    Veri/VeriSiniflari/birim.cpp \
    Veri/VeriSiniflari/gozetmen.cpp \
    Veri/VeriSiniflari/hasta.cpp \
    Veri/VeriSiniflari/insan.cpp \
    Veri/VeriSiniflari/psikiyatr.cpp \
    Veri/VeriSiniflari/sonuc.cpp \
    Veri/VeriSiniflari/tedaviyontemi.cpp \
    Veri/VeriSiniflari/temelverisinifi.cpp \
    Veri/VeriSiniflari/ziyaret.cpp \
    Veri/veri.cpp \
    main.cpp \
    yesilayyonetimsistemi.cpp

HEADERS += \
    Formlar/ListeFormlari/birimlistesiformu.h \
    Formlar/ListeFormlari/gozetmenlistesiformu.h \
    Formlar/ListeFormlari/hastalistesiformu.h \
    Formlar/ListeFormlari/psikiyatrlistesiformu.h \
    Formlar/VeriFormlari/TemelVeriGirisFormu.h \
    Formlar/VeriFormlari/bagimlilikturuteshisverigirisformu.h \
    Formlar/VeriFormlari/gozetmenverigirisformu.h \
    Formlar/VeriFormlari/hastaverigirisformu.h \
    Formlar/VeriFormlari/psikiyatrverigirisformu.h \
    Formlar/VeriFormlari/yesilayverigirisformu.h \
    Islemler/TemelKullaniciIslemleri.h \
    Islemler/VeriGirisi/birimgirisislemi.h \
    Islemler/VeriGirisi/gozetmengirisislemi.h \
    Islemler/VeriGirisi/hastagirisislemi.h \
    Islemler/VeriGirisi/psikiyatrgirisislemi.h \
    Islemler/VeriListeleme/birimlistesiislemi.h \
    Islemler/VeriListeleme/gozetmenlistesiislemi.h \
    Islemler/VeriListeleme/hastalistesiislemi.h \
    Islemler/VeriListeleme/psikiyatrlistesiislemi.h \
    Islemler/islemdeposu.h \
    Veri/Ayarlar/ayarlar.h \
    Veri/Tanimlar.h \
    Veri/VeriDepolari/TemelVeriDeposu.h \
    Veri/VeriDepolari/bagimlilikturuteshisdeposu.h \
    Veri/VeriDepolari/birimdeposu.h \
    Veri/VeriDepolari/gozetmendeposu.h \
    Veri/VeriDepolari/hastadeposu.h \
    Veri/VeriDepolari/psikiyatrdeposu.h \
    Veri/VeriDepolari/sonucdeposu.h \
    Veri/VeriDepolari/tedaviyontemideposu.h \
    Veri/VeriDepolari/ziyaretdeposu.h \
    Veri/VeriSiniflari/bagimlilikturuteshis.h \
    Veri/VeriSiniflari/birim.h \
    Veri/VeriSiniflari/gozetmen.h \
    Veri/VeriSiniflari/hasta.h \
    Veri/VeriSiniflari/insan.h \
    Veri/VeriSiniflari/psikiyatr.h \
    Veri/VeriSiniflari/sonuc.h \
    Veri/VeriSiniflari/tedaviyontemi.h \
    Veri/VeriSiniflari/temelverisinifi.h \
    Veri/VeriSiniflari/ziyaret.h \
    Veri/veri.h \
    yesilayyonetimsistemi.h

FORMS += \
    Formlar/ListeFormlari/birimlistesiformu.ui \
    Formlar/ListeFormlari/gozetmenlistesiformu.ui \
    Formlar/ListeFormlari/hastalistesiformu.ui \
    Formlar/ListeFormlari/psikiyatrlistesiformu.ui \
    Formlar/VeriFormlari/bagimlilikturuteshisverigirisformu.ui \
    Formlar/VeriFormlari/gozetmenverigirisformu.ui \
    Formlar/VeriFormlari/hastaverigirisformu.ui \
    Formlar/VeriFormlari/psikiyatrverigirisformu.ui \
    Formlar/VeriFormlari/yesilayverigirisformu.ui \
    yesilayyonetimsistemi.ui

TRANSLATIONS += \
    Yesilay_tr_TR.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Kaynaklar.qrc
