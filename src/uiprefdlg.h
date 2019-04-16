#ifndef UIPREFDLG_H
#define UIPREFDLG_H

#include <qvariant.h>


#include <Qt3Support/Q3ButtonGroup>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include "colorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_UIPrefDlg
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QComboBox *ui_device;
    QSpacerItem *spacer22;
    Q3ButtonGroup *ButtonGroup35;
    QVBoxLayout *vboxLayout1;
    QGridLayout *gridLayout;
    QSpacerItem *Spacer76;
    QLabel *TextLabel1;
    ColorButton *ui_ch2Color;
    QLabel *TextLabel4;
    QLabel *TextLabel10;
    ColorButton *ui_bgColor;
    ColorButton *ui_borderColor;
    ColorButton *ui_addColor;
    QSpacerItem *Spacer79;
    QSpinBox *ui_lineWidth;
    QPushButton *ui_fontBut;
    ColorButton *ui_gridColor;
    QSpacerItem *Spacer86;
    QSpacerItem *Spacer80;
    QSpacerItem *Spacer85;
    QLabel *TextLabel17;
    ColorButton *ui_subColor;
    QLabel *TextLabel3;
    QSpacerItem *Spacer93;
    QLabel *TextLabel15;
    ColorButton *ui_ch1Color;
    QLabel *TextLabel2;
    QSpacerItem *Spacer78;
    QSpacerItem *Spacer84;
    QLabel *TextLabel13;
    QLabel *TextLabel14;
    ColorButton *ui_timeMarkerColor;
    QSpacerItem *Spacer77;
    QLabel *TextLabel12;
    QSpacerItem *Spacer88;
    QHBoxLayout *hboxLayout1;
    QPushButton *ui_defaultColors;
    QSpacerItem *Spacer87;
    Q3ButtonGroup *ButtonGroup36;
    QGridLayout *gridLayout1;
    QComboBox *ui_defaultFftZoom;
    QLabel *TextLabel7;
    QLabel *TextLabel9;
    QSpacerItem *Spacer63;
    QComboBox *ui_defaultFftLength;
    QComboBox *ui_ch2Drawmode;
    QSpacerItem *Spacer66;
    QComboBox *ui_averageBufferLength;
    QLabel *TextLabel5;
    QLabel *TextLabel6;
    QComboBox *ui_ch1Drawmode;
    QSpacerItem *Spacer64;
    QLabel *TextLabel8;
    QHBoxLayout *hboxLayout2;
    QPushButton *ui_defaultFft;
    QSpacerItem *Spacer90;
    QSpacerItem *Spacer89;
    QSpacerItem *Spacer65;
    QLabel *TextLabel17_2;
    QSpacerItem *Spacer67;
    QSpinBox *ui_lineWidthFft;
    QSpacerItem *Spacer67_2;
    QSpacerItem *Spacer83;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *Spacer11;
    QPushButton *ui_apply;
    QPushButton *ui_ok;
    QPushButton *ui_close;

    void setupUi(QDialog *UIPrefDlg)
    {
        if (UIPrefDlg->objectName().isEmpty())
            UIPrefDlg->setObjectName(QString::fromUtf8("UIPrefDlg"));
        UIPrefDlg->resize(546, 458);
        UIPrefDlg->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(UIPrefDlg);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel1 = new QLabel(UIPrefDlg);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout->addWidget(textLabel1);

        ui_device = new QComboBox(UIPrefDlg);
        ui_device->setObjectName(QString::fromUtf8("ui_device"));

        hboxLayout->addWidget(ui_device);

        spacer22 = new QSpacerItem(151, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer22);


        vboxLayout->addLayout(hboxLayout);

        ButtonGroup35 = new Q3ButtonGroup(UIPrefDlg);
        ButtonGroup35->setObjectName(QString::fromUtf8("ButtonGroup35"));
        ButtonGroup35->setColumnLayout(0, Qt::Vertical);
        ButtonGroup35->layout()->setSpacing(5);
        ButtonGroup35->layout()->setContentsMargins(10, 10, 10, 10);
        vboxLayout1 = new QVBoxLayout();
        QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(ButtonGroup35->layout());
        if (boxlayout)
            boxlayout->addLayout(vboxLayout1);
        vboxLayout1->setAlignment(Qt::AlignTop);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Spacer76 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(Spacer76, 0, 2, 1, 1);

        TextLabel1 = new QLabel(ButtonGroup35);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel1->setWordWrap(false);

        gridLayout->addWidget(TextLabel1, 0, 0, 1, 1);

        ui_ch2Color = new ColorButton(ButtonGroup35);
        ui_ch2Color->setObjectName(QString::fromUtf8("ui_ch2Color"));
        ui_ch2Color->setMinimumSize(QSize(50, 0));
        ui_ch2Color->setMaximumSize(QSize(50, 32767));

        gridLayout->addWidget(ui_ch2Color, 1, 1, 1, 1);

        TextLabel4 = new QLabel(ButtonGroup35);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        TextLabel4->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel4->setWordWrap(false);

        gridLayout->addWidget(TextLabel4, 3, 0, 1, 1);

        TextLabel10 = new QLabel(ButtonGroup35);
        TextLabel10->setObjectName(QString::fromUtf8("TextLabel10"));
        TextLabel10->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel10->setWordWrap(false);

        gridLayout->addWidget(TextLabel10, 0, 3, 1, 1);

        ui_bgColor = new ColorButton(ButtonGroup35);
        ui_bgColor->setObjectName(QString::fromUtf8("ui_bgColor"));
        ui_bgColor->setMinimumSize(QSize(50, 0));
        ui_bgColor->setMaximumSize(QSize(50, 32767));

        gridLayout->addWidget(ui_bgColor, 1, 4, 1, 1);

        ui_borderColor = new ColorButton(ButtonGroup35);
        ui_borderColor->setObjectName(QString::fromUtf8("ui_borderColor"));
        ui_borderColor->setMinimumSize(QSize(50, 0));
        ui_borderColor->setMaximumSize(QSize(50, 32767));

        gridLayout->addWidget(ui_borderColor, 3, 4, 1, 1);

        ui_addColor = new ColorButton(ButtonGroup35);
        ui_addColor->setObjectName(QString::fromUtf8("ui_addColor"));
        ui_addColor->setMinimumSize(QSize(50, 0));
        ui_addColor->setMaximumSize(QSize(50, 32767));

        gridLayout->addWidget(ui_addColor, 2, 1, 1, 1);

        Spacer79 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(Spacer79, 3, 2, 1, 1);

        ui_lineWidth = new QSpinBox(ButtonGroup35);
        ui_lineWidth->setObjectName(QString::fromUtf8("ui_lineWidth"));
        ui_lineWidth->setMaximum(7);
        ui_lineWidth->setMinimum(1);
        ui_lineWidth->setSingleStep(2);
        ui_lineWidth->setValue(3);

        gridLayout->addWidget(ui_lineWidth, 4, 4, 1, 1);

        ui_fontBut = new QPushButton(ButtonGroup35);
        ui_fontBut->setObjectName(QString::fromUtf8("ui_fontBut"));
        ui_fontBut->setAutoDefault(false);

        gridLayout->addWidget(ui_fontBut, 4, 1, 1, 2);

        ui_gridColor = new ColorButton(ButtonGroup35);
        ui_gridColor->setObjectName(QString::fromUtf8("ui_gridColor"));
        ui_gridColor->setMinimumSize(QSize(50, 0));
        ui_gridColor->setMaximumSize(QSize(50, 32767));

        gridLayout->addWidget(ui_gridColor, 2, 4, 1, 1);

        Spacer86 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(Spacer86, 3, 5, 1, 1);

        Spacer80 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(Spacer80, 0, 5, 1, 1);

        Spacer85 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(Spacer85, 2, 5, 1, 1);

        TextLabel17 = new QLabel(ButtonGroup35);
        TextLabel17->setObjectName(QString::fromUtf8("TextLabel17"));
        TextLabel17->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel17->setWordWrap(false);

        gridLayout->addWidget(TextLabel17, 4, 3, 1, 1);

        ui_subColor = new ColorButton(ButtonGroup35);
        ui_subColor->setObjectName(QString::fromUtf8("ui_subColor"));
        ui_subColor->setMinimumSize(QSize(50, 0));
        ui_subColor->setMaximumSize(QSize(50, 32767));

        gridLayout->addWidget(ui_subColor, 3, 1, 1, 1);

        TextLabel3 = new QLabel(ButtonGroup35);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
        TextLabel3->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel3->setWordWrap(false);

        gridLayout->addWidget(TextLabel3, 2, 0, 1, 1);

        Spacer93 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(Spacer93, 4, 5, 1, 1);

        TextLabel15 = new QLabel(ButtonGroup35);
        TextLabel15->setObjectName(QString::fromUtf8("TextLabel15"));
        TextLabel15->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel15->setWordWrap(false);

        gridLayout->addWidget(TextLabel15, 4, 0, 1, 1);

        ui_ch1Color = new ColorButton(ButtonGroup35);
        ui_ch1Color->setObjectName(QString::fromUtf8("ui_ch1Color"));
        ui_ch1Color->setMinimumSize(QSize(50, 0));
        ui_ch1Color->setMaximumSize(QSize(50, 32767));

        gridLayout->addWidget(ui_ch1Color, 0, 1, 1, 1);

        TextLabel2 = new QLabel(ButtonGroup35);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
        TextLabel2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel2->setWordWrap(false);

        gridLayout->addWidget(TextLabel2, 1, 0, 1, 1);

        Spacer78 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(Spacer78, 2, 2, 1, 1);

        Spacer84 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(Spacer84, 1, 5, 1, 1);

        TextLabel13 = new QLabel(ButtonGroup35);
        TextLabel13->setObjectName(QString::fromUtf8("TextLabel13"));
        TextLabel13->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel13->setWordWrap(false);

        gridLayout->addWidget(TextLabel13, 2, 3, 1, 1);

        TextLabel14 = new QLabel(ButtonGroup35);
        TextLabel14->setObjectName(QString::fromUtf8("TextLabel14"));
        TextLabel14->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel14->setWordWrap(false);

        gridLayout->addWidget(TextLabel14, 3, 3, 1, 1);

        ui_timeMarkerColor = new ColorButton(ButtonGroup35);
        ui_timeMarkerColor->setObjectName(QString::fromUtf8("ui_timeMarkerColor"));
        ui_timeMarkerColor->setMinimumSize(QSize(50, 0));
        ui_timeMarkerColor->setMaximumSize(QSize(50, 32767));

        gridLayout->addWidget(ui_timeMarkerColor, 0, 4, 1, 1);

        Spacer77 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(Spacer77, 1, 2, 1, 1);

        TextLabel12 = new QLabel(ButtonGroup35);
        TextLabel12->setObjectName(QString::fromUtf8("TextLabel12"));
        TextLabel12->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel12->setWordWrap(false);

        gridLayout->addWidget(TextLabel12, 1, 3, 1, 1);


        vboxLayout1->addLayout(gridLayout);

        Spacer88 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(Spacer88);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        ui_defaultColors = new QPushButton(ButtonGroup35);
        ui_defaultColors->setObjectName(QString::fromUtf8("ui_defaultColors"));
        ui_defaultColors->setAutoDefault(false);

        hboxLayout1->addWidget(ui_defaultColors);

        Spacer87 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(Spacer87);


        vboxLayout1->addLayout(hboxLayout1);


        vboxLayout->addWidget(ButtonGroup35);

        ButtonGroup36 = new Q3ButtonGroup(UIPrefDlg);
        ButtonGroup36->setObjectName(QString::fromUtf8("ButtonGroup36"));
        ButtonGroup36->setColumnLayout(0, Qt::Vertical);
        ButtonGroup36->layout()->setSpacing(5);
        ButtonGroup36->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout1 = new QGridLayout();
        QBoxLayout *boxlayout1 = qobject_cast<QBoxLayout *>(ButtonGroup36->layout());
        if (boxlayout1)
            boxlayout1->addLayout(gridLayout1);
        gridLayout1->setAlignment(Qt::AlignTop);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        ui_defaultFftZoom = new QComboBox(ButtonGroup36);
        ui_defaultFftZoom->setObjectName(QString::fromUtf8("ui_defaultFftZoom"));
        ui_defaultFftZoom->setEnabled(false);

        gridLayout1->addWidget(ui_defaultFftZoom, 1, 4, 1, 2);

        TextLabel7 = new QLabel(ButtonGroup36);
        TextLabel7->setObjectName(QString::fromUtf8("TextLabel7"));
        TextLabel7->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel7->setWordWrap(false);

        gridLayout1->addWidget(TextLabel7, 2, 0, 1, 1);

        TextLabel9 = new QLabel(ButtonGroup36);
        TextLabel9->setObjectName(QString::fromUtf8("TextLabel9"));
        TextLabel9->setEnabled(false);
        TextLabel9->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel9->setWordWrap(false);

        gridLayout1->addWidget(TextLabel9, 1, 3, 1, 1);

        Spacer63 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(Spacer63, 0, 2, 1, 1);

        ui_defaultFftLength = new QComboBox(ButtonGroup36);
        ui_defaultFftLength->setObjectName(QString::fromUtf8("ui_defaultFftLength"));
        ui_defaultFftLength->setEnabled(false);

        gridLayout1->addWidget(ui_defaultFftLength, 0, 4, 1, 2);

        ui_ch2Drawmode = new QComboBox(ButtonGroup36);
        ui_ch2Drawmode->setObjectName(QString::fromUtf8("ui_ch2Drawmode"));

        gridLayout1->addWidget(ui_ch2Drawmode, 1, 1, 1, 1);

        Spacer66 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(Spacer66, 0, 6, 1, 1);

        ui_averageBufferLength = new QComboBox(ButtonGroup36);
        ui_averageBufferLength->setObjectName(QString::fromUtf8("ui_averageBufferLength"));

        gridLayout1->addWidget(ui_averageBufferLength, 2, 1, 1, 1);

        TextLabel5 = new QLabel(ButtonGroup36);
        TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));
        TextLabel5->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel5->setWordWrap(false);

        gridLayout1->addWidget(TextLabel5, 0, 0, 1, 1);

        TextLabel6 = new QLabel(ButtonGroup36);
        TextLabel6->setObjectName(QString::fromUtf8("TextLabel6"));
        TextLabel6->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel6->setWordWrap(false);

        gridLayout1->addWidget(TextLabel6, 1, 0, 1, 1);

        ui_ch1Drawmode = new QComboBox(ButtonGroup36);
        ui_ch1Drawmode->setObjectName(QString::fromUtf8("ui_ch1Drawmode"));

        gridLayout1->addWidget(ui_ch1Drawmode, 0, 1, 1, 1);

        Spacer64 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(Spacer64, 1, 2, 1, 1);

        TextLabel8 = new QLabel(ButtonGroup36);
        TextLabel8->setObjectName(QString::fromUtf8("TextLabel8"));
        TextLabel8->setEnabled(false);
        TextLabel8->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel8->setWordWrap(false);

        gridLayout1->addWidget(TextLabel8, 0, 3, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(5);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        ui_defaultFft = new QPushButton(ButtonGroup36);
        ui_defaultFft->setObjectName(QString::fromUtf8("ui_defaultFft"));
        ui_defaultFft->setAutoDefault(false);

        hboxLayout2->addWidget(ui_defaultFft);

        Spacer90 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(Spacer90);


        gridLayout1->addLayout(hboxLayout2, 4, 0, 1, 7);

        Spacer89 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(Spacer89, 3, 2, 1, 1);

        Spacer65 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(Spacer65, 2, 2, 1, 1);

        TextLabel17_2 = new QLabel(ButtonGroup36);
        TextLabel17_2->setObjectName(QString::fromUtf8("TextLabel17_2"));
        TextLabel17_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel17_2->setWordWrap(false);

        gridLayout1->addWidget(TextLabel17_2, 2, 3, 1, 1);

        Spacer67 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(Spacer67, 1, 6, 1, 1);

        ui_lineWidthFft = new QSpinBox(ButtonGroup36);
        ui_lineWidthFft->setObjectName(QString::fromUtf8("ui_lineWidthFft"));
        ui_lineWidthFft->setMaximum(3);
        ui_lineWidthFft->setMinimum(1);
        ui_lineWidthFft->setValue(1);

        gridLayout1->addWidget(ui_lineWidthFft, 2, 4, 1, 1);

        Spacer67_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(Spacer67_2, 2, 5, 1, 2);


        vboxLayout->addWidget(ButtonGroup36);

        Spacer83 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(Spacer83);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(5);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        Spacer11 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(Spacer11);

        ui_apply = new QPushButton(UIPrefDlg);
        ui_apply->setObjectName(QString::fromUtf8("ui_apply"));

        hboxLayout3->addWidget(ui_apply);

        ui_ok = new QPushButton(UIPrefDlg);
        ui_ok->setObjectName(QString::fromUtf8("ui_ok"));
        ui_ok->setDefault(true);

        hboxLayout3->addWidget(ui_ok);

        ui_close = new QPushButton(UIPrefDlg);
        ui_close->setObjectName(QString::fromUtf8("ui_close"));

        hboxLayout3->addWidget(ui_close);


        vboxLayout->addLayout(hboxLayout3);


        retranslateUi(UIPrefDlg);

        ui_device->setCurrentIndex(1);
        ui_defaultFftZoom->setCurrentIndex(1);
        ui_defaultFftLength->setCurrentIndex(3);
        ui_averageBufferLength->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(UIPrefDlg);
    } // setupUi

    void retranslateUi(QDialog *UIPrefDlg)
    {
        UIPrefDlg->setWindowTitle(QApplication::translate("UIPrefDlg", "QtDSO: Preferences", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("UIPrefDlg", "Device:", 0, QApplication::UnicodeUTF8));
        ui_device->clear();
        ui_device->insertItems(0, QStringList()
         << QApplication::translate("UIPrefDlg", "Simulator 2x14bit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "Velleman PCS64i", 0, QApplication::UnicodeUTF8)
        );
        ButtonGroup35->setTitle(QApplication::translate("UIPrefDlg", "Display", 0, QApplication::UnicodeUTF8));
        TextLabel1->setText(QApplication::translate("UIPrefDlg", "Channel 1:", 0, QApplication::UnicodeUTF8));
        TextLabel4->setText(QApplication::translate("UIPrefDlg", "Subtraction (CH1-CH2):", 0, QApplication::UnicodeUTF8));
        TextLabel10->setText(QApplication::translate("UIPrefDlg", "Time marker:", 0, QApplication::UnicodeUTF8));
        ui_fontBut->setText(QApplication::translate("UIPrefDlg", "Click to select", 0, QApplication::UnicodeUTF8));
        TextLabel17->setText(QApplication::translate("UIPrefDlg", "Line width:", 0, QApplication::UnicodeUTF8));
        TextLabel3->setText(QApplication::translate("UIPrefDlg", "Addition (CH1+CH2):", 0, QApplication::UnicodeUTF8));
        TextLabel15->setText(QApplication::translate("UIPrefDlg", "Font:", 0, QApplication::UnicodeUTF8));
        TextLabel2->setText(QApplication::translate("UIPrefDlg", "Channel 2:", 0, QApplication::UnicodeUTF8));
        TextLabel13->setText(QApplication::translate("UIPrefDlg", "Grid:", 0, QApplication::UnicodeUTF8));
        TextLabel14->setText(QApplication::translate("UIPrefDlg", "Border:", 0, QApplication::UnicodeUTF8));
        TextLabel12->setText(QApplication::translate("UIPrefDlg", "Background:", 0, QApplication::UnicodeUTF8));
        ui_defaultColors->setText(QApplication::translate("UIPrefDlg", "Factory defaults", 0, QApplication::UnicodeUTF8));
        ButtonGroup36->setTitle(QApplication::translate("UIPrefDlg", "FFT", 0, QApplication::UnicodeUTF8));
        ui_defaultFftZoom->clear();
        ui_defaultFftZoom->insertItems(0, QStringList()
         << QApplication::translate("UIPrefDlg", "No zoom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "Zoom x2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "Zoom x4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "Zoom x8", 0, QApplication::UnicodeUTF8)
        );
        TextLabel7->setText(QApplication::translate("UIPrefDlg", "Average buffer depth:", 0, QApplication::UnicodeUTF8));
        TextLabel9->setText(QApplication::translate("UIPrefDlg", "Default FFT zoom:", 0, QApplication::UnicodeUTF8));
        ui_defaultFftLength->clear();
        ui_defaultFftLength->insertItems(0, QStringList()
         << QApplication::translate("UIPrefDlg", "128", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "256", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "512", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "1024", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "2048", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "4096", 0, QApplication::UnicodeUTF8)
        );
        ui_ch2Drawmode->clear();
        ui_ch2Drawmode->insertItems(0, QStringList()
         << QApplication::translate("UIPrefDlg", "Line", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "Needles", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "Points", 0, QApplication::UnicodeUTF8)
        );
        ui_averageBufferLength->clear();
        ui_averageBufferLength->insertItems(0, QStringList()
         << QApplication::translate("UIPrefDlg", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "100", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "500", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "1000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "2000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "5000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "10000", 0, QApplication::UnicodeUTF8)
        );
        TextLabel5->setText(QApplication::translate("UIPrefDlg", "Channel 1 drawmode:", 0, QApplication::UnicodeUTF8));
        TextLabel6->setText(QApplication::translate("UIPrefDlg", "Channel 2 drawmode:", 0, QApplication::UnicodeUTF8));
        ui_ch1Drawmode->clear();
        ui_ch1Drawmode->insertItems(0, QStringList()
         << QApplication::translate("UIPrefDlg", "Line", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "Needles", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIPrefDlg", "Points", 0, QApplication::UnicodeUTF8)
        );
        TextLabel8->setText(QApplication::translate("UIPrefDlg", "Default FFT length:", 0, QApplication::UnicodeUTF8));
        ui_defaultFft->setText(QApplication::translate("UIPrefDlg", "Factory defaults", 0, QApplication::UnicodeUTF8));
        TextLabel17_2->setText(QApplication::translate("UIPrefDlg", "Line width:", 0, QApplication::UnicodeUTF8));
        ui_apply->setText(QApplication::translate("UIPrefDlg", "&Apply", 0, QApplication::UnicodeUTF8));
        ui_ok->setText(QApplication::translate("UIPrefDlg", "&Ok", 0, QApplication::UnicodeUTF8));
        ui_ok->setShortcut(QApplication::translate("UIPrefDlg", "Alt+O", 0, QApplication::UnicodeUTF8));
        ui_close->setText(QApplication::translate("UIPrefDlg", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        unknown_ID
    };
    static QPixmap qt_get_icon(IconID id)
    {
    static const unsigned char image0_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x03,
    0xca, 0x49, 0x44, 0x41, 0x54, 0x78, 0x9c, 0xb5, 0x95, 0xc1, 0x8b, 0x1c,
    0x45, 0x14, 0x87, 0xbf, 0xd1, 0x3e, 0xbc, 0x36, 0x2b, 0x54, 0xc7, 0x59,
    0xe9, 0x96, 0x0d, 0x6c, 0x43, 0x44, 0x27, 0x24, 0x90, 0x59, 0xc8, 0x41,
    0x31, 0x87, 0x5d, 0x08, 0x24, 0x01, 0x2f, 0x81, 0x1c, 0xf6, 0xa8, 0x01,
    0x2f, 0x7a, 0xf3, 0x28, 0x48, 0x10, 0xfc, 0x0f, 0xf4, 0x22, 0x04, 0x0f,
    0x1e, 0x72, 0x8b, 0xb7, 0xe4, 0x10, 0xc8, 0x5e, 0x64, 0x36, 0x10, 0xd9,
    0xc9, 0x41, 0xd2, 0x81, 0x44, 0x6b, 0x20, 0x03, 0x5d, 0x98, 0xc1, 0x2a,
    0x4c, 0x43, 0x3f, 0x42, 0xb1, 0xeb, 0xa1, 0x67, 0xb3, 0x8e, 0xab, 0x1e,
    0x04, 0x0b, 0x9a, 0xa6, 0xe0, 0xd5, 0x57, 0xaf, 0x7e, 0xef, 0x57, 0xf5,
    0x7a, 0xa3, 0xd1, 0x88, 0xfd, 0xf1, 0xd9, 0x17, 0x97, 0xf6, 0xdc, 0x54,
    0xf9, 0x2f, 0x23, 0x5f, 0x11, 0xbe, 0xfc, 0xfc, 0x46, 0x6f, 0x7f, 0xde,
    0x1b, 0x8d, 0x46, 0x7c, 0x75, 0xfd, 0xca, 0xde, 0x78, 0xab, 0xe6, 0xc3,
    0x0f, 0x3e, 0x26, 0x15, 0x83, 0x48, 0x8a, 0x6a, 0x4b, 0x1b, 0xff, 0x65,
    0x93, 0xd8, 0xfd, 0x54, 0x15, 0x3b, 0xa9, 0xb0, 0x4f, 0x6a, 0xdc, 0xb4,
    0x62, 0xb8, 0x5e, 0xf0, 0xc9, 0xe6, 0xb5, 0x5e, 0x02, 0xd0, 0x41, 0x3f,
    0xa5, 0x2c, 0x4b, 0xdc, 0xd3, 0x1a, 0x3f, 0xf3, 0x90, 0x40, 0x66, 0x84,
    0x72, 0x90, 0x41, 0xe2, 0x69, 0xa3, 0x43, 0x1b, 0x8f, 0x7d, 0x04, 0xda,
    0x08, 0xda, 0xa4, 0x73, 0x70, 0x0b, 0x89, 0x90, 0x65, 0x19, 0xc4, 0x92,
    0xf1, 0x96, 0x85, 0x4d, 0xe8, 0xad, 0x9f, 0xcf, 0xf7, 0x2e, 0x9e, 0xbb,
    0x42, 0x59, 0x0e, 0x70, 0x75, 0x4d, 0x3d, 0x73, 0x94, 0x79, 0xce, 0xe0,
    0x4c, 0x89, 0xe9, 0x03, 0x89, 0x43, 0xd5, 0xa2, 0xd1, 0xa3, 0x31, 0xd0,
    0x36, 0x1e, 0xe7, 0x14, 0x5b, 0x09, 0x7e, 0x5a, 0xa0, 0x11, 0xb4, 0x09,
    0xa8, 0x82, 0xb6, 0x1e, 0x3f, 0x0b, 0x88, 0xf1, 0x24, 0x6e, 0xaa, 0xa4,
    0x62, 0x70, 0x4f, 0xe7, 0xd0, 0xd5, 0x9c, 0x8b, 0xef, 0xaf, 0xe1, 0xd5,
    0x12, 0x9a, 0x1d, 0xbc, 0x56, 0xa8, 0x3a, 0x48, 0x04, 0x49, 0x04, 0x04,
    0xcc, 0x4a, 0x60, 0xd0, 0xaf, 0xa9, 0xa7, 0x96, 0x6a, 0xeb, 0x04, 0x1a,
    0x01, 0xda, 0x4e, 0x9e, 0x04, 0xdc, 0x54, 0x49, 0x00, 0x44, 0x52, 0xfc,
    0xcc, 0x77, 0xd0, 0x0b, 0x6b, 0xd4, 0xcd, 0x08, 0x3b, 0xbb, 0x81, 0x36,
    0x96, 0xfa, 0x89, 0x99, 0xeb, 0xd9, 0x42, 0x92, 0x52, 0x14, 0x82, 0x2c,
    0x75, 0xfa, 0x16, 0x79, 0x80, 0xf5, 0x1d, 0xc6, 0xb7, 0x06, 0x68, 0x03,
    0x2d, 0x00, 0x02, 0x1d, 0xbf, 0xd3, 0x29, 0xeb, 0x4b, 0x07, 0xd5, 0x11,
    0xd5, 0xf4, 0x6b, 0xc2, 0x0c, 0x1e, 0x6c, 0x0f, 0x08, 0x93, 0x6c, 0xa1,
    0x66, 0x63, 0x81, 0xf2, 0x74, 0xcd, 0xe0, 0x4c, 0x37, 0xcf, 0x72, 0xa5,
    0x3c, 0xe9, 0xa8, 0xee, 0xe6, 0x0b, 0x71, 0x2f, 0x01, 0xb4, 0x51, 0x31,
    0xcb, 0x29, 0x3e, 0x56, 0xd4, 0xb3, 0x1b, 0x84, 0x19, 0xec, 0xdc, 0x3e,
    0x0c, 0x1d, 0xbe, 0x07, 0xe5, 0xdb, 0x2d, 0xf6, 0x6e, 0x41, 0xb5, 0x5d,
    0xb2, 0xef, 0x99, 0xe2, 0xcd, 0x1a, 0x91, 0x45, 0xb7, 0x24, 0xfb, 0x8b,
    0xca, 0xe3, 0x42, 0x68, 0x76, 0x70, 0x8d, 0xc5, 0xde, 0x2b, 0xd1, 0x59,
    0xba, 0x00, 0xdd, 0x38, 0xbf, 0xca, 0xf0, 0x6c, 0x46, 0x50, 0xcb, 0x9d,
    0x68, 0xb1, 0x3f, 0x16, 0x98, 0xdc, 0x93, 0x1d, 0x0b, 0xc8, 0x92, 0x62,
    0x56, 0x1d, 0xf5, 0x53, 0xb3, 0x98, 0x71, 0x27, 0x8d, 0x47, 0xa3, 0x43,
    0x83, 0x50, 0x4f, 0x8a, 0xbf, 0x40, 0x87, 0x6c, 0x5c, 0xd8, 0x40, 0x12,
    0x03, 0x28, 0xc3, 0x73, 0x01, 0x04, 0xec, 0x4f, 0x07, 0x71, 0xc5, 0x4a,
    0x7b, 0x58, 0x8a, 0x2e, 0x77, 0x85, 0xa8, 0xdd, 0x51, 0xe2, 0x41, 0xc0,
    0xe0, 0xf4, 0x2a, 0xef, 0xac, 0x0f, 0x01, 0xed, 0xec, 0xa6, 0x9e, 0xed,
    0xdb, 0xe6, 0x50, 0x5c, 0x76, 0x2c, 0xfc, 0x03, 0x38, 0xea, 0xdc, 0x52,
    0x07, 0xba, 0x96, 0x27, 0x0d, 0x97, 0x36, 0xdf, 0x25, 0x15, 0xa5, 0xd5,
    0x1a, 0x8d, 0x35, 0xaa, 0x8a, 0x77, 0x02, 0x71, 0x7e, 0x51, 0x82, 0x2c,
    0x68, 0x7b, 0x08, 0x1c, 0x1a, 0x45, 0x12, 0x83, 0x48, 0x57, 0x5d, 0xb3,
    0x02, 0x97, 0x36, 0x4b, 0xa0, 0xc6, 0x37, 0x15, 0x41, 0x2b, 0xbc, 0x5a,
    0x44, 0x94, 0x8d, 0xcb, 0x8a, 0xf4, 0x41, 0x04, 0xc4, 0x74, 0x25, 0x6c,
    0x9f, 0xc9, 0x02, 0xf8, 0x45, 0xf1, 0x88, 0xbe, 0x03, 0xf6, 0x33, 0x4c,
    0xae, 0xa8, 0x42, 0x3d, 0xb3, 0x64, 0x4b, 0xe0, 0x63, 0x20, 0x04, 0x8f,
    0x2c, 0x29, 0x92, 0x08, 0xc6, 0x08, 0x1b, 0x97, 0x3d, 0xc1, 0xd5, 0x2f,
    0x96, 0xbb, 0xc7, 0x8b, 0x0e, 0x7a, 0x69, 0xff, 0x18, 0x76, 0xa2, 0x78,
    0x75, 0x90, 0x78, 0x4e, 0x9c, 0x6d, 0x51, 0x85, 0x9b, 0xd7, 0x03, 0xd5,
    0xd4, 0xb2, 0x7d, 0xcb, 0x73, 0xf3, 0xbb, 0x0c, 0xf7, 0x58, 0x50, 0xed,
    0x32, 0x13, 0x09, 0x98, 0x3c, 0xcc, 0xb5, 0x16, 0xda, 0x28, 0x7f, 0x03,
    0x06, 0xea, 0x47, 0x42, 0x08, 0x16, 0x55, 0x8b, 0x59, 0xa9, 0xd8, 0xb8,
    0xfc, 0x00, 0x6d, 0x5a, 0xee, 0x7c, 0x9b, 0x61, 0xef, 0x67, 0xd0, 0xc0,
    0xe8, 0xfb, 0x8c, 0xea, 0x1e, 0xdd, 0xdb, 0xa1, 0xf5, 0xdc, 0xc7, 0x8a,
    0x6f, 0xc0, 0x4d, 0xcc, 0x02, 0xf8, 0xe5, 0xe5, 0xd7, 0xe5, 0xea, 0x60,
    0xb0, 0x46, 0xf8, 0x2d, 0xa2, 0xbb, 0x8e, 0x57, 0x33, 0x07, 0x31, 0x92,
    0x24, 0x4a, 0xf1, 0x96, 0x83, 0x24, 0x21, 0x3d, 0xda, 0xb0, 0xfc, 0x46,
    0x43, 0xda, 0x6f, 0x30, 0x79, 0x4d, 0xef, 0x48, 0x20, 0x46, 0x60, 0xb7,
    0x73, 0x51, 0x6f, 0x37, 0xc1, 0x1c, 0x0d, 0xd8, 0x87, 0x19, 0x8d, 0x36,
    0xc4, 0xe7, 0x4d, 0xa7, 0xb1, 0x9d, 0x54, 0x90, 0x08, 0xf5, 0x0f, 0x05,
    0x44, 0xa5, 0x38, 0x35, 0xd7, 0x4e, 0xa0, 0x3c, 0x63, 0x17, 0xcb, 0x1d,
    0x39, 0xb0, 0x25, 0xbc, 0xc8, 0x5a, 0x96, 0x95, 0xf2, 0x54, 0xcd, 0x78,
    0x6b, 0x9e, 0xf1, 0xa9, 0x35, 0x73, 0x35, 0xfc, 0x9e, 0xd0, 0xeb, 0xf5,
    0x88, 0xcf, 0xc1, 0x4d, 0x84, 0x67, 0xbf, 0xa6, 0xc8, 0x2b, 0x4a, 0x7a,
    0xa4, 0x81, 0xdd, 0xb8, 0xf8, 0xc5, 0x08, 0xbb, 0x50, 0xd7, 0x86, 0xe9,
    0xc3, 0x82, 0xec, 0x35, 0xa5, 0xd5, 0x04, 0xf7, 0xf3, 0x12, 0xee, 0x97,
    0x84, 0x30, 0x83, 0x7e, 0x3e, 0xef, 0x20, 0x57, 0x3e, 0xba, 0xb8, 0x97,
    0xe7, 0x25, 0xa9, 0x74, 0xfe, 0xdc, 0xbf, 0x43, 0x45, 0xa9, 0x14, 0xb9,
    0x27, 0x3f, 0x7e, 0x60, 0x7e, 0x37, 0x31, 0xd4, 0x2e, 0x25, 0x58, 0x43,
    0x1b, 0xa1, 0x1c, 0x04, 0xb2, 0x15, 0x8f, 0xbd, 0x2f, 0xd4, 0x4f, 0x20,
    0xcc, 0x02, 0xd7, 0xbe, 0xb9, 0xd9, 0x75, 0x90, 0xe1, 0x7a, 0xc1, 0x78,
    0xcb, 0x62, 0x96, 0x8a, 0xb9, 0x01, 0xbb, 0x0a, 0xdb, 0x31, 0x58, 0x32,
    0x60, 0xd1, 0x4a, 0x7f, 0x16, 0x61, 0xbc, 0x0d, 0x22, 0xd2, 0x3d, 0xf8,
    0x21, 0x90, 0xaf, 0x74, 0x6b, 0x7b, 0xff, 0x57, 0x33, 0xfd, 0x03, 0x18,
    0x06, 0x09, 0xd5, 0x2c, 0x5b, 0x37, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x49,
    0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    switch (id) {
        case image0_ID:  { QImage img; img.loadFromData(image0_data, sizeof(image0_data), "PNG"); return QPixmap::fromImage(img); }
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class UIPrefDlg: public Ui_UIPrefDlg {};
} // namespace Ui

QT_END_NAMESPACE

class UIPrefDlg : public QDialog, public Ui::UIPrefDlg
{
    Q_OBJECT

public:
    UIPrefDlg(QWidget* parent = 0, const char* name = 0, bool modal = false, Qt::WindowFlags fl = 0);
    ~UIPrefDlg();

protected slots:
    virtual void languageChange();

};

#endif // UIPREFDLG_H
