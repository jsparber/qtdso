#ifndef UISIMULATORWID_H
#define UISIMULATORWID_H

#include <qvariant.h>


#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3Frame>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UISimulatorWid
{
public:
    QHBoxLayout *hboxLayout;
    Q3Frame *Frame3;
    QVBoxLayout *vboxLayout;
    QLabel *TextLabel1;
    QVBoxLayout *vboxLayout1;
    Q3ButtonGroup *ui_waveformCh1;
    QVBoxLayout *vboxLayout2;
    QRadioButton *RadioButton1;
    QRadioButton *RadioButton2;
    QRadioButton *RadioButton3;
    QHBoxLayout *hboxLayout1;
    QLabel *TextLabel2;
    QLabel *TextLabel4;
    QSlider *ui_symetryCh1;
    QHBoxLayout *hboxLayout2;
    QSpinBox *ui_freqCh1;
    QLabel *TextLabel18;
    QHBoxLayout *hboxLayout3;
    QSpinBox *ui_vCh1;
    QComboBox *ui_vUnitCh1;
    QCheckBox *ui_noiseCh1;
    QCheckBox *ui_jitterCh1;
    QCheckBox *ui_phaseJitterCh1;
    QSpacerItem *Spacer97;
    Q3Frame *Frame4;
    QVBoxLayout *vboxLayout3;
    QLabel *TextLabel1_2;
    QVBoxLayout *vboxLayout4;
    Q3ButtonGroup *ui_waveformCh2;
    QVBoxLayout *vboxLayout5;
    QRadioButton *RadioButton1_2;
    QRadioButton *RadioButton2_2;
    QRadioButton *RadioButton3_2;
    QHBoxLayout *hboxLayout4;
    QLabel *TextLabel3;
    QLabel *TextLabel5;
    QSlider *ui_symetryCh2;
    QHBoxLayout *hboxLayout5;
    QSpinBox *ui_freqCh2;
    QLabel *TextLabel19;
    QHBoxLayout *hboxLayout6;
    QSpinBox *ui_vCh2;
    QComboBox *ui_vUnitCh2;
    QCheckBox *ui_noiseCh2;
    QCheckBox *ui_jitterCh2;
    QCheckBox *ui_phaseJitterCh2;
    QSpacerItem *Spacer96;

    void setupUi(QDialog *UISimulatorWid)
    {
        if (UISimulatorWid->objectName().isEmpty())
            UISimulatorWid->setObjectName(QString::fromUtf8("UISimulatorWid"));
        UISimulatorWid->resize(360, 346);
        hboxLayout = new QHBoxLayout(UISimulatorWid);
        hboxLayout->setSpacing(5);
        hboxLayout->setContentsMargins(10, 10, 10, 10);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        Frame3 = new Q3Frame(UISimulatorWid);
        Frame3->setObjectName(QString::fromUtf8("Frame3"));
        Frame3->setFrameShape(QFrame::WinPanel);
        Frame3->setFrameShadow(QFrame::Sunken);
        vboxLayout = new QVBoxLayout(Frame3);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(2, 2, 2, 2);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        TextLabel1 = new QLabel(Frame3);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextLabel1->sizePolicy().hasHeightForWidth());
        TextLabel1->setSizePolicy(sizePolicy);
        TextLabel1->setFrameShape(QFrame::WinPanel);
        TextLabel1->setFrameShadow(QFrame::Raised);
        TextLabel1->setWordWrap(false);

        vboxLayout->addWidget(TextLabel1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(5);
        vboxLayout1->setContentsMargins(10, 10, 10, 10);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        ui_waveformCh1 = new Q3ButtonGroup(Frame3);
        ui_waveformCh1->setObjectName(QString::fromUtf8("ui_waveformCh1"));
        ui_waveformCh1->setColumnLayout(0, Qt::Vertical);
        ui_waveformCh1->layout()->setSpacing(5);
        ui_waveformCh1->layout()->setContentsMargins(10, 10, 10, 10);
        vboxLayout2 = new QVBoxLayout();
        QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(ui_waveformCh1->layout());
        if (boxlayout)
            boxlayout->addLayout(vboxLayout2);
        vboxLayout2->setAlignment(Qt::AlignTop);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        RadioButton1 = new QRadioButton(ui_waveformCh1);
        RadioButton1->setObjectName(QString::fromUtf8("RadioButton1"));
        RadioButton1->setIcon(qt_get_icon(image0_ID));
        RadioButton1->setChecked(true);

        vboxLayout2->addWidget(RadioButton1);

        RadioButton2 = new QRadioButton(ui_waveformCh1);
        RadioButton2->setObjectName(QString::fromUtf8("RadioButton2"));
        RadioButton2->setIcon(qt_get_icon(image1_ID));

        vboxLayout2->addWidget(RadioButton2);

        RadioButton3 = new QRadioButton(ui_waveformCh1);
        RadioButton3->setObjectName(QString::fromUtf8("RadioButton3"));
        RadioButton3->setIcon(qt_get_icon(image2_ID));

        vboxLayout2->addWidget(RadioButton3);


        vboxLayout1->addWidget(ui_waveformCh1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        TextLabel2 = new QLabel(Frame3);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
        TextLabel2->setAlignment(Qt::AlignVCenter|Qt::AlignLeft);
        TextLabel2->setWordWrap(false);

        hboxLayout1->addWidget(TextLabel2);

        TextLabel4 = new QLabel(Frame3);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        TextLabel4->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel4->setWordWrap(false);

        hboxLayout1->addWidget(TextLabel4);


        vboxLayout1->addLayout(hboxLayout1);

        ui_symetryCh1 = new QSlider(Frame3);
        ui_symetryCh1->setObjectName(QString::fromUtf8("ui_symetryCh1"));
        ui_symetryCh1->setMinimum(-9);
        ui_symetryCh1->setMaximum(9);
        ui_symetryCh1->setOrientation(Qt::Horizontal);
        ui_symetryCh1->setTickPosition(QSlider::NoTicks);

        vboxLayout1->addWidget(ui_symetryCh1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(5);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        ui_freqCh1 = new QSpinBox(Frame3);
        ui_freqCh1->setObjectName(QString::fromUtf8("ui_freqCh1"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ui_freqCh1->sizePolicy().hasHeightForWidth());
        ui_freqCh1->setSizePolicy(sizePolicy1);
        ui_freqCh1->setWrapping(true);
        ui_freqCh1->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        ui_freqCh1->setMaximum(8000000);
        ui_freqCh1->setMinimum(1);
        ui_freqCh1->setSingleStep(10);
        ui_freqCh1->setValue(100);

        hboxLayout2->addWidget(ui_freqCh1);

        TextLabel18 = new QLabel(Frame3);
        TextLabel18->setObjectName(QString::fromUtf8("TextLabel18"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(1));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(TextLabel18->sizePolicy().hasHeightForWidth());
        TextLabel18->setSizePolicy(sizePolicy2);
        TextLabel18->setWordWrap(false);

        hboxLayout2->addWidget(TextLabel18);


        vboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(5);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        ui_vCh1 = new QSpinBox(Frame3);
        ui_vCh1->setObjectName(QString::fromUtf8("ui_vCh1"));
        ui_vCh1->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        ui_vCh1->setMaximum(999);
        ui_vCh1->setMinimum(1);
        ui_vCh1->setValue(100);

        hboxLayout3->addWidget(ui_vCh1);

        ui_vUnitCh1 = new QComboBox(Frame3);
        ui_vUnitCh1->setObjectName(QString::fromUtf8("ui_vUnitCh1"));

        hboxLayout3->addWidget(ui_vUnitCh1);


        vboxLayout1->addLayout(hboxLayout3);

        ui_noiseCh1 = new QCheckBox(Frame3);
        ui_noiseCh1->setObjectName(QString::fromUtf8("ui_noiseCh1"));
        sizePolicy1.setHeightForWidth(ui_noiseCh1->sizePolicy().hasHeightForWidth());
        ui_noiseCh1->setSizePolicy(sizePolicy1);

        vboxLayout1->addWidget(ui_noiseCh1);

        ui_jitterCh1 = new QCheckBox(Frame3);
        ui_jitterCh1->setObjectName(QString::fromUtf8("ui_jitterCh1"));
        sizePolicy1.setHeightForWidth(ui_jitterCh1->sizePolicy().hasHeightForWidth());
        ui_jitterCh1->setSizePolicy(sizePolicy1);

        vboxLayout1->addWidget(ui_jitterCh1);

        ui_phaseJitterCh1 = new QCheckBox(Frame3);
        ui_phaseJitterCh1->setObjectName(QString::fromUtf8("ui_phaseJitterCh1"));
        sizePolicy1.setHeightForWidth(ui_phaseJitterCh1->sizePolicy().hasHeightForWidth());
        ui_phaseJitterCh1->setSizePolicy(sizePolicy1);

        vboxLayout1->addWidget(ui_phaseJitterCh1);

        Spacer97 = new QSpacerItem(20, 90, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(Spacer97);


        vboxLayout->addLayout(vboxLayout1);


        hboxLayout->addWidget(Frame3);

        Frame4 = new Q3Frame(UISimulatorWid);
        Frame4->setObjectName(QString::fromUtf8("Frame4"));
        Frame4->setFrameShape(QFrame::WinPanel);
        Frame4->setFrameShadow(QFrame::Sunken);
        vboxLayout3 = new QVBoxLayout(Frame4);
        vboxLayout3->setSpacing(0);
        vboxLayout3->setContentsMargins(2, 2, 2, 2);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        TextLabel1_2 = new QLabel(Frame4);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
        sizePolicy.setHeightForWidth(TextLabel1_2->sizePolicy().hasHeightForWidth());
        TextLabel1_2->setSizePolicy(sizePolicy);
        TextLabel1_2->setFrameShape(QFrame::WinPanel);
        TextLabel1_2->setFrameShadow(QFrame::Raised);
        TextLabel1_2->setWordWrap(false);

        vboxLayout3->addWidget(TextLabel1_2);

        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setSpacing(5);
        vboxLayout4->setContentsMargins(10, 10, 10, 10);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        ui_waveformCh2 = new Q3ButtonGroup(Frame4);
        ui_waveformCh2->setObjectName(QString::fromUtf8("ui_waveformCh2"));
        ui_waveformCh2->setColumnLayout(0, Qt::Vertical);
        ui_waveformCh2->layout()->setSpacing(5);
        ui_waveformCh2->layout()->setContentsMargins(10, 10, 10, 10);
        vboxLayout5 = new QVBoxLayout();
        QBoxLayout *boxlayout1 = qobject_cast<QBoxLayout *>(ui_waveformCh2->layout());
        if (boxlayout1)
            boxlayout1->addLayout(vboxLayout5);
        vboxLayout5->setAlignment(Qt::AlignTop);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        RadioButton1_2 = new QRadioButton(ui_waveformCh2);
        RadioButton1_2->setObjectName(QString::fromUtf8("RadioButton1_2"));
        RadioButton1_2->setIcon(qt_get_icon(image0_ID));
        RadioButton1_2->setChecked(true);

        vboxLayout5->addWidget(RadioButton1_2);

        RadioButton2_2 = new QRadioButton(ui_waveformCh2);
        RadioButton2_2->setObjectName(QString::fromUtf8("RadioButton2_2"));
        RadioButton2_2->setIcon(qt_get_icon(image1_ID));

        vboxLayout5->addWidget(RadioButton2_2);

        RadioButton3_2 = new QRadioButton(ui_waveformCh2);
        RadioButton3_2->setObjectName(QString::fromUtf8("RadioButton3_2"));
        RadioButton3_2->setIcon(qt_get_icon(image2_ID));

        vboxLayout5->addWidget(RadioButton3_2);


        vboxLayout4->addWidget(ui_waveformCh2);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(5);
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        TextLabel3 = new QLabel(Frame4);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
        TextLabel3->setWordWrap(false);

        hboxLayout4->addWidget(TextLabel3);

        TextLabel5 = new QLabel(Frame4);
        TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));
        TextLabel5->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel5->setWordWrap(false);

        hboxLayout4->addWidget(TextLabel5);


        vboxLayout4->addLayout(hboxLayout4);

        ui_symetryCh2 = new QSlider(Frame4);
        ui_symetryCh2->setObjectName(QString::fromUtf8("ui_symetryCh2"));
        ui_symetryCh2->setMinimum(-9);
        ui_symetryCh2->setMaximum(9);
        ui_symetryCh2->setOrientation(Qt::Horizontal);
        ui_symetryCh2->setTickPosition(QSlider::NoTicks);

        vboxLayout4->addWidget(ui_symetryCh2);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(5);
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        ui_freqCh2 = new QSpinBox(Frame4);
        ui_freqCh2->setObjectName(QString::fromUtf8("ui_freqCh2"));
        sizePolicy1.setHeightForWidth(ui_freqCh2->sizePolicy().hasHeightForWidth());
        ui_freqCh2->setSizePolicy(sizePolicy1);
        ui_freqCh2->setWrapping(true);
        ui_freqCh2->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        ui_freqCh2->setMaximum(8000000);
        ui_freqCh2->setMinimum(1);
        ui_freqCh2->setSingleStep(10);
        ui_freqCh2->setValue(100);

        hboxLayout5->addWidget(ui_freqCh2);

        TextLabel19 = new QLabel(Frame4);
        TextLabel19->setObjectName(QString::fromUtf8("TextLabel19"));
        TextLabel19->setWordWrap(false);

        hboxLayout5->addWidget(TextLabel19);


        vboxLayout4->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(5);
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        ui_vCh2 = new QSpinBox(Frame4);
        ui_vCh2->setObjectName(QString::fromUtf8("ui_vCh2"));
        ui_vCh2->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        ui_vCh2->setMaximum(999);
        ui_vCh2->setMinimum(1);
        ui_vCh2->setValue(100);

        hboxLayout6->addWidget(ui_vCh2);

        ui_vUnitCh2 = new QComboBox(Frame4);
        ui_vUnitCh2->setObjectName(QString::fromUtf8("ui_vUnitCh2"));

        hboxLayout6->addWidget(ui_vUnitCh2);


        vboxLayout4->addLayout(hboxLayout6);

        ui_noiseCh2 = new QCheckBox(Frame4);
        ui_noiseCh2->setObjectName(QString::fromUtf8("ui_noiseCh2"));
        sizePolicy1.setHeightForWidth(ui_noiseCh2->sizePolicy().hasHeightForWidth());
        ui_noiseCh2->setSizePolicy(sizePolicy1);

        vboxLayout4->addWidget(ui_noiseCh2);

        ui_jitterCh2 = new QCheckBox(Frame4);
        ui_jitterCh2->setObjectName(QString::fromUtf8("ui_jitterCh2"));
        sizePolicy1.setHeightForWidth(ui_jitterCh2->sizePolicy().hasHeightForWidth());
        ui_jitterCh2->setSizePolicy(sizePolicy1);

        vboxLayout4->addWidget(ui_jitterCh2);

        ui_phaseJitterCh2 = new QCheckBox(Frame4);
        ui_phaseJitterCh2->setObjectName(QString::fromUtf8("ui_phaseJitterCh2"));
        sizePolicy1.setHeightForWidth(ui_phaseJitterCh2->sizePolicy().hasHeightForWidth());
        ui_phaseJitterCh2->setSizePolicy(sizePolicy1);

        vboxLayout4->addWidget(ui_phaseJitterCh2);

        Spacer96 = new QSpacerItem(20, 90, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout4->addItem(Spacer96);


        vboxLayout3->addLayout(vboxLayout4);


        hboxLayout->addWidget(Frame4);


        retranslateUi(UISimulatorWid);
        QObject::connect(ui_symetryCh1, SIGNAL(valueChanged(int)), TextLabel4, SLOT(setNum(int)));
        QObject::connect(ui_symetryCh2, SIGNAL(valueChanged(int)), TextLabel5, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(UISimulatorWid);
    } // setupUi

    void retranslateUi(QDialog *UISimulatorWid)
    {
        UISimulatorWid->setWindowTitle(QApplication::translate("UISimulatorWid", "QtDSO: Wave simulator", 0, QApplication::UnicodeUTF8));
        TextLabel1->setText(QApplication::translate("UISimulatorWid", "Channel 1", 0, QApplication::UnicodeUTF8));
        ui_waveformCh1->setTitle(QApplication::translate("UISimulatorWid", "Waveform", 0, QApplication::UnicodeUTF8));
        RadioButton1->setText(QString());
        RadioButton2->setText(QString());
        RadioButton3->setText(QString());
        TextLabel2->setText(QApplication::translate("UISimulatorWid", "Symetry", 0, QApplication::UnicodeUTF8));
        TextLabel4->setText(QApplication::translate("UISimulatorWid", "0", 0, QApplication::UnicodeUTF8));
        TextLabel18->setText(QApplication::translate("UISimulatorWid", "Hz", 0, QApplication::UnicodeUTF8));
        ui_vUnitCh1->clear();
        ui_vUnitCh1->insertItems(0, QStringList()
         << QApplication::translate("UISimulatorWid", "mVpp", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UISimulatorWid", "Vpp", 0, QApplication::UnicodeUTF8)
        );
        ui_noiseCh1->setText(QApplication::translate("UISimulatorWid", "Add noise", 0, QApplication::UnicodeUTF8));
        ui_jitterCh1->setText(QApplication::translate("UISimulatorWid", "Jitter", 0, QApplication::UnicodeUTF8));
        ui_phaseJitterCh1->setText(QApplication::translate("UISimulatorWid", "Phase jitter", 0, QApplication::UnicodeUTF8));
        TextLabel1_2->setText(QApplication::translate("UISimulatorWid", "Channel 2", 0, QApplication::UnicodeUTF8));
        ui_waveformCh2->setTitle(QApplication::translate("UISimulatorWid", "Waveform", 0, QApplication::UnicodeUTF8));
        RadioButton1_2->setText(QString());
        RadioButton2_2->setText(QString());
        RadioButton3_2->setText(QString());
        TextLabel3->setText(QApplication::translate("UISimulatorWid", "Symetry", 0, QApplication::UnicodeUTF8));
        TextLabel5->setText(QApplication::translate("UISimulatorWid", "0", 0, QApplication::UnicodeUTF8));
        TextLabel19->setText(QApplication::translate("UISimulatorWid", "Hz", 0, QApplication::UnicodeUTF8));
        ui_vUnitCh2->clear();
        ui_vUnitCh2->insertItems(0, QStringList()
         << QApplication::translate("UISimulatorWid", "mVpp", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UISimulatorWid", "Vpp", 0, QApplication::UnicodeUTF8)
        );
        ui_noiseCh2->setText(QApplication::translate("UISimulatorWid", "Add noise", 0, QApplication::UnicodeUTF8));
        ui_jitterCh2->setText(QApplication::translate("UISimulatorWid", "Jitter", 0, QApplication::UnicodeUTF8));
        ui_phaseJitterCh2->setText(QApplication::translate("UISimulatorWid", "Phase jitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        image1_ID,
        image2_ID,
        unknown_ID
    };
    static QPixmap qt_get_icon(IconID id)
    {
    static const unsigned char image0_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x0d,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x5c, 0xae, 0xc5, 0xee, 0x00, 0x00, 0x00,
    0x74, 0x49, 0x44, 0x41, 0x54, 0x78, 0x9c, 0x9d, 0x54, 0x41, 0x0a, 0x00,
    0x20, 0x08, 0x9b, 0x3e, 0xcb, 0xff, 0xb3, 0x6f, 0xd5, 0x29, 0x08, 0x31,
    0x6c, 0xee, 0xd6, 0x32, 0xe7, 0x54, 0x32, 0x92, 0xb8, 0x11, 0x11, 0x0b,
    0x09, 0x24, 0x2d, 0x73, 0x0a, 0xec, 0x16, 0x39, 0x02, 0x77, 0xd2, 0x8a,
    0x53, 0xe1, 0x5d, 0xb2, 0x73, 0xae, 0x1c, 0xca, 0x22, 0x95, 0x40, 0xc7,
    0x4b, 0x22, 0xbf, 0x55, 0x4e, 0xdd, 0x18, 0x80, 0xef, 0x9e, 0x4f, 0xe7,
    0xe3, 0xca, 0xa3, 0xc9, 0x7c, 0x22, 0x62, 0xb9, 0x5a, 0x95, 0x12, 0x7f,
    0x8a, 0xf1, 0x2e, 0xb0, 0x4b, 0xd0, 0xdd, 0x93, 0xb4, 0x91, 0x88, 0xda,
    0xde, 0xb1, 0x13, 0xe0, 0xed, 0x26, 0xf3, 0x63, 0x91, 0xd7, 0x12, 0x54,
    0x1b, 0x68, 0xf9, 0xef, 0x52, 0xf1, 0xf3, 0xd7, 0x6d, 0xae, 0x9d, 0x52,
    0x5f, 0x98, 0x5e, 0x88, 0xa3, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e,
    0x44, 0xae, 0x42, 0x60, 0x82
};

    static const unsigned char image1_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x0d,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x5c, 0xae, 0xc5, 0xee, 0x00, 0x00, 0x00,
    0x48, 0x49, 0x44, 0x41, 0x54, 0x78, 0x9c, 0x63, 0x64, 0x60, 0x60, 0xf8,
    0xcf, 0x40, 0x22, 0x38, 0x76, 0xec, 0x18, 0x23, 0x29, 0xea, 0x99, 0x48,
    0xb5, 0x80, 0x1c, 0xc0, 0x02, 0x63, 0x10, 0xe3, 0x3a, 0x2b, 0x2b, 0x2b,
    0x92, 0x7d, 0xcd, 0xc0, 0x40, 0x27, 0x9f, 0x0c, 0x1f, 0x4b, 0x58, 0x08,
    0x2b, 0x21, 0x1f, 0xc0, 0xe2, 0x90, 0x85, 0xd4, 0xe4, 0x48, 0x0e, 0x18,
    0x3e, 0x71, 0x32, 0x78, 0x23, 0x9e, 0xd4, 0x4c, 0x49, 0x17, 0x9f, 0x00,
    0x00, 0x4d, 0xbf, 0x0d, 0x21, 0x84, 0x49, 0xd0, 0x0e, 0x00, 0x00, 0x00,
    0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    static const unsigned char image2_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x0d,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x5c, 0xae, 0xc5, 0xee, 0x00, 0x00, 0x00,
    0x77, 0x49, 0x44, 0x41, 0x54, 0x78, 0x9c, 0xad, 0x93, 0x4b, 0x0e, 0x00,
    0x41, 0x04, 0x44, 0xe9, 0x63, 0xb9, 0x7f, 0x5c, 0xab, 0x67, 0x65, 0x62,
    0x04, 0x83, 0xa8, 0x4d, 0x2f, 0x7c, 0x9e, 0xd2, 0x81, 0xcc, 0x0c, 0x9e,
    0x88, 0xe8, 0x32, 0x33, 0xba, 0xc1, 0xa6, 0x4e, 0x04, 0xd0, 0xef, 0x3a,
    0x44, 0x1a, 0x8b, 0x8b, 0x0d, 0xd0, 0x07, 0x62, 0x01, 0x5b, 0xa0, 0x17,
    0x62, 0x01, 0xa2, 0x0d, 0xd0, 0xc9, 0x00, 0x1b, 0x20, 0x22, 0xba, 0x08,
    0x00, 0x29, 0xc0, 0x16, 0x54, 0x73, 0x75, 0xfe, 0xe9, 0x14, 0x75, 0x1c,
    0xe9, 0x81, 0x30, 0xba, 0x93, 0x6a, 0x83, 0x4a, 0xdc, 0xbd, 0x93, 0x3f,
    0x65, 0x8e, 0xbc, 0x01, 0x46, 0x90, 0x08, 0x14, 0x39, 0x1c, 0xad, 0x4b,
    0xcb, 0xba, 0xf1, 0x56, 0x38, 0x76, 0xe2, 0x35, 0x8d, 0xfe, 0xe8, 0x01,
    0x7d, 0x3c, 0x61, 0xb9, 0x79, 0x0a, 0xcf, 0x34, 0x00, 0x00, 0x00, 0x00,
    0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    switch (id) {
        case image0_ID:  { QImage img; img.loadFromData(image0_data, sizeof(image0_data), "PNG"); return QPixmap::fromImage(img); }
        case image1_ID:  { QImage img; img.loadFromData(image1_data, sizeof(image1_data), "PNG"); return QPixmap::fromImage(img); }
        case image2_ID:  { QImage img; img.loadFromData(image2_data, sizeof(image2_data), "PNG"); return QPixmap::fromImage(img); }
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class UISimulatorWid: public Ui_UISimulatorWid {};
} // namespace Ui

QT_END_NAMESPACE

class UISimulatorWid : public QDialog, public Ui::UISimulatorWid
{
    Q_OBJECT

public:
    UISimulatorWid(QWidget* parent = 0, const char* name = 0, bool modal = false, Qt::WindowFlags fl = 0);
    ~UISimulatorWid();

protected slots:
    virtual void languageChange();

};

#endif // UISIMULATORWID_H
