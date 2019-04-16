#ifndef UIMAINWID_H
#define UIMAINWID_H

#include <qvariant.h>


#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3GroupBox>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollBar>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "buttongrid.h"
#include "dsowid.h"

QT_BEGIN_NAMESPACE

class Ui_UIMainWid
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QGridLayout *gridLayout;
    QSlider *ui_triggerLevel;
    QScrollBar *ui_xPos;
    DsoWid *ui_dsoWid;
    QVBoxLayout *vboxLayout1;
    Q3ButtonGroup *ui_dsoGroup;
    QVBoxLayout *vboxLayout2;
    ButtonGrid *ui_timebase;
    Q3GroupBox *ui_dsoDisplayGroup;
    QGridLayout *gridLayout1;
    QComboBox *ui_interpolation;
    QLabel *TextLabel1_3;
    QToolButton *ui_showEnvelope;
    QToolButton *ui_resetEnvelope;
    QToolButton *ui_fastAcq;
    QToolButton *ui_equivalentSampling;
    Q3GroupBox *ui_fftGroup;
    QVBoxLayout *vboxLayout3;
    ButtonGrid *ui_fftFreq;
    Q3ButtonGroup *ui_fftParamGroup;
    QGridLayout *gridLayout2;
    QLabel *TextLabel1_2;
    QLabel *TextLabel3;
    QLabel *TextLabel4;
    QComboBox *ui_fftSize;
    QComboBox *ui_fftType;
    QComboBox *ui_fftWindow;
    QSpinBox *ui_freeFftLength;
    Q3GroupBox *ui_fftDisplayGroup;
    QGridLayout *gridLayout3;
    QLabel *TextLabel2_2;
    QComboBox *ui_fftDisplayValue;
    QComboBox *ui_fftZoom;
    QComboBox *ui_fftPostMag;
    QComboBox *ui_fftScale;
    QLabel *TextLabel1;
    QLabel *TextLabel2;
    QLabel *TextLabel5;
    QSpacerItem *Spacer10_2;
    QSpacerItem *Spacer9;
    QToolButton *ui_fftShowPeaks;
    QHBoxLayout *hboxLayout1;
    QToolButton *ui_resetFftDisplay;
    QLabel *TextLabel1_4;
    QSpacerItem *Spacer2;
    QHBoxLayout *hboxLayout2;
    Q3GroupBox *GroupBox2;
    QGridLayout *gridLayout4;
    QGridLayout *gridLayout5;
    QComboBox *ui_probeCh1;
    QComboBox *ui_couplingModeCh1;
    QVBoxLayout *vboxLayout4;
    QSpacerItem *Spacer11_2;
    QToolButton *ui_ch1Enable;
    ButtonGrid *ui_voltsGridCh1;
    QSpacerItem *Spacer13;
    QGridLayout *gridLayout6;
    QSlider *ui_yPosCh1;
    QSlider *ui_stretchCh1;
    QLabel *PixmapLabel1;
    QLabel *ui_dcLabel1;
    QToolButton *ui_centerDcCh1;
    QToolButton *ui_centerCh1;
    QToolButton *ui_resetStretchCh1;
    QSlider *ui_dcOffsetCh1;
    QLabel *PixmapLabel1_2;
    Q3GroupBox *GroupBox3;
    QGridLayout *gridLayout7;
    QGridLayout *gridLayout8;
    QVBoxLayout *vboxLayout5;
    QSpacerItem *Spacer12;
    QToolButton *ui_ch2Enable;
    QComboBox *ui_couplingModeCh2;
    QComboBox *ui_probeCh2;
    ButtonGrid *ui_voltsGridCh2;
    QSpacerItem *Spacer14;
    QGridLayout *gridLayout9;
    QLabel *ui_dcLabel2;
    QToolButton *ui_resetStretchCh2;
    QSlider *ui_dcOffsetCh2;
    QToolButton *ui_centerCh2;
    QToolButton *ui_centerDcCh2;
    QLabel *PixmapLabel1_3;
    QSlider *ui_stretchCh2;
    QSlider *ui_yPosCh2;
    QLabel *PixmapLabel1_2_2;
    Q3ButtonGroup *ui_mathGroup;
    QHBoxLayout *hboxLayout3;
    QVBoxLayout *vboxLayout6;
    Q3ButtonGroup *ui_mathModeGroup;
    QVBoxLayout *vboxLayout7;
    QToolButton *ui_mathOff;
    QToolButton *ui_mathAdd;
    QToolButton *ui_mathSub;
    QToolButton *ui_mathMagniture;
    QSpacerItem *Spacer10;
    QGridLayout *gridLayout10;
    QToolButton *ui_absCh2;
    QToolButton *ui_invCh1;
    QToolButton *ui_invCh2;
    QToolButton *ui_absCh1;
    QGridLayout *gridLayout11;
    QSlider *ui_yPosMath;
    QSlider *ui_stretchMath;
    QToolButton *ui_centerMath;
    QLabel *PixmapLabel1_2_2_2;
    QToolButton *ui_resetStretchMath;
    QLabel *PixmapLabel1_3_2;
    QSpacerItem *Spacer11;
    QVBoxLayout *vboxLayout8;
    Q3GroupBox *GroupBox5;
    QVBoxLayout *vboxLayout9;
    Q3ButtonGroup *ui_modeGroup;
    QHBoxLayout *hboxLayout4;
    QToolButton *ui_dso;
    QToolButton *ui_xy;
    QToolButton *ui_fft;
    Q3ButtonGroup *ButtonGroup41;
    QHBoxLayout *hboxLayout5;
    QToolButton *ui_continuous;
    QToolButton *ui_single;
    Q3GroupBox *ui_triggerGroup;
    QVBoxLayout *vboxLayout10;
    QHBoxLayout *hboxLayout6;
    QHBoxLayout *hboxLayout7;
    QToolButton *ui_trigger;
    QToolButton *ui_triggerStabilizer;
    Q3ButtonGroup *ButtonGroup32;
    QHBoxLayout *hboxLayout8;
    QToolButton *ui_raising;
    QToolButton *ui_falling;
    Q3ButtonGroup *ButtonGroup33;
    QHBoxLayout *hboxLayout9;
    QToolButton *ui_ch1Trigger;
    QToolButton *ui_ch2Trigger;
    QToolButton *ui_extTrigger;
    QSpacerItem *Spacer2_2;
    QHBoxLayout *hboxLayout10;
    QToolButton *ui_timeMarker;
    QToolButton *ui_timeMarker2;
    QToolButton *ui_amplitudeMarker;

    void setupUi(QWidget *UIMainWid)
    {
        if (UIMainWid->objectName().isEmpty())
            UIMainWid->setObjectName(QString::fromUtf8("UIMainWid"));
        UIMainWid->resize(899, 877);
        vboxLayout = new QVBoxLayout(UIMainWid);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ui_triggerLevel = new QSlider(UIMainWid);
        ui_triggerLevel->setObjectName(QString::fromUtf8("ui_triggerLevel"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(7));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_triggerLevel->sizePolicy().hasHeightForWidth());
        ui_triggerLevel->setSizePolicy(sizePolicy);
        ui_triggerLevel->setMinimum(0);
        ui_triggerLevel->setMaximum(255);
        ui_triggerLevel->setPageStep(1);
        ui_triggerLevel->setValue(128);
        ui_triggerLevel->setOrientation(Qt::Vertical);

        gridLayout->addWidget(ui_triggerLevel, 0, 1, 1, 1);

        ui_xPos = new QScrollBar(UIMainWid);
        ui_xPos->setObjectName(QString::fromUtf8("ui_xPos"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ui_xPos->sizePolicy().hasHeightForWidth());
        ui_xPos->setSizePolicy(sizePolicy1);
        ui_xPos->setMaximum(567);
        ui_xPos->setValue(288);
        ui_xPos->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(ui_xPos, 1, 0, 1, 1);

        ui_dsoWid = new DsoWid(UIMainWid);
        ui_dsoWid->setObjectName(QString::fromUtf8("ui_dsoWid"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ui_dsoWid->sizePolicy().hasHeightForWidth());
        ui_dsoWid->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(ui_dsoWid, 0, 0, 1, 1);


        hboxLayout->addLayout(gridLayout);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(5);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        ui_dsoGroup = new Q3ButtonGroup(UIMainWid);
        ui_dsoGroup->setObjectName(QString::fromUtf8("ui_dsoGroup"));
        sizePolicy1.setHeightForWidth(ui_dsoGroup->sizePolicy().hasHeightForWidth());
        ui_dsoGroup->setSizePolicy(sizePolicy1);
        ui_dsoGroup->setColumnLayout(0, Qt::Vertical);
        ui_dsoGroup->layout()->setSpacing(5);
        ui_dsoGroup->layout()->setContentsMargins(10, 10, 10, 10);
        vboxLayout2 = new QVBoxLayout();
        QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(ui_dsoGroup->layout());
        if (boxlayout)
            boxlayout->addLayout(vboxLayout2);
        vboxLayout2->setAlignment(Qt::AlignTop);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        ui_timebase = new ButtonGrid(ui_dsoGroup);
        ui_timebase->setObjectName(QString::fromUtf8("ui_timebase"));
        ui_timebase->setMinimumSize(QSize(160, 0));

        vboxLayout2->addWidget(ui_timebase);


        vboxLayout1->addWidget(ui_dsoGroup);

        ui_dsoDisplayGroup = new Q3GroupBox(UIMainWid);
        ui_dsoDisplayGroup->setObjectName(QString::fromUtf8("ui_dsoDisplayGroup"));
        sizePolicy1.setHeightForWidth(ui_dsoDisplayGroup->sizePolicy().hasHeightForWidth());
        ui_dsoDisplayGroup->setSizePolicy(sizePolicy1);
        ui_dsoDisplayGroup->setAlignment(Qt::AlignLeft);
        ui_dsoDisplayGroup->setColumnLayout(0, Qt::Vertical);
        ui_dsoDisplayGroup->layout()->setSpacing(5);
        ui_dsoDisplayGroup->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout1 = new QGridLayout();
        QBoxLayout *boxlayout1 = qobject_cast<QBoxLayout *>(ui_dsoDisplayGroup->layout());
        if (boxlayout1)
            boxlayout1->addLayout(gridLayout1);
        gridLayout1->setAlignment(Qt::AlignTop);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        ui_interpolation = new QComboBox(ui_dsoDisplayGroup);
        ui_interpolation->setObjectName(QString::fromUtf8("ui_interpolation"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ui_interpolation->sizePolicy().hasHeightForWidth());
        ui_interpolation->setSizePolicy(sizePolicy3);

        gridLayout1->addWidget(ui_interpolation, 0, 1, 1, 2);

        TextLabel1_3 = new QLabel(ui_dsoDisplayGroup);
        TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));
        TextLabel1_3->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel1_3->setWordWrap(false);

        gridLayout1->addWidget(TextLabel1_3, 0, 0, 1, 1);

        ui_showEnvelope = new QToolButton(ui_dsoDisplayGroup);
        ui_showEnvelope->setObjectName(QString::fromUtf8("ui_showEnvelope"));
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(1));
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ui_showEnvelope->sizePolicy().hasHeightForWidth());
        ui_showEnvelope->setSizePolicy(sizePolicy4);
        ui_showEnvelope->setCheckable(true);

        gridLayout1->addWidget(ui_showEnvelope, 3, 0, 1, 2);

        ui_resetEnvelope = new QToolButton(ui_dsoDisplayGroup);
        ui_resetEnvelope->setObjectName(QString::fromUtf8("ui_resetEnvelope"));
        QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(1));
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(ui_resetEnvelope->sizePolicy().hasHeightForWidth());
        ui_resetEnvelope->setSizePolicy(sizePolicy5);
        const QIcon icon = qt_get_icon(image0_ID);
        ui_resetEnvelope->setIcon(icon);

        gridLayout1->addWidget(ui_resetEnvelope, 3, 2, 1, 1);

        ui_fastAcq = new QToolButton(ui_dsoDisplayGroup);
        ui_fastAcq->setObjectName(QString::fromUtf8("ui_fastAcq"));
        ui_fastAcq->setCheckable(true);

        gridLayout1->addWidget(ui_fastAcq, 2, 0, 1, 2);

        ui_equivalentSampling = new QToolButton(ui_dsoDisplayGroup);
        ui_equivalentSampling->setObjectName(QString::fromUtf8("ui_equivalentSampling"));
        ui_equivalentSampling->setCheckable(true);

        gridLayout1->addWidget(ui_equivalentSampling, 1, 0, 1, 2);


        vboxLayout1->addWidget(ui_dsoDisplayGroup);

        ui_fftGroup = new Q3GroupBox(UIMainWid);
        ui_fftGroup->setObjectName(QString::fromUtf8("ui_fftGroup"));
        sizePolicy1.setHeightForWidth(ui_fftGroup->sizePolicy().hasHeightForWidth());
        ui_fftGroup->setSizePolicy(sizePolicy1);
        ui_fftGroup->setColumnLayout(0, Qt::Vertical);
        ui_fftGroup->layout()->setSpacing(5);
        ui_fftGroup->layout()->setContentsMargins(10, 10, 10, 10);
        vboxLayout3 = new QVBoxLayout();
        QBoxLayout *boxlayout2 = qobject_cast<QBoxLayout *>(ui_fftGroup->layout());
        if (boxlayout2)
            boxlayout2->addLayout(vboxLayout3);
        vboxLayout3->setAlignment(Qt::AlignTop);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        ui_fftFreq = new ButtonGrid(ui_fftGroup);
        ui_fftFreq->setObjectName(QString::fromUtf8("ui_fftFreq"));
        ui_fftFreq->setMinimumSize(QSize(160, 0));

        vboxLayout3->addWidget(ui_fftFreq);


        vboxLayout1->addWidget(ui_fftGroup);

        ui_fftParamGroup = new Q3ButtonGroup(UIMainWid);
        ui_fftParamGroup->setObjectName(QString::fromUtf8("ui_fftParamGroup"));
        sizePolicy1.setHeightForWidth(ui_fftParamGroup->sizePolicy().hasHeightForWidth());
        ui_fftParamGroup->setSizePolicy(sizePolicy1);
        ui_fftParamGroup->setColumnLayout(0, Qt::Vertical);
        ui_fftParamGroup->layout()->setSpacing(5);
        ui_fftParamGroup->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout2 = new QGridLayout();
        QBoxLayout *boxlayout3 = qobject_cast<QBoxLayout *>(ui_fftParamGroup->layout());
        if (boxlayout3)
            boxlayout3->addLayout(gridLayout2);
        gridLayout2->setAlignment(Qt::AlignTop);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        TextLabel1_2 = new QLabel(ui_fftParamGroup);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
        TextLabel1_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel1_2->setWordWrap(false);

        gridLayout2->addWidget(TextLabel1_2, 2, 0, 1, 1);

        TextLabel3 = new QLabel(ui_fftParamGroup);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
        TextLabel3->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel3->setWordWrap(false);

        gridLayout2->addWidget(TextLabel3, 1, 0, 1, 1);

        TextLabel4 = new QLabel(ui_fftParamGroup);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        TextLabel4->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel4->setWordWrap(false);

        gridLayout2->addWidget(TextLabel4, 0, 0, 1, 1);

        ui_fftSize = new QComboBox(ui_fftParamGroup);
        ui_fftSize->setObjectName(QString::fromUtf8("ui_fftSize"));

        gridLayout2->addWidget(ui_fftSize, 0, 1, 1, 1);

        ui_fftType = new QComboBox(ui_fftParamGroup);
        ui_fftType->setObjectName(QString::fromUtf8("ui_fftType"));

        gridLayout2->addWidget(ui_fftType, 1, 1, 1, 2);

        ui_fftWindow = new QComboBox(ui_fftParamGroup);
        ui_fftWindow->setObjectName(QString::fromUtf8("ui_fftWindow"));

        gridLayout2->addWidget(ui_fftWindow, 2, 1, 1, 2);

        ui_freeFftLength = new QSpinBox(ui_fftParamGroup);
        ui_freeFftLength->setObjectName(QString::fromUtf8("ui_freeFftLength"));
        ui_freeFftLength->setEnabled(false);
        ui_freeFftLength->setMaximum(4096);
        ui_freeFftLength->setMinimum(128);
        ui_freeFftLength->setValue(1024);

        gridLayout2->addWidget(ui_freeFftLength, 0, 2, 1, 1);


        vboxLayout1->addWidget(ui_fftParamGroup);

        ui_fftDisplayGroup = new Q3GroupBox(UIMainWid);
        ui_fftDisplayGroup->setObjectName(QString::fromUtf8("ui_fftDisplayGroup"));
        ui_fftDisplayGroup->setAlignment(Qt::AlignVCenter|Qt::AlignLeft);
        ui_fftDisplayGroup->setColumnLayout(0, Qt::Vertical);
        ui_fftDisplayGroup->layout()->setSpacing(5);
        ui_fftDisplayGroup->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout3 = new QGridLayout();
        QBoxLayout *boxlayout4 = qobject_cast<QBoxLayout *>(ui_fftDisplayGroup->layout());
        if (boxlayout4)
            boxlayout4->addLayout(gridLayout3);
        gridLayout3->setAlignment(Qt::AlignTop);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        TextLabel2_2 = new QLabel(ui_fftDisplayGroup);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));
        TextLabel2_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel2_2->setWordWrap(false);

        gridLayout3->addWidget(TextLabel2_2, 0, 0, 1, 1);

        ui_fftDisplayValue = new QComboBox(ui_fftDisplayGroup);
        ui_fftDisplayValue->setObjectName(QString::fromUtf8("ui_fftDisplayValue"));
        sizePolicy3.setHeightForWidth(ui_fftDisplayValue->sizePolicy().hasHeightForWidth());
        ui_fftDisplayValue->setSizePolicy(sizePolicy3);

        gridLayout3->addWidget(ui_fftDisplayValue, 0, 1, 1, 1);

        ui_fftZoom = new QComboBox(ui_fftDisplayGroup);
        ui_fftZoom->setObjectName(QString::fromUtf8("ui_fftZoom"));

        gridLayout3->addWidget(ui_fftZoom, 1, 1, 1, 1);

        ui_fftPostMag = new QComboBox(ui_fftDisplayGroup);
        ui_fftPostMag->setObjectName(QString::fromUtf8("ui_fftPostMag"));

        gridLayout3->addWidget(ui_fftPostMag, 2, 1, 1, 1);

        ui_fftScale = new QComboBox(ui_fftDisplayGroup);
        ui_fftScale->setObjectName(QString::fromUtf8("ui_fftScale"));

        gridLayout3->addWidget(ui_fftScale, 3, 1, 1, 2);

        TextLabel1 = new QLabel(ui_fftDisplayGroup);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel1->setWordWrap(false);

        gridLayout3->addWidget(TextLabel1, 1, 0, 1, 1);

        TextLabel2 = new QLabel(ui_fftDisplayGroup);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
        TextLabel2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel2->setWordWrap(false);

        gridLayout3->addWidget(TextLabel2, 2, 0, 1, 1);

        TextLabel5 = new QLabel(ui_fftDisplayGroup);
        TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));
        TextLabel5->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel5->setWordWrap(false);

        gridLayout3->addWidget(TextLabel5, 3, 0, 1, 1);

        Spacer10_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(Spacer10_2, 2, 2, 1, 1);

        Spacer9 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(Spacer9, 1, 2, 1, 1);

        ui_fftShowPeaks = new QToolButton(ui_fftDisplayGroup);
        ui_fftShowPeaks->setObjectName(QString::fromUtf8("ui_fftShowPeaks"));
        ui_fftShowPeaks->setCheckable(true);

        gridLayout3->addWidget(ui_fftShowPeaks, 4, 0, 1, 3);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(0);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        ui_resetFftDisplay = new QToolButton(ui_fftDisplayGroup);
        ui_resetFftDisplay->setObjectName(QString::fromUtf8("ui_resetFftDisplay"));
        sizePolicy5.setHeightForWidth(ui_resetFftDisplay->sizePolicy().hasHeightForWidth());
        ui_resetFftDisplay->setSizePolicy(sizePolicy5);
        ui_resetFftDisplay->setIcon(icon);

        hboxLayout1->addWidget(ui_resetFftDisplay);

        TextLabel1_4 = new QLabel(ui_fftDisplayGroup);
        TextLabel1_4->setObjectName(QString::fromUtf8("TextLabel1_4"));
        QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(1));
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(TextLabel1_4->sizePolicy().hasHeightForWidth());
        TextLabel1_4->setSizePolicy(sizePolicy6);
        TextLabel1_4->setWordWrap(false);

        hboxLayout1->addWidget(TextLabel1_4);


        gridLayout3->addLayout(hboxLayout1, 0, 2, 1, 1);


        vboxLayout1->addWidget(ui_fftDisplayGroup);

        Spacer2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(Spacer2);


        hboxLayout->addLayout(vboxLayout1);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(5);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        GroupBox2 = new Q3GroupBox(UIMainWid);
        GroupBox2->setObjectName(QString::fromUtf8("GroupBox2"));
        QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(3));
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(GroupBox2->sizePolicy().hasHeightForWidth());
        GroupBox2->setSizePolicy(sizePolicy7);
        GroupBox2->setColumnLayout(0, Qt::Vertical);
        GroupBox2->layout()->setSpacing(5);
        GroupBox2->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout4 = new QGridLayout();
        QBoxLayout *boxlayout5 = qobject_cast<QBoxLayout *>(GroupBox2->layout());
        if (boxlayout5)
            boxlayout5->addLayout(gridLayout4);
        gridLayout4->setAlignment(Qt::AlignTop);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout5 = new QGridLayout();
        gridLayout5->setSpacing(5);
        gridLayout5->setContentsMargins(0, 0, 0, 0);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        ui_probeCh1 = new QComboBox(GroupBox2);
        ui_probeCh1->setObjectName(QString::fromUtf8("ui_probeCh1"));

        gridLayout5->addWidget(ui_probeCh1, 1, 1, 1, 1);

        ui_couplingModeCh1 = new QComboBox(GroupBox2);
        ui_couplingModeCh1->setObjectName(QString::fromUtf8("ui_couplingModeCh1"));

        gridLayout5->addWidget(ui_couplingModeCh1, 0, 1, 1, 1);

        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setSpacing(0);
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        Spacer11_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout4->addItem(Spacer11_2);

        ui_ch1Enable = new QToolButton(GroupBox2);
        ui_ch1Enable->setObjectName(QString::fromUtf8("ui_ch1Enable"));
        ui_ch1Enable->setMinimumSize(QSize(40, 0));
        ui_ch1Enable->setCheckable(true);
        ui_ch1Enable->setChecked(true);

        vboxLayout4->addWidget(ui_ch1Enable);


        gridLayout5->addLayout(vboxLayout4, 0, 0, 2, 1);


        gridLayout4->addLayout(gridLayout5, 2, 0, 1, 1);

        ui_voltsGridCh1 = new ButtonGrid(GroupBox2);
        ui_voltsGridCh1->setObjectName(QString::fromUtf8("ui_voltsGridCh1"));
        QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(3));
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(ui_voltsGridCh1->sizePolicy().hasHeightForWidth());
        ui_voltsGridCh1->setSizePolicy(sizePolicy8);

        gridLayout4->addWidget(ui_voltsGridCh1, 0, 0, 1, 1);

        Spacer13 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(Spacer13, 1, 0, 1, 1);

        gridLayout6 = new QGridLayout();
        gridLayout6->setSpacing(5);
        gridLayout6->setContentsMargins(0, 0, 0, 0);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        ui_yPosCh1 = new QSlider(GroupBox2);
        ui_yPosCh1->setObjectName(QString::fromUtf8("ui_yPosCh1"));
        sizePolicy.setHeightForWidth(ui_yPosCh1->sizePolicy().hasHeightForWidth());
        ui_yPosCh1->setSizePolicy(sizePolicy);
        ui_yPosCh1->setMinimum(-200);
        ui_yPosCh1->setMaximum(200);
        ui_yPosCh1->setPageStep(1);
        ui_yPosCh1->setValue(-80);
        ui_yPosCh1->setOrientation(Qt::Vertical);
        ui_yPosCh1->setTickPosition(QSlider::NoTicks);
        ui_yPosCh1->setTickInterval(20);

        gridLayout6->addWidget(ui_yPosCh1, 1, 2, 1, 1);

        ui_stretchCh1 = new QSlider(GroupBox2);
        ui_stretchCh1->setObjectName(QString::fromUtf8("ui_stretchCh1"));
        sizePolicy.setHeightForWidth(ui_stretchCh1->sizePolicy().hasHeightForWidth());
        ui_stretchCh1->setSizePolicy(sizePolicy);
        ui_stretchCh1->setMinimum(-100);
        ui_stretchCh1->setMaximum(100);
        ui_stretchCh1->setPageStep(1);
        ui_stretchCh1->setValue(0);
        ui_stretchCh1->setOrientation(Qt::Vertical);
        ui_stretchCh1->setTickPosition(QSlider::NoTicks);
        ui_stretchCh1->setTickInterval(10);

        gridLayout6->addWidget(ui_stretchCh1, 1, 0, 1, 1);

        PixmapLabel1 = new QLabel(GroupBox2);
        PixmapLabel1->setObjectName(QString::fromUtf8("PixmapLabel1"));
        PixmapLabel1->setPixmap(qt_get_icon(image1_ID));
        PixmapLabel1->setScaledContents(false);
        PixmapLabel1->setAlignment(Qt::AlignCenter);
        PixmapLabel1->setWordWrap(false);

        gridLayout6->addWidget(PixmapLabel1, 0, 2, 1, 1);

        ui_dcLabel1 = new QLabel(GroupBox2);
        ui_dcLabel1->setObjectName(QString::fromUtf8("ui_dcLabel1"));
        ui_dcLabel1->setPixmap(qt_get_icon(image2_ID));
        ui_dcLabel1->setAlignment(Qt::AlignCenter);
        ui_dcLabel1->setWordWrap(false);

        gridLayout6->addWidget(ui_dcLabel1, 0, 1, 1, 1);

        ui_centerDcCh1 = new QToolButton(GroupBox2);
        ui_centerDcCh1->setObjectName(QString::fromUtf8("ui_centerDcCh1"));
        ui_centerDcCh1->setEnabled(false);
        const QIcon icon1 = qt_get_icon(image3_ID);
        ui_centerDcCh1->setIcon(icon1);

        gridLayout6->addWidget(ui_centerDcCh1, 2, 1, 1, 1);

        ui_centerCh1 = new QToolButton(GroupBox2);
        ui_centerCh1->setObjectName(QString::fromUtf8("ui_centerCh1"));
        ui_centerCh1->setIcon(icon1);

        gridLayout6->addWidget(ui_centerCh1, 2, 2, 1, 1);

        ui_resetStretchCh1 = new QToolButton(GroupBox2);
        ui_resetStretchCh1->setObjectName(QString::fromUtf8("ui_resetStretchCh1"));
        ui_resetStretchCh1->setEnabled(false);
        ui_resetStretchCh1->setIcon(icon1);

        gridLayout6->addWidget(ui_resetStretchCh1, 2, 0, 1, 1);

        ui_dcOffsetCh1 = new QSlider(GroupBox2);
        ui_dcOffsetCh1->setObjectName(QString::fromUtf8("ui_dcOffsetCh1"));
        sizePolicy.setHeightForWidth(ui_dcOffsetCh1->sizePolicy().hasHeightForWidth());
        ui_dcOffsetCh1->setSizePolicy(sizePolicy);
        ui_dcOffsetCh1->setMinimum(0);
        ui_dcOffsetCh1->setMaximum(255);
        ui_dcOffsetCh1->setPageStep(1);
        ui_dcOffsetCh1->setValue(127);
        ui_dcOffsetCh1->setOrientation(Qt::Vertical);
        ui_dcOffsetCh1->setTickPosition(QSlider::NoTicks);
        ui_dcOffsetCh1->setTickInterval(20);

        gridLayout6->addWidget(ui_dcOffsetCh1, 1, 1, 1, 1);

        PixmapLabel1_2 = new QLabel(GroupBox2);
        PixmapLabel1_2->setObjectName(QString::fromUtf8("PixmapLabel1_2"));
        PixmapLabel1_2->setPixmap(qt_get_icon(image4_ID));
        PixmapLabel1_2->setScaledContents(false);
        PixmapLabel1_2->setAlignment(Qt::AlignCenter);
        PixmapLabel1_2->setWordWrap(false);

        gridLayout6->addWidget(PixmapLabel1_2, 0, 0, 1, 1);


        gridLayout4->addLayout(gridLayout6, 0, 1, 3, 1);


        hboxLayout2->addWidget(GroupBox2);

        GroupBox3 = new Q3GroupBox(UIMainWid);
        GroupBox3->setObjectName(QString::fromUtf8("GroupBox3"));
        sizePolicy7.setHeightForWidth(GroupBox3->sizePolicy().hasHeightForWidth());
        GroupBox3->setSizePolicy(sizePolicy7);
        GroupBox3->setColumnLayout(0, Qt::Vertical);
        GroupBox3->layout()->setSpacing(5);
        GroupBox3->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout7 = new QGridLayout();
        QBoxLayout *boxlayout6 = qobject_cast<QBoxLayout *>(GroupBox3->layout());
        if (boxlayout6)
            boxlayout6->addLayout(gridLayout7);
        gridLayout7->setAlignment(Qt::AlignTop);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        gridLayout8 = new QGridLayout();
        gridLayout8->setSpacing(5);
        gridLayout8->setContentsMargins(0, 0, 0, 0);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        vboxLayout5 = new QVBoxLayout();
        vboxLayout5->setSpacing(0);
        vboxLayout5->setContentsMargins(0, 0, 0, 0);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        Spacer12 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(Spacer12);

        ui_ch2Enable = new QToolButton(GroupBox3);
        ui_ch2Enable->setObjectName(QString::fromUtf8("ui_ch2Enable"));
        ui_ch2Enable->setMinimumSize(QSize(40, 0));
        ui_ch2Enable->setCheckable(true);
        ui_ch2Enable->setChecked(true);

        vboxLayout5->addWidget(ui_ch2Enable);


        gridLayout8->addLayout(vboxLayout5, 0, 0, 2, 1);

        ui_couplingModeCh2 = new QComboBox(GroupBox3);
        ui_couplingModeCh2->setObjectName(QString::fromUtf8("ui_couplingModeCh2"));

        gridLayout8->addWidget(ui_couplingModeCh2, 0, 1, 1, 1);

        ui_probeCh2 = new QComboBox(GroupBox3);
        ui_probeCh2->setObjectName(QString::fromUtf8("ui_probeCh2"));

        gridLayout8->addWidget(ui_probeCh2, 1, 1, 1, 1);


        gridLayout7->addLayout(gridLayout8, 2, 0, 1, 1);

        ui_voltsGridCh2 = new ButtonGrid(GroupBox3);
        ui_voltsGridCh2->setObjectName(QString::fromUtf8("ui_voltsGridCh2"));
        sizePolicy8.setHeightForWidth(ui_voltsGridCh2->sizePolicy().hasHeightForWidth());
        ui_voltsGridCh2->setSizePolicy(sizePolicy8);

        gridLayout7->addWidget(ui_voltsGridCh2, 0, 0, 1, 1);

        Spacer14 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout7->addItem(Spacer14, 1, 0, 1, 1);

        gridLayout9 = new QGridLayout();
        gridLayout9->setSpacing(5);
        gridLayout9->setContentsMargins(0, 0, 0, 0);
        gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
        ui_dcLabel2 = new QLabel(GroupBox3);
        ui_dcLabel2->setObjectName(QString::fromUtf8("ui_dcLabel2"));
        ui_dcLabel2->setPixmap(qt_get_icon(image2_ID));
        ui_dcLabel2->setAlignment(Qt::AlignCenter);
        ui_dcLabel2->setWordWrap(false);

        gridLayout9->addWidget(ui_dcLabel2, 0, 1, 1, 1);

        ui_resetStretchCh2 = new QToolButton(GroupBox3);
        ui_resetStretchCh2->setObjectName(QString::fromUtf8("ui_resetStretchCh2"));
        ui_resetStretchCh2->setEnabled(false);
        ui_resetStretchCh2->setIcon(icon1);

        gridLayout9->addWidget(ui_resetStretchCh2, 2, 0, 1, 1);

        ui_dcOffsetCh2 = new QSlider(GroupBox3);
        ui_dcOffsetCh2->setObjectName(QString::fromUtf8("ui_dcOffsetCh2"));
        sizePolicy.setHeightForWidth(ui_dcOffsetCh2->sizePolicy().hasHeightForWidth());
        ui_dcOffsetCh2->setSizePolicy(sizePolicy);
        ui_dcOffsetCh2->setMinimum(0);
        ui_dcOffsetCh2->setMaximum(255);
        ui_dcOffsetCh2->setPageStep(1);
        ui_dcOffsetCh2->setValue(127);
        ui_dcOffsetCh2->setOrientation(Qt::Vertical);
        ui_dcOffsetCh2->setTickPosition(QSlider::NoTicks);
        ui_dcOffsetCh2->setTickInterval(20);

        gridLayout9->addWidget(ui_dcOffsetCh2, 1, 1, 1, 1);

        ui_centerCh2 = new QToolButton(GroupBox3);
        ui_centerCh2->setObjectName(QString::fromUtf8("ui_centerCh2"));
        ui_centerCh2->setIcon(icon1);

        gridLayout9->addWidget(ui_centerCh2, 2, 2, 1, 1);

        ui_centerDcCh2 = new QToolButton(GroupBox3);
        ui_centerDcCh2->setObjectName(QString::fromUtf8("ui_centerDcCh2"));
        ui_centerDcCh2->setEnabled(false);
        ui_centerDcCh2->setIcon(icon1);

        gridLayout9->addWidget(ui_centerDcCh2, 2, 1, 1, 1);

        PixmapLabel1_3 = new QLabel(GroupBox3);
        PixmapLabel1_3->setObjectName(QString::fromUtf8("PixmapLabel1_3"));
        PixmapLabel1_3->setPixmap(qt_get_icon(image1_ID));
        PixmapLabel1_3->setScaledContents(false);
        PixmapLabel1_3->setAlignment(Qt::AlignCenter);
        PixmapLabel1_3->setWordWrap(false);

        gridLayout9->addWidget(PixmapLabel1_3, 0, 2, 1, 1);

        ui_stretchCh2 = new QSlider(GroupBox3);
        ui_stretchCh2->setObjectName(QString::fromUtf8("ui_stretchCh2"));
        sizePolicy.setHeightForWidth(ui_stretchCh2->sizePolicy().hasHeightForWidth());
        ui_stretchCh2->setSizePolicy(sizePolicy);
        ui_stretchCh2->setMinimum(-100);
        ui_stretchCh2->setMaximum(100);
        ui_stretchCh2->setPageStep(1);
        ui_stretchCh2->setValue(0);
        ui_stretchCh2->setOrientation(Qt::Vertical);
        ui_stretchCh2->setTickPosition(QSlider::NoTicks);
        ui_stretchCh2->setTickInterval(10);

        gridLayout9->addWidget(ui_stretchCh2, 1, 0, 1, 1);

        ui_yPosCh2 = new QSlider(GroupBox3);
        ui_yPosCh2->setObjectName(QString::fromUtf8("ui_yPosCh2"));
        sizePolicy.setHeightForWidth(ui_yPosCh2->sizePolicy().hasHeightForWidth());
        ui_yPosCh2->setSizePolicy(sizePolicy);
        ui_yPosCh2->setMinimum(-200);
        ui_yPosCh2->setMaximum(200);
        ui_yPosCh2->setPageStep(1);
        ui_yPosCh2->setValue(80);
        ui_yPosCh2->setOrientation(Qt::Vertical);
        ui_yPosCh2->setTickPosition(QSlider::NoTicks);
        ui_yPosCh2->setTickInterval(20);

        gridLayout9->addWidget(ui_yPosCh2, 1, 2, 1, 1);

        PixmapLabel1_2_2 = new QLabel(GroupBox3);
        PixmapLabel1_2_2->setObjectName(QString::fromUtf8("PixmapLabel1_2_2"));
        PixmapLabel1_2_2->setPixmap(qt_get_icon(image4_ID));
        PixmapLabel1_2_2->setScaledContents(false);
        PixmapLabel1_2_2->setAlignment(Qt::AlignCenter);
        PixmapLabel1_2_2->setWordWrap(false);

        gridLayout9->addWidget(PixmapLabel1_2_2, 0, 0, 1, 1);


        gridLayout7->addLayout(gridLayout9, 0, 1, 3, 1);


        hboxLayout2->addWidget(GroupBox3);

        ui_mathGroup = new Q3ButtonGroup(UIMainWid);
        ui_mathGroup->setObjectName(QString::fromUtf8("ui_mathGroup"));
        sizePolicy7.setHeightForWidth(ui_mathGroup->sizePolicy().hasHeightForWidth());
        ui_mathGroup->setSizePolicy(sizePolicy7);
        ui_mathGroup->setColumnLayout(0, Qt::Vertical);
        ui_mathGroup->layout()->setSpacing(5);
        ui_mathGroup->layout()->setContentsMargins(10, 10, 10, 10);
        hboxLayout3 = new QHBoxLayout();
        QBoxLayout *boxlayout7 = qobject_cast<QBoxLayout *>(ui_mathGroup->layout());
        if (boxlayout7)
            boxlayout7->addLayout(hboxLayout3);
        hboxLayout3->setAlignment(Qt::AlignTop);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        vboxLayout6 = new QVBoxLayout();
        vboxLayout6->setSpacing(6);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        ui_mathModeGroup = new Q3ButtonGroup(ui_mathGroup);
        ui_mathModeGroup->setObjectName(QString::fromUtf8("ui_mathModeGroup"));
        ui_mathModeGroup->setFrameShape(Q3GroupBox::NoFrame);
        ui_mathModeGroup->setExclusive(true);
        ui_mathModeGroup->setColumnLayout(0, Qt::Vertical);
        ui_mathModeGroup->layout()->setSpacing(0);
        ui_mathModeGroup->layout()->setContentsMargins(0, 0, 0, 0);
        vboxLayout7 = new QVBoxLayout();
        QBoxLayout *boxlayout8 = qobject_cast<QBoxLayout *>(ui_mathModeGroup->layout());
        if (boxlayout8)
            boxlayout8->addLayout(vboxLayout7);
        vboxLayout7->setAlignment(Qt::AlignTop);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        ui_mathOff = new QToolButton(ui_mathModeGroup);
        ui_mathOff->setObjectName(QString::fromUtf8("ui_mathOff"));
        ui_mathOff->setCheckable(true);
        ui_mathOff->setChecked(true);

        vboxLayout7->addWidget(ui_mathOff);

        ui_mathAdd = new QToolButton(ui_mathModeGroup);
        ui_mathAdd->setObjectName(QString::fromUtf8("ui_mathAdd"));
        ui_mathAdd->setCheckable(true);

        vboxLayout7->addWidget(ui_mathAdd);

        ui_mathSub = new QToolButton(ui_mathModeGroup);
        ui_mathSub->setObjectName(QString::fromUtf8("ui_mathSub"));
        ui_mathSub->setCheckable(true);

        vboxLayout7->addWidget(ui_mathSub);

        ui_mathMagniture = new QToolButton(ui_mathModeGroup);
        ui_mathMagniture->setObjectName(QString::fromUtf8("ui_mathMagniture"));
        ui_mathMagniture->setCheckable(true);
        ui_mathModeGroup->insert(ui_mathMagniture, 3);

        vboxLayout7->addWidget(ui_mathMagniture);


        vboxLayout6->addWidget(ui_mathModeGroup);

        Spacer10 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout6->addItem(Spacer10);

        gridLayout10 = new QGridLayout();
        gridLayout10->setSpacing(0);
        gridLayout10->setContentsMargins(0, 0, 0, 0);
        gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
        ui_absCh2 = new QToolButton(ui_mathGroup);
        ui_absCh2->setObjectName(QString::fromUtf8("ui_absCh2"));
        ui_absCh2->setCheckable(true);

        gridLayout10->addWidget(ui_absCh2, 1, 1, 1, 1);

        ui_invCh1 = new QToolButton(ui_mathGroup);
        ui_invCh1->setObjectName(QString::fromUtf8("ui_invCh1"));
        ui_invCh1->setCheckable(true);

        gridLayout10->addWidget(ui_invCh1, 0, 0, 1, 1);

        ui_invCh2 = new QToolButton(ui_mathGroup);
        ui_invCh2->setObjectName(QString::fromUtf8("ui_invCh2"));
        ui_invCh2->setCheckable(true);

        gridLayout10->addWidget(ui_invCh2, 0, 1, 1, 1);

        ui_absCh1 = new QToolButton(ui_mathGroup);
        ui_absCh1->setObjectName(QString::fromUtf8("ui_absCh1"));
        ui_absCh1->setCheckable(true);

        gridLayout10->addWidget(ui_absCh1, 1, 0, 1, 1);


        vboxLayout6->addLayout(gridLayout10);


        hboxLayout3->addLayout(vboxLayout6);

        gridLayout11 = new QGridLayout();
        gridLayout11->setSpacing(5);
        gridLayout11->setContentsMargins(0, 0, 0, 0);
        gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
        ui_yPosMath = new QSlider(ui_mathGroup);
        ui_yPosMath->setObjectName(QString::fromUtf8("ui_yPosMath"));
        sizePolicy.setHeightForWidth(ui_yPosMath->sizePolicy().hasHeightForWidth());
        ui_yPosMath->setSizePolicy(sizePolicy);
        ui_yPosMath->setMinimum(-300);
        ui_yPosMath->setMaximum(300);
        ui_yPosMath->setPageStep(1);
        ui_yPosMath->setValue(0);
        ui_yPosMath->setOrientation(Qt::Vertical);
        ui_yPosMath->setTickPosition(QSlider::NoTicks);
        ui_yPosMath->setTickInterval(20);

        gridLayout11->addWidget(ui_yPosMath, 1, 1, 1, 1);

        ui_stretchMath = new QSlider(ui_mathGroup);
        ui_stretchMath->setObjectName(QString::fromUtf8("ui_stretchMath"));
        sizePolicy.setHeightForWidth(ui_stretchMath->sizePolicy().hasHeightForWidth());
        ui_stretchMath->setSizePolicy(sizePolicy);
        ui_stretchMath->setMinimum(-100);
        ui_stretchMath->setMaximum(100);
        ui_stretchMath->setPageStep(1);
        ui_stretchMath->setOrientation(Qt::Vertical);
        ui_stretchMath->setTickPosition(QSlider::NoTicks);
        ui_stretchMath->setTickInterval(10);

        gridLayout11->addWidget(ui_stretchMath, 1, 0, 1, 1);

        ui_centerMath = new QToolButton(ui_mathGroup);
        ui_centerMath->setObjectName(QString::fromUtf8("ui_centerMath"));
        ui_centerMath->setEnabled(false);
        ui_centerMath->setIcon(icon1);

        gridLayout11->addWidget(ui_centerMath, 2, 1, 1, 1);

        PixmapLabel1_2_2_2 = new QLabel(ui_mathGroup);
        PixmapLabel1_2_2_2->setObjectName(QString::fromUtf8("PixmapLabel1_2_2_2"));
        PixmapLabel1_2_2_2->setPixmap(qt_get_icon(image4_ID));
        PixmapLabel1_2_2_2->setScaledContents(false);
        PixmapLabel1_2_2_2->setAlignment(Qt::AlignCenter);
        PixmapLabel1_2_2_2->setWordWrap(false);

        gridLayout11->addWidget(PixmapLabel1_2_2_2, 0, 0, 1, 1);

        ui_resetStretchMath = new QToolButton(ui_mathGroup);
        ui_resetStretchMath->setObjectName(QString::fromUtf8("ui_resetStretchMath"));
        ui_resetStretchMath->setEnabled(false);
        ui_resetStretchMath->setIcon(icon1);

        gridLayout11->addWidget(ui_resetStretchMath, 2, 0, 1, 1);

        PixmapLabel1_3_2 = new QLabel(ui_mathGroup);
        PixmapLabel1_3_2->setObjectName(QString::fromUtf8("PixmapLabel1_3_2"));
        PixmapLabel1_3_2->setPixmap(qt_get_icon(image1_ID));
        PixmapLabel1_3_2->setScaledContents(false);
        PixmapLabel1_3_2->setAlignment(Qt::AlignCenter);
        PixmapLabel1_3_2->setWordWrap(false);

        gridLayout11->addWidget(PixmapLabel1_3_2, 0, 1, 1, 1);


        hboxLayout3->addLayout(gridLayout11);


        hboxLayout2->addWidget(ui_mathGroup);

        Spacer11 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(Spacer11);

        vboxLayout8 = new QVBoxLayout();
        vboxLayout8->setSpacing(5);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        GroupBox5 = new Q3GroupBox(UIMainWid);
        GroupBox5->setObjectName(QString::fromUtf8("GroupBox5"));
        QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(5));
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(GroupBox5->sizePolicy().hasHeightForWidth());
        GroupBox5->setSizePolicy(sizePolicy9);
        GroupBox5->setColumnLayout(0, Qt::Vertical);
        GroupBox5->layout()->setSpacing(5);
        GroupBox5->layout()->setContentsMargins(10, 10, 10, 10);
        vboxLayout9 = new QVBoxLayout();
        QBoxLayout *boxlayout9 = qobject_cast<QBoxLayout *>(GroupBox5->layout());
        if (boxlayout9)
            boxlayout9->addLayout(vboxLayout9);
        vboxLayout9->setAlignment(Qt::AlignTop);
        vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
        ui_modeGroup = new Q3ButtonGroup(GroupBox5);
        ui_modeGroup->setObjectName(QString::fromUtf8("ui_modeGroup"));
        QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(ui_modeGroup->sizePolicy().hasHeightForWidth());
        ui_modeGroup->setSizePolicy(sizePolicy10);
        ui_modeGroup->setFrameShape(Q3GroupBox::NoFrame);
        ui_modeGroup->setExclusive(true);
        ui_modeGroup->setColumnLayout(0, Qt::Vertical);
        ui_modeGroup->layout()->setSpacing(0);
        ui_modeGroup->layout()->setContentsMargins(0, 0, 0, 0);
        hboxLayout4 = new QHBoxLayout();
        QBoxLayout *boxlayout10 = qobject_cast<QBoxLayout *>(ui_modeGroup->layout());
        if (boxlayout10)
            boxlayout10->addLayout(hboxLayout4);
        hboxLayout4->setAlignment(Qt::AlignTop);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        ui_dso = new QToolButton(ui_modeGroup);
        ui_dso->setObjectName(QString::fromUtf8("ui_dso"));
        ui_dso->setCheckable(true);
        ui_dso->setChecked(true);

        hboxLayout4->addWidget(ui_dso);

        ui_xy = new QToolButton(ui_modeGroup);
        ui_xy->setObjectName(QString::fromUtf8("ui_xy"));
        ui_xy->setCheckable(true);

        hboxLayout4->addWidget(ui_xy);

        ui_fft = new QToolButton(ui_modeGroup);
        ui_fft->setObjectName(QString::fromUtf8("ui_fft"));
        ui_fft->setEnabled(true);
        ui_fft->setCheckable(true);

        hboxLayout4->addWidget(ui_fft);


        vboxLayout9->addWidget(ui_modeGroup);

        ButtonGroup41 = new Q3ButtonGroup(GroupBox5);
        ButtonGroup41->setObjectName(QString::fromUtf8("ButtonGroup41"));
        sizePolicy3.setHeightForWidth(ButtonGroup41->sizePolicy().hasHeightForWidth());
        ButtonGroup41->setSizePolicy(sizePolicy3);
        ButtonGroup41->setFrameShape(Q3GroupBox::NoFrame);
        ButtonGroup41->setColumnLayout(0, Qt::Vertical);
        ButtonGroup41->layout()->setSpacing(0);
        ButtonGroup41->layout()->setContentsMargins(0, 0, 0, 0);
        hboxLayout5 = new QHBoxLayout();
        QBoxLayout *boxlayout11 = qobject_cast<QBoxLayout *>(ButtonGroup41->layout());
        if (boxlayout11)
            boxlayout11->addLayout(hboxLayout5);
        hboxLayout5->setAlignment(Qt::AlignTop);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        ui_continuous = new QToolButton(ButtonGroup41);
        ui_continuous->setObjectName(QString::fromUtf8("ui_continuous"));
        QPalette palette;
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(238, 238, 238));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(246, 246, 246));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(119, 119, 119));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(158, 158, 158));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(238, 238, 238));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(119, 119, 119));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(158, 158, 158));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(238, 238, 238));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(119, 119, 119));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(158, 158, 158));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        ui_continuous->setPalette(palette);
        ui_continuous->setCheckable(true);

        hboxLayout5->addWidget(ui_continuous);

        ui_single = new QToolButton(ButtonGroup41);
        ui_single->setObjectName(QString::fromUtf8("ui_single"));
        QPalette palette1;
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(238, 238, 238));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(246, 246, 246));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(119, 119, 119));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(158, 158, 158));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(238, 238, 238));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(119, 119, 119));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(158, 158, 158));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(238, 238, 238));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(119, 119, 119));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(158, 158, 158));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        ui_single->setPalette(palette1);
        ui_single->setCheckable(false);

        hboxLayout5->addWidget(ui_single);


        vboxLayout9->addWidget(ButtonGroup41);


        vboxLayout8->addWidget(GroupBox5);

        ui_triggerGroup = new Q3GroupBox(UIMainWid);
        ui_triggerGroup->setObjectName(QString::fromUtf8("ui_triggerGroup"));
        sizePolicy9.setHeightForWidth(ui_triggerGroup->sizePolicy().hasHeightForWidth());
        ui_triggerGroup->setSizePolicy(sizePolicy9);
        ui_triggerGroup->setColumnLayout(0, Qt::Vertical);
        ui_triggerGroup->layout()->setSpacing(5);
        ui_triggerGroup->layout()->setContentsMargins(10, 10, 10, 10);
        vboxLayout10 = new QVBoxLayout();
        QBoxLayout *boxlayout12 = qobject_cast<QBoxLayout *>(ui_triggerGroup->layout());
        if (boxlayout12)
            boxlayout12->addLayout(vboxLayout10);
        vboxLayout10->setAlignment(Qt::AlignTop);
        vboxLayout10->setObjectName(QString::fromUtf8("vboxLayout10"));
        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(5);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(5);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        ui_trigger = new QToolButton(ui_triggerGroup);
        ui_trigger->setObjectName(QString::fromUtf8("ui_trigger"));
        QSizePolicy sizePolicy11(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(ui_trigger->sizePolicy().hasHeightForWidth());
        ui_trigger->setSizePolicy(sizePolicy11);
        QPalette palette2;
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(238, 238, 238));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(246, 246, 246));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(119, 119, 119));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(158, 158, 158));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(238, 238, 238));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(119, 119, 119));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(158, 158, 158));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(238, 238, 238));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(119, 119, 119));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(158, 158, 158));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        ui_trigger->setPalette(palette2);
        ui_trigger->setCheckable(true);
        const QIcon icon2 = qt_get_icon(image5_ID);
        ui_trigger->setIcon(icon2);

        hboxLayout7->addWidget(ui_trigger);

        ui_triggerStabilizer = new QToolButton(ui_triggerGroup);
        ui_triggerStabilizer->setObjectName(QString::fromUtf8("ui_triggerStabilizer"));
        sizePolicy11.setHeightForWidth(ui_triggerStabilizer->sizePolicy().hasHeightForWidth());
        ui_triggerStabilizer->setSizePolicy(sizePolicy11);
        QPalette palette3;
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(238, 238, 238));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(246, 246, 246));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(119, 119, 119));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(158, 158, 158));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(238, 238, 238));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(119, 119, 119));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(158, 158, 158));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(238, 238, 238));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(119, 119, 119));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(158, 158, 158));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        ui_triggerStabilizer->setPalette(palette3);
        ui_triggerStabilizer->setCheckable(true);
        const QIcon icon3 = qt_get_icon(image6_ID);
        ui_triggerStabilizer->setIcon(icon3);

        hboxLayout7->addWidget(ui_triggerStabilizer);


        hboxLayout6->addLayout(hboxLayout7);

        ButtonGroup32 = new Q3ButtonGroup(ui_triggerGroup);
        ButtonGroup32->setObjectName(QString::fromUtf8("ButtonGroup32"));
        QSizePolicy sizePolicy12(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(ButtonGroup32->sizePolicy().hasHeightForWidth());
        ButtonGroup32->setSizePolicy(sizePolicy12);
        ButtonGroup32->setFrameShape(Q3GroupBox::NoFrame);
        ButtonGroup32->setExclusive(true);
        ButtonGroup32->setColumnLayout(0, Qt::Vertical);
        ButtonGroup32->layout()->setSpacing(0);
        ButtonGroup32->layout()->setContentsMargins(0, 0, 0, 0);
        hboxLayout8 = new QHBoxLayout();
        QBoxLayout *boxlayout13 = qobject_cast<QBoxLayout *>(ButtonGroup32->layout());
        if (boxlayout13)
            boxlayout13->addLayout(hboxLayout8);
        hboxLayout8->setAlignment(Qt::AlignTop);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        ui_raising = new QToolButton(ButtonGroup32);
        ui_raising->setObjectName(QString::fromUtf8("ui_raising"));
        sizePolicy11.setHeightForWidth(ui_raising->sizePolicy().hasHeightForWidth());
        ui_raising->setSizePolicy(sizePolicy11);
        ui_raising->setMinimumSize(QSize(32, 0));
        ui_raising->setCheckable(true);
        ui_raising->setChecked(true);
        const QIcon icon4 = qt_get_icon(image7_ID);
        ui_raising->setIcon(icon4);

        hboxLayout8->addWidget(ui_raising);

        ui_falling = new QToolButton(ButtonGroup32);
        ui_falling->setObjectName(QString::fromUtf8("ui_falling"));
        sizePolicy11.setHeightForWidth(ui_falling->sizePolicy().hasHeightForWidth());
        ui_falling->setSizePolicy(sizePolicy11);
        ui_falling->setMinimumSize(QSize(32, 0));
        ui_falling->setCheckable(true);
        const QIcon icon5 = qt_get_icon(image8_ID);
        ui_falling->setIcon(icon5);

        hboxLayout8->addWidget(ui_falling);


        hboxLayout6->addWidget(ButtonGroup32);


        vboxLayout10->addLayout(hboxLayout6);

        ButtonGroup33 = new Q3ButtonGroup(ui_triggerGroup);
        ButtonGroup33->setObjectName(QString::fromUtf8("ButtonGroup33"));
        sizePolicy7.setHeightForWidth(ButtonGroup33->sizePolicy().hasHeightForWidth());
        ButtonGroup33->setSizePolicy(sizePolicy7);
        ButtonGroup33->setFrameShape(Q3GroupBox::NoFrame);
        ButtonGroup33->setFrameShadow(Q3GroupBox::Sunken);
        ButtonGroup33->setExclusive(true);
        ButtonGroup33->setColumnLayout(0, Qt::Vertical);
        ButtonGroup33->layout()->setSpacing(0);
        ButtonGroup33->layout()->setContentsMargins(0, 0, 0, 0);
        hboxLayout9 = new QHBoxLayout();
        QBoxLayout *boxlayout14 = qobject_cast<QBoxLayout *>(ButtonGroup33->layout());
        if (boxlayout14)
            boxlayout14->addLayout(hboxLayout9);
        hboxLayout9->setAlignment(Qt::AlignTop);
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        ui_ch1Trigger = new QToolButton(ButtonGroup33);
        ui_ch1Trigger->setObjectName(QString::fromUtf8("ui_ch1Trigger"));
        sizePolicy11.setHeightForWidth(ui_ch1Trigger->sizePolicy().hasHeightForWidth());
        ui_ch1Trigger->setSizePolicy(sizePolicy11);
        ui_ch1Trigger->setCheckable(true);
        ui_ch1Trigger->setChecked(true);

        hboxLayout9->addWidget(ui_ch1Trigger);

        ui_ch2Trigger = new QToolButton(ButtonGroup33);
        ui_ch2Trigger->setObjectName(QString::fromUtf8("ui_ch2Trigger"));
        sizePolicy11.setHeightForWidth(ui_ch2Trigger->sizePolicy().hasHeightForWidth());
        ui_ch2Trigger->setSizePolicy(sizePolicy11);
        ui_ch2Trigger->setCheckable(true);

        hboxLayout9->addWidget(ui_ch2Trigger);

        ui_extTrigger = new QToolButton(ButtonGroup33);
        ui_extTrigger->setObjectName(QString::fromUtf8("ui_extTrigger"));
        sizePolicy11.setHeightForWidth(ui_extTrigger->sizePolicy().hasHeightForWidth());
        ui_extTrigger->setSizePolicy(sizePolicy11);
        ui_extTrigger->setCheckable(true);

        hboxLayout9->addWidget(ui_extTrigger);


        vboxLayout10->addWidget(ButtonGroup33);


        vboxLayout8->addWidget(ui_triggerGroup);

        Spacer2_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout8->addItem(Spacer2_2);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setSpacing(5);
        hboxLayout10->setContentsMargins(0, 0, 0, 0);
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        ui_timeMarker = new QToolButton(UIMainWid);
        ui_timeMarker->setObjectName(QString::fromUtf8("ui_timeMarker"));
        QPalette palette4;
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(0, 255, 255));
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(127, 255, 255));
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(63, 255, 255));
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(0, 127, 127));
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(0, 170, 170));
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette4.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(0, 255, 255));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(127, 255, 255));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(38, 255, 255));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(0, 127, 127));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(0, 170, 170));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette4.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(0, 255, 255));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(127, 255, 255));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(38, 255, 255));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(0, 127, 127));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(0, 170, 170));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette4.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        ui_timeMarker->setPalette(palette4);
        ui_timeMarker->setCheckable(true);
        const QIcon icon6 = qt_get_icon(image9_ID);
        ui_timeMarker->setIcon(icon6);

        hboxLayout10->addWidget(ui_timeMarker);

        ui_timeMarker2 = new QToolButton(UIMainWid);
        ui_timeMarker2->setObjectName(QString::fromUtf8("ui_timeMarker2"));
        QPalette palette5;
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(0, 255, 255));
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(127, 255, 255));
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(63, 255, 255));
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(0, 127, 127));
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(0, 170, 170));
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette5.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(0, 255, 255));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(127, 255, 255));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(38, 255, 255));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(0, 127, 127));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(0, 170, 170));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette5.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(0, 255, 255));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(127, 255, 255));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(38, 255, 255));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(0, 127, 127));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(0, 170, 170));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette5.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        ui_timeMarker2->setPalette(palette5);
        ui_timeMarker2->setCheckable(true);
        const QIcon icon7 = qt_get_icon(image10_ID);
        ui_timeMarker2->setIcon(icon7);

        hboxLayout10->addWidget(ui_timeMarker2);

        ui_amplitudeMarker = new QToolButton(UIMainWid);
        ui_amplitudeMarker->setObjectName(QString::fromUtf8("ui_amplitudeMarker"));
        QPalette palette6;
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(0, 255, 0));
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(127, 255, 127));
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(63, 255, 63));
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(0, 127, 0));
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(0, 170, 0));
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette6.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(0, 255, 0));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(127, 255, 127));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(38, 255, 38));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(0, 127, 0));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(0, 170, 0));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette6.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(0, 255, 0));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(127, 255, 127));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(38, 255, 38));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(0, 127, 0));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(0, 170, 0));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(220, 220, 220));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 0));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
        palette6.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
        ui_amplitudeMarker->setPalette(palette6);
        ui_amplitudeMarker->setCheckable(true);
        const QIcon icon8 = qt_get_icon(image11_ID);
        ui_amplitudeMarker->setIcon(icon8);

        hboxLayout10->addWidget(ui_amplitudeMarker);


        vboxLayout8->addLayout(hboxLayout10);


        hboxLayout2->addLayout(vboxLayout8);


        vboxLayout->addLayout(hboxLayout2);

        QWidget::setTabOrder(ui_interpolation, ui_fftSize);
        QWidget::setTabOrder(ui_fftSize, ui_freeFftLength);
        QWidget::setTabOrder(ui_freeFftLength, ui_fftType);
        QWidget::setTabOrder(ui_fftType, ui_fftWindow);
        QWidget::setTabOrder(ui_fftWindow, ui_fftDisplayValue);
        QWidget::setTabOrder(ui_fftDisplayValue, ui_fftZoom);
        QWidget::setTabOrder(ui_fftZoom, ui_fftPostMag);
        QWidget::setTabOrder(ui_fftPostMag, ui_fftScale);
        QWidget::setTabOrder(ui_fftScale, ui_triggerLevel);
        QWidget::setTabOrder(ui_triggerLevel, ui_xPos);
        QWidget::setTabOrder(ui_xPos, ui_couplingModeCh1);
        QWidget::setTabOrder(ui_couplingModeCh1, ui_probeCh1);
        QWidget::setTabOrder(ui_probeCh1, ui_stretchCh1);
        QWidget::setTabOrder(ui_stretchCh1, ui_yPosCh1);
        QWidget::setTabOrder(ui_yPosCh1, ui_dcOffsetCh1);
        QWidget::setTabOrder(ui_dcOffsetCh1, ui_couplingModeCh2);
        QWidget::setTabOrder(ui_couplingModeCh2, ui_probeCh2);
        QWidget::setTabOrder(ui_probeCh2, ui_stretchCh2);
        QWidget::setTabOrder(ui_stretchCh2, ui_yPosCh2);
        QWidget::setTabOrder(ui_yPosCh2, ui_dcOffsetCh2);
        QWidget::setTabOrder(ui_dcOffsetCh2, ui_stretchMath);
        QWidget::setTabOrder(ui_stretchMath, ui_yPosMath);

        retranslateUi(UIMainWid);

        ui_interpolation->setCurrentIndex(1);
        ui_fftSize->setCurrentIndex(3);
        ui_fftZoom->setCurrentIndex(1);
        ui_couplingModeCh1->setCurrentIndex(1);
        ui_couplingModeCh2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(UIMainWid);
    } // setupUi

    void retranslateUi(QWidget *UIMainWid)
    {
        UIMainWid->setWindowTitle(QApplication::translate("UIMainWid", "Form1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ui_triggerLevel->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Trigger level", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_triggerLevel->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Here you can adjust the trigger level.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        ui_xPos->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Here you can adjust the X-Position of your display respectively scroll the FFT graph.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        ui_dsoWid->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "<qt><b>Drawing area:</b><p>\n"
"Here youl'll find the oscilloscope output and FFT plots. To init sampling (screen update) you'll have to activate <i>Single shot</i> or <i>Continuous</i> sampling.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_dsoGroup->setTitle(QApplication::translate("UIMainWid", "Timebase", 0, QApplication::UnicodeUTF8));
        ui_dsoDisplayGroup->setTitle(QApplication::translate("UIMainWid", "Display", 0, QApplication::UnicodeUTF8));
        ui_interpolation->clear();
        ui_interpolation->insertItems(0, QStringList()
         << QApplication::translate("UIMainWid", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Linear", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Linear av.", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Sin(x) / x", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        ui_interpolation->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "<qt><b>Interpolation:</b><p>\n"
"<b>Off:</b> Draw point for each sample<br>\n"
"<b>Linear:</b> Connect all points with lines.<br>\n"
"<b>Linear Av.:</b> Connect averaged points from oversampling with lines.<br>\n"
"<b>Sin(x)/x:</b> Perform a Sin(x)/x interpolation between sampling points (undersampling modes only [Red])</qt>", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel1_3->setText(QApplication::translate("UIMainWid", "Interp.:", 0, QApplication::UnicodeUTF8));
        ui_showEnvelope->setText(QApplication::translate("UIMainWid", "Show Envelope", 0, QApplication::UnicodeUTF8));
        ui_resetEnvelope->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_resetEnvelope->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Clear envelope", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_fastAcq->setText(QApplication::translate("UIMainWid", "Fast acquisition", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_fastAcq->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "<qt><b>Fast acquisition</b><p>\n"
"Less data is fetched from the DSO hardware. This increases the screen update rate.</qt>", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_equivalentSampling->setText(QApplication::translate("UIMainWid", "64MHz", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_equivalentSampling->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "<qt><b>Fast acquisition</b><p>\n"
"Less data is fetched from the DSO hardware. This increases the screen update rate.</qt>", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_fftGroup->setTitle(QApplication::translate("UIMainWid", "Frequency range", 0, QApplication::UnicodeUTF8));
        ui_fftParamGroup->setTitle(QApplication::translate("UIMainWid", "FFT", 0, QApplication::UnicodeUTF8));
        TextLabel1_2->setText(QApplication::translate("UIMainWid", "Window:", 0, QApplication::UnicodeUTF8));
        TextLabel3->setText(QApplication::translate("UIMainWid", "Type:", 0, QApplication::UnicodeUTF8));
        TextLabel4->setText(QApplication::translate("UIMainWid", "Size:", 0, QApplication::UnicodeUTF8));
        ui_fftSize->clear();
        ui_fftSize->insertItems(0, QStringList()
         << QApplication::translate("UIMainWid", "128", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "256", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "512", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "1024", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "2048", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "4096", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Free", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        ui_fftSize->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Choose the FFT size here. If <b>Free</b> is selected you can adjust the size in the field below.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_fftType->clear();
        ui_fftType->insertItems(0, QStringList()
         << QApplication::translate("UIMainWid", "Power", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Phase", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        ui_fftType->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Select the FFT type to be either <b>power spectrum</b> or <b>phase spectrum</b>.<p>\n"
"<b>Note:</b> <i>You'll need a stable trigger for the phase spectrum</i>", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_fftWindow->clear();
        ui_fftWindow->insertItems(0, QStringList()
         << QApplication::translate("UIMainWid", "Rectangle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Bartlett", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Bartlett-Hann", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Blackman", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Blackman-Harris", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Gaussian", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Hamming", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Hann", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Welch", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Kaiser-Bessel", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Flat-Top", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        ui_fftWindow->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Selects the taper window for the FFT. This reduces the discontinuities at the edges of the sample interval. Most common window types are included. Select the window with the smallest spectral leakage (try and error).<p>\n"
"<b>Note:</b> The taper windows in QtDSO are weighted to compensate the magnitude loss (weighted with 1/constant part of the window function).\n"
"<p>\n"
"<b>Note 2:</b> In some cases it might be best to leave the data alone using a rectangular window. In these cases you might want to adjust the FFT-size manually (making it a multiple of the sampled main period of the signal)", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        ui_freeFftLength->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Here you can enter a value for the FFT size. If you have a periodic input signal this can be used to optimize the display of the spectrum (adjusting the size of the FFT to be a multiple of the signal period).<p>\n"
"<b>Note:</b> If the value entered here is not a power of two, the computation time for the FFT might increase drastically. FFTW does a good job here but can't do magic. If the interface gets sloppy you might want to go back to the predefined values.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_fftDisplayGroup->setTitle(QApplication::translate("UIMainWid", "Display", 0, QApplication::UnicodeUTF8));
        TextLabel2_2->setText(QApplication::translate("UIMainWid", "Mode:", 0, QApplication::UnicodeUTF8));
        ui_fftDisplayValue->clear();
        ui_fftDisplayValue->insertItems(0, QStringList()
         << QApplication::translate("UIMainWid", "Realtime", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Minimum", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Averaged", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Maximum", 0, QApplication::UnicodeUTF8)
        );
        ui_fftZoom->clear();
        ui_fftZoom->insertItems(0, QStringList()
         << QApplication::translate("UIMainWid", "x1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "x2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "x4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "x8", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        ui_fftZoom->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Zoom for frequency scale.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_fftPostMag->clear();
        ui_fftPostMag->insertItems(0, QStringList()
         << QApplication::translate("UIMainWid", "x1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "x2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "x5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "x10", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        ui_fftPostMag->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Select post amplification.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_fftScale->clear();
        ui_fftScale->insertItems(0, QStringList()
         << QApplication::translate("UIMainWid", "Linear", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "Logarithmic", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        ui_fftScale->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Linear or logarithmic frequency scale.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel1->setText(QApplication::translate("UIMainWid", "Zoom:", 0, QApplication::UnicodeUTF8));
        TextLabel2->setText(QApplication::translate("UIMainWid", "Ampl.:", 0, QApplication::UnicodeUTF8));
        TextLabel5->setText(QApplication::translate("UIMainWid", "Scale:", 0, QApplication::UnicodeUTF8));
        ui_fftShowPeaks->setText(QApplication::translate("UIMainWid", "Show peak frequency", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_fftShowPeaks->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Select if you want to see the frequency values of the peaks in the power spectrum.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_resetFftDisplay->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_resetFftDisplay->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Reset display", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_resetFftDisplay->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Click to reset the display. This applies to the <b>Minimum</b>, <b>Maximum</b> and <b>Averaged</b> display.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        GroupBox2->setTitle(QApplication::translate("UIMainWid", "Channel 1", 0, QApplication::UnicodeUTF8));
        ui_probeCh1->clear();
        ui_probeCh1->insertItems(0, QStringList()
         << QApplication::translate("UIMainWid", "x1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "x10", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        ui_probeCh1->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Select probe Ch1", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_couplingModeCh1->clear();
        ui_couplingModeCh1->insertItems(0, QStringList()
         << QApplication::translate("UIMainWid", "DC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "GND", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "AC", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        ui_couplingModeCh1->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Input mode Ch1", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_ch1Enable->setText(QApplication::translate("UIMainWid", "Ch A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ui_ch1Enable->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Click to enable channel 1", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ui_yPosCh1->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Y-Position", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_yPosCh1->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Here you can adjust the y-position of channel 1. Click button below to center.<p>\n"
"<b>Note:</b> The position is varied by the software. This is different from the physical offset setting at your scope which might have a big impact on the measurable dynamics of your signal. If measuring AC signals it is recommended to center the scope line with the hardware settings (grounded input) and use this slider to change position. The more bits you use, the better your FFT.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        ui_stretchCh1->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Stretch", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_stretchCh1->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Here you can scale channel 1 in magnitude. Click button below to reset.<p>\n"
"<b>Note:</b> This is a software scaling It will not increase the measurable dynamics of your signal but is very usefull to improve the display of weak signals and for raise time measurements. Range is 0.5 ... 2.0.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_dcLabel1->setText(QString());
        ui_centerDcCh1->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_centerDcCh1->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Center", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_centerCh1->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_centerCh1->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Center", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_resetStretchCh1->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_resetStretchCh1->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Reset stretch", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ui_dcOffsetCh1->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "DC-Offset", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_dcOffsetCh1->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Here you can adjust the DC offset for channel 1. This is a hardware setting of your scope.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        GroupBox3->setTitle(QApplication::translate("UIMainWid", "Channel 2", 0, QApplication::UnicodeUTF8));
        ui_ch2Enable->setText(QApplication::translate("UIMainWid", "Ch B", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ui_ch2Enable->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Click to enable channel 2", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_couplingModeCh2->clear();
        ui_couplingModeCh2->insertItems(0, QStringList()
         << QApplication::translate("UIMainWid", "DC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "GND", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "AC", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        ui_couplingModeCh2->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Input mode Ch2", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_probeCh2->clear();
        ui_probeCh2->insertItems(0, QStringList()
         << QApplication::translate("UIMainWid", "x1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIMainWid", "x10", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        ui_probeCh2->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Select probe Ch2", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_dcLabel2->setText(QString());
        ui_resetStretchCh2->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_resetStretchCh2->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Reset stretch", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ui_dcOffsetCh2->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "DC-Offset", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_dcOffsetCh2->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Here you can adjust the DC offset for channel 2. This is a hardware setting of your scope.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_centerCh2->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_centerCh2->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Center", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_centerDcCh2->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_centerDcCh2->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Center", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ui_stretchCh2->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Stretch", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_stretchCh2->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Here you can scale channel 2 in magnitude. Click button below to reset.<p>\n"
"<b>Note:</b> This is a software scaling It will not increase the measurable dynamics of your signal but is very usefull to improve the display of weak signals and for raise time measurements. The range is 0.5 ... 2.0.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        ui_yPosCh2->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Y-Position", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_yPosCh2->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Here you can adjust the y-position of channel 2. Click button below to center.<p>\n"
"<b>Note:</b> The position is varied by the software. This is different from the physical offset setting at your scope which might have a big impact on the measurable dynamics of your signal. If measuring AC signals it is recommended to center the scope line with the hardware settings (grounded input) and use this slider to change position. The more bits you use, the better your FFT.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_mathGroup->setTitle(QApplication::translate("UIMainWid", "Math", 0, QApplication::UnicodeUTF8));
        ui_mathModeGroup->setTitle(QString());
        ui_mathOff->setText(QApplication::translate("UIMainWid", "Off", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ui_mathOff->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "No math", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_mathOff->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Math functions off.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_mathAdd->setText(QApplication::translate("UIMainWid", "A + B", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ui_mathAdd->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Channel 1 + Channel 2", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_mathSub->setText(QApplication::translate("UIMainWid", "A - B", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ui_mathSub->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Channel 1 - Channel 2", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_mathMagniture->setText(QApplication::translate("UIMainWid", "Sqrt(A^2+B^2)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ui_mathMagniture->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Channel 1 - Channel 2", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_absCh2->setText(QApplication::translate("UIMainWid", "Abs B", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ui_absCh2->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Absolute value channel 2", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_absCh2->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Compute absolute value of channel 2.<p>\n"
"<b>Note:</b> <i>This applies to the AC component of the signal only</i>", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_invCh1->setText(QApplication::translate("UIMainWid", "Inv A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ui_invCh1->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Invert channel 1", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_invCh1->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Invert channel 1.<p>\n"
"<b>Note:</b> <i>This applies to the AC component of the signal only</i>", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_invCh2->setText(QApplication::translate("UIMainWid", "Inv B", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ui_invCh2->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Invert channel 2", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_invCh2->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Invert channel 2.<p>\n"
"<b>Note:</b> <i>This applies to the AC component of the signal only</i>", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_absCh1->setText(QApplication::translate("UIMainWid", "Abs A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ui_absCh1->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Absolute value channel 1", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_absCh1->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Compute absolute value of channel 1.<p>\n"
"<b>Note:</b> <i>This applies to the AC component of the signal only</i>", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        ui_yPosMath->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Y-Position", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ui_stretchMath->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Scale", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_stretchMath->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Scale math channel in magnitude from 0.5 ... 2.0. Click button below to reset.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_centerMath->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_centerMath->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Reset math position", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_resetStretchMath->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_resetStretchMath->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Reset math scale", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        GroupBox5->setTitle(QApplication::translate("UIMainWid", "Mode", 0, QApplication::UnicodeUTF8));
        ui_modeGroup->setTitle(QString());
        ui_dso->setText(QApplication::translate("UIMainWid", "DSO", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_dso->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Oscilloscope mode", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_xy->setText(QApplication::translate("UIMainWid", "XY", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_xy->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "XY-Oscilloscope mode.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_fft->setText(QApplication::translate("UIMainWid", "FFT", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_fft->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Spectrum analyzer mode.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ButtonGroup41->setTitle(QString());
        ui_continuous->setText(QApplication::translate("UIMainWid", "Run", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_continuous->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Select here if you want the scope (or FFT) to be updated continuously. The framerate can be selected in the <b>Display</b> menu of the menubar. To freeze the display deselect again. You can use <b>Single Shot</b> below to grab a new image.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_single->setText(QApplication::translate("UIMainWid", "Single", 0, QApplication::UnicodeUTF8));
        ui_triggerGroup->setTitle(QApplication::translate("UIMainWid", "Trigger", 0, QApplication::UnicodeUTF8));
        ui_trigger->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_trigger->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Trigger On/Off", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_trigger->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Select between <b>freerun mode</b> and <b>triggered mode</b>.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_triggerStabilizer->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_triggerStabilizer->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Trigger stabilzation 0n/Off", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_triggerStabilizer->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Stabilize trigger for interpolating modes.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ButtonGroup32->setTitle(QString());
        ui_raising->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_raising->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Raising edge", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_falling->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_falling->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Falling edge", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ButtonGroup33->setTitle(QString());
        ui_ch1Trigger->setText(QApplication::translate("UIMainWid", "A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ui_ch1Trigger->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Trigger channel 1", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_ch1Trigger->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Trigger source is channel 1.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_ch2Trigger->setText(QApplication::translate("UIMainWid", "B", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ui_ch2Trigger->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Trigger channel 2", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_ch2Trigger->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Trigger source is channel 2.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_extTrigger->setText(QApplication::translate("UIMainWid", "Ext", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ui_extTrigger->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "External trigger", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_extTrigger->setProperty("whatsThis", QVariant(QApplication::translate("UIMainWid", "Trigger source is external input.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_timeMarker->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_timeMarker->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Time markers", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_timeMarker2->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_timeMarker2->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Time & ratio markers", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        ui_amplitudeMarker->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_amplitudeMarker->setProperty("toolTip", QVariant(QApplication::translate("UIMainWid", "Amplitude markers", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        image1_ID,
        image2_ID,
        image3_ID,
        image4_ID,
        image5_ID,
        image6_ID,
        image7_ID,
        image8_ID,
        image9_ID,
        image10_ID,
        image11_ID,
        image12_ID,
        unknown_ID
    };
    static QPixmap qt_get_icon(IconID id)
    {
    static const unsigned char image0_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x1f, 0xf3, 0xff, 0x61, 0x00, 0x00, 0x00,
    0x5e, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xed, 0x93, 0x41, 0x0a, 0x80,
    0x30, 0x0c, 0x04, 0x5d, 0xf1, 0x55, 0xfb, 0x7f, 0xe6, 0x5b, 0x7a, 0x2a,
    0xc4, 0x92, 0x45, 0xc5, 0x9b, 0x38, 0x97, 0xb4, 0xa1, 0xc9, 0xa6, 0x21,
    0x11, 0xb0, 0x74, 0xd8, 0xde, 0xeb, 0x1d, 0x50, 0xf7, 0x6e, 0x4b, 0x81,
    0x73, 0x40, 0xf2, 0x0b, 0x38, 0xa9, 0x25, 0xa5, 0xae, 0x32, 0x40, 0xb1,
    0x82, 0xbb, 0xa8, 0xf6, 0xc0, 0xf6, 0x0e, 0x68, 0xd8, 0xea, 0x4b, 0xdf,
    0x58, 0x9f, 0xa8, 0x75, 0xfc, 0x09, 0xbe, 0x9b, 0xa0, 0x0e, 0x4a, 0x3a,
    0x0f, 0x34, 0x6f, 0xe3, 0xd5, 0x28, 0xb7, 0xcb, 0xf4, 0x86, 0x03, 0x1c,
    0x44, 0x3c, 0x60, 0x0c, 0xf9, 0x5d, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x49,
    0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    static const unsigned char image1_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x56, 0x75, 0x5c, 0xe7, 0x00, 0x00, 0x00,
    0x49, 0x49, 0x44, 0x41, 0x54, 0x28, 0x91, 0xb5, 0x50, 0x41, 0x0e, 0x00,
    0x20, 0x08, 0xc2, 0x9e, 0xe5, 0xff, 0xc7, 0xb7, 0xea, 0x5a, 0x44, 0xf3,
    0xe0, 0xe2, 0xe4, 0x10, 0x54, 0x0c, 0x92, 0x50, 0x64, 0xe6, 0x04, 0x00,
    0x92, 0xa1, 0xbd, 0xf1, 0x12, 0x6b, 0x6d, 0x0d, 0x4e, 0xa0, 0xdc, 0xb5,
    0xa1, 0x42, 0xb4, 0x33, 0x54, 0xf8, 0x6f, 0x38, 0x32, 0xb8, 0x2f, 0x01,
    0x67, 0x96, 0xde, 0x49, 0xee, 0x2b, 0xca, 0x5d, 0x1b, 0x76, 0x81, 0x1b,
    0xb0, 0x00, 0x69, 0xe6, 0x23, 0x0c, 0x36, 0x9f, 0x79, 0x38, 0x00, 0x00,
    0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    static const unsigned char image2_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x56, 0x75, 0x5c, 0xe7, 0x00, 0x00, 0x00,
    0x4f, 0x49, 0x44, 0x41, 0x54, 0x28, 0x91, 0xb5, 0x52, 0xc9, 0x0d, 0xc0,
    0x30, 0x08, 0x33, 0x28, 0x53, 0xb1, 0xbf, 0xbc, 0x96, 0xfb, 0x29, 0x52,
    0x84, 0x92, 0x26, 0x3c, 0xea, 0x97, 0xb1, 0xb8, 0xc1, 0x48, 0xa2, 0x03,
    0x03, 0xa0, 0x2a, 0x92, 0xb4, 0xe4, 0x11, 0xa1, 0xaa, 0x0b, 0x80, 0xde,
    0x4a, 0x5a, 0xd9, 0x33, 0xf7, 0x5d, 0xe6, 0x1d, 0xc6, 0x6d, 0xef, 0x99,
    0xcc, 0x4f, 0x8e, 0x15, 0xff, 0x07, 0x5c, 0xcf, 0x90, 0xeb, 0xf5, 0x95,
    0xf8, 0x85, 0xf6, 0xe1, 0xac, 0xfb, 0x1a, 0x0f, 0x2c, 0xee, 0x2b, 0x4c,
    0x98, 0x89, 0xe3, 0xd6, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44,
    0xae, 0x42, 0x60, 0x82
};

    static const unsigned char image3_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0a,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x8d, 0x32, 0xcf, 0xbd, 0x00, 0x00, 0x00,
    0x4a, 0x49, 0x44, 0x41, 0x54, 0x18, 0x95, 0x8d, 0x90, 0xc1, 0x09, 0x00,
    0x30, 0x08, 0x03, 0xa3, 0x63, 0xb9, 0x3f, 0x59, 0xab, 0xfd, 0x54, 0xb0,
    0xa9, 0x50, 0xf3, 0x92, 0x78, 0x1a, 0xd4, 0x48, 0xa2, 0x2a, 0x22, 0x16,
    0x00, 0x90, 0xb4, 0xea, 0x5b, 0x82, 0x09, 0xa8, 0x72, 0xc0, 0xd5, 0xe8,
    0xa0, 0x0b, 0xd4, 0xc6, 0x13, 0xbd, 0x80, 0x36, 0x52, 0xe5, 0x7f, 0xe4,
    0x6c, 0x9c, 0x5e, 0xed, 0x1d, 0xa4, 0xf5, 0x05, 0x76, 0xef, 0xa9, 0xde,
    0x38, 0x7a, 0x03, 0x48, 0x9a, 0x2b, 0x56, 0x7a, 0x81, 0x78, 0xba, 0x00,
    0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    static const unsigned char image4_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x56, 0x75, 0x5c, 0xe7, 0x00, 0x00, 0x00,
    0x5c, 0x49, 0x44, 0x41, 0x54, 0x28, 0x91, 0x8d, 0x91, 0xc1, 0x0d, 0xc0,
    0x30, 0x08, 0x03, 0x4d, 0xc6, 0x62, 0x7f, 0xdd, 0x5a, 0xed, 0x8b, 0x88,
    0x46, 0x40, 0x7a, 0x4f, 0x84, 0x31, 0x06, 0x03, 0x14, 0xb8, 0xfb, 0x23,
    0x49, 0x80, 0xa9, 0xc1, 0x80, 0xdd, 0x78, 0x52, 0x09, 0xd7, 0xd9, 0x30,
    0x4d, 0x97, 0x24, 0x93, 0x54, 0xae, 0xd1, 0xad, 0xf7, 0x71, 0xf8, 0xc3,
    0x8a, 0x09, 0x39, 0xc7, 0x14, 0x7e, 0x0c, 0x1d, 0x64, 0xe1, 0x8a, 0x42,
    0x2e, 0x76, 0x79, 0xb6, 0x43, 0x45, 0xe5, 0x0a, 0x58, 0x2b, 0xe8, 0x44,
    0xe3, 0x95, 0xae, 0x8f, 0xbb, 0x89, 0x00, 0x7b, 0x01, 0xb5, 0x53, 0x40,
    0xf1, 0x11, 0x51, 0xaf, 0x56, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e,
    0x44, 0xae, 0x42, 0x60, 0x82
};

    static const unsigned char image5_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x56, 0x75, 0x5c, 0xe7, 0x00, 0x00, 0x00,
    0x59, 0x49, 0x44, 0x41, 0x54, 0x28, 0x91, 0xbd, 0x92, 0x51, 0x0a, 0xc0,
    0x30, 0x08, 0x43, 0x4d, 0xd9, 0xa9, 0xbc, 0x3f, 0xb9, 0x56, 0xf6, 0x25,
    0x38, 0x17, 0x4a, 0xf7, 0xb3, 0xfc, 0x49, 0x5e, 0xd4, 0x16, 0x41, 0x32,
    0xba, 0x32, 0x53, 0xbd, 0x26, 0x89, 0x5e, 0xa3, 0x02, 0x13, 0x9c, 0xaa,
    0xe0, 0x3a, 0x81, 0x3b, 0xb3, 0x9c, 0x29, 0x29, 0x24, 0xdf, 0x03, 0x11,
    0xf1, 0x72, 0x0a, 0x06, 0x30, 0x2d, 0x3f, 0x61, 0xa7, 0x1f, 0x02, 0xf3,
    0x9f, 0x77, 0x22, 0x89, 0xcb, 0x19, 0xee, 0xb1, 0x8f, 0x95, 0x4e, 0xa6,
    0x14, 0x83, 0xaf, 0xa7, 0x71, 0x03, 0xe9, 0xb6, 0x29, 0xaf, 0x1d, 0x0b,
    0xf3, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42,
    0x60, 0x82
};

    static const unsigned char image6_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0c,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x6b, 0xe7, 0x3d, 0x81, 0x00, 0x00, 0x00,
    0x63, 0x49, 0x44, 0x41, 0x54, 0x28, 0x91, 0xcd, 0x92, 0x51, 0x0a, 0xc0,
    0x30, 0x08, 0x43, 0xb5, 0xc7, 0xca, 0xfd, 0xc9, 0xb5, 0xdc, 0xd7, 0x46,
    0x56, 0x8c, 0x50, 0xf6, 0xb3, 0x7c, 0x55, 0x2b, 0x79, 0xa9, 0x34, 0x49,
    0x86, 0x0a, 0x40, 0x91, 0xcc, 0x68, 0xd4, 0xdd, 0xad, 0x69, 0x00, 0x40,
    0x01, 0xa8, 0xbb, 0x26, 0x99, 0x5a, 0xbf, 0x0c, 0x26, 0xb2, 0x6a, 0x37,
    0x59, 0xdd, 0xd0, 0x4e, 0x71, 0xbd, 0xc7, 0x40, 0xe9, 0x2e, 0x89, 0x92,
    0xf5, 0xdc, 0x26, 0x38, 0xd1, 0x4f, 0x0c, 0xdc, 0xfb, 0x54, 0x6e, 0x4f,
    0x6d, 0x02, 0xb7, 0x44, 0x9b, 0x60, 0x22, 0x4f, 0x49, 0x22, 0x22, 0xf2,
    0xeb, 0x57, 0xbe, 0x00, 0x81, 0xf0, 0x58, 0x15, 0x99, 0x51, 0xdc, 0x55,
    0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    static const unsigned char image7_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0c,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x6b, 0xe7, 0x3d, 0x81, 0x00, 0x00, 0x00,
    0x51, 0x49, 0x44, 0x41, 0x54, 0x28, 0x91, 0xa5, 0x92, 0x51, 0x0a, 0x00,
    0x20, 0x08, 0x43, 0x67, 0x74, 0x2a, 0xef, 0xcf, 0xae, 0x55, 0x5f, 0x41,
    0x44, 0x2b, 0xcb, 0x7d, 0x8a, 0x6f, 0x1b, 0xa2, 0x91, 0x44, 0x46, 0x35,
    0xba, 0xe8, 0xee, 0x6d, 0x37, 0x2f, 0x19, 0x38, 0xd4, 0x60, 0x86, 0x49,
    0xda, 0x57, 0x03, 0x05, 0x5f, 0x0d, 0x46, 0xba, 0x82, 0x9f, 0x1a, 0x3c,
    0x1b, 0x44, 0xd2, 0xa5, 0xc1, 0xe9, 0xea, 0xab, 0x0c, 0x80, 0x5c, 0xbe,
    0xa5, 0xcb, 0x06, 0x51, 0x18, 0x00, 0x2c, 0xfb, 0xca, 0x1d, 0xf0, 0x4b,
    0x1d, 0xbd, 0xf0, 0x05, 0x2f, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45,
    0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    static const unsigned char image8_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0c,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x6b, 0xe7, 0x3d, 0x81, 0x00, 0x00, 0x00,
    0x50, 0x49, 0x44, 0x41, 0x54, 0x28, 0x91, 0xa5, 0x91, 0xc1, 0x09, 0x00,
    0x30, 0x08, 0x03, 0xb5, 0x63, 0xb9, 0x3f, 0x59, 0xab, 0xfd, 0x0a, 0x8d,
    0x1a, 0xd0, 0x6f, 0xc8, 0x71, 0x41, 0x07, 0x60, 0x9b, 0x73, 0x33, 0xbb,
    0x2c, 0x00, 0xe0, 0x0a, 0xe0, 0x54, 0x41, 0x44, 0x50, 0xf0, 0x67, 0xc0,
    0x26, 0xe4, 0xf2, 0x64, 0x42, 0x0d, 0x54, 0xfd, 0x12, 0x90, 0x21, 0xd3,
    0x94, 0x12, 0xb0, 0x36, 0x50, 0x2d, 0x64, 0x83, 0x0a, 0x42, 0xbf, 0xa0,
    0x96, 0x65, 0x83, 0xee, 0x2b, 0x92, 0x41, 0x77, 0x0f, 0x90, 0xfc, 0x22,
    0x5b, 0x9c, 0xff, 0x5a, 0xcb, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e,
    0x44, 0xae, 0x42, 0x60, 0x82
};

    static const unsigned char image9_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x1f, 0xf3, 0xff, 0x61, 0x00, 0x00, 0x00,
    0x63, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xcd, 0x92, 0x51, 0x0e, 0xc0,
    0x20, 0x08, 0x43, 0x1f, 0x1c, 0x8b, 0xfb, 0x87, 0x6b, 0xb9, 0x9f, 0xb1,
    0x10, 0x87, 0xdb, 0x8c, 0xfb, 0xb0, 0x09, 0x31, 0x11, 0x5a, 0x2c, 0x28,
    0xee, 0xce, 0x0a, 0x14, 0xc0, 0xcc, 0xda, 0x2c, 0x31, 0x38, 0xba, 0xd4,
    0x1e, 0x90, 0x3d, 0x2d, 0x54, 0x82, 0xa3, 0x26, 0x0a, 0xe0, 0xee, 0xf2,
    0x56, 0xd8, 0xe7, 0x2e, 0xce, 0x39, 0x83, 0x16, 0xe7, 0x97, 0xc8, 0x9c,
    0xff, 0xb7, 0x10, 0xcf, 0xcc, 0xb6, 0x9e, 0xee, 0x6f, 0x5b, 0xe8, 0x0b,
    0x32, 0xaa, 0x59, 0x95, 0x16, 0x2a, 0x91, 0x91, 0xf0, 0xa6, 0x1f, 0x69,
    0x06, 0xcb, 0x16, 0x0e, 0x29, 0xf3, 0x4a, 0xfe, 0xb7, 0x58, 0xf4, 0x29,
    0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    static const unsigned char image10_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x1f, 0xf3, 0xff, 0x61, 0x00, 0x00, 0x00,
    0x57, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xcd, 0x52, 0x41, 0x0a, 0x00,
    0x20, 0x08, 0x9b, 0x3e, 0xcb, 0xff, 0xb3, 0x6f, 0xd5, 0xa5, 0xa0, 0x20,
    0x85, 0xb4, 0x43, 0x82, 0x17, 0x37, 0x27, 0x63, 0x0a, 0x49, 0x54, 0x4a,
    0x01, 0xc0, 0xcc, 0x5a, 0x44, 0x3a, 0xe1, 0x73, 0xa6, 0xa5, 0xf3, 0x00,
    0xe4, 0x3f, 0x0b, 0x91, 0xd8, 0x09, 0xdb, 0x2c, 0x4c, 0x02, 0x49, 0x89,
    0x04, 0x36, 0x7c, 0x08, 0xb4, 0x4c, 0x93, 0x7c, 0x9c, 0x42, 0xc6, 0x82,
    0xde, 0x2c, 0xae, 0x1c, 0x37, 0x05, 0x4f, 0xc4, 0xc3, 0x3e, 0x7c, 0xa4,
    0xdb, 0x2a, 0x5b, 0xe8, 0x80, 0xad, 0x51, 0x5d, 0x47, 0xf2, 0x03, 0x8a,
    0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    static const unsigned char image11_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x1f, 0xf3, 0xff, 0x61, 0x00, 0x00, 0x00,
    0x5e, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xc5, 0x93, 0x31, 0x0e, 0x00,
    0x20, 0x08, 0x03, 0xc1, 0x67, 0xf5, 0xff, 0xe9, 0xb7, 0x70, 0xd1, 0xc4,
    0xa1, 0x90, 0x28, 0x83, 0x4c, 0x24, 0xda, 0x4b, 0xa9, 0xe8, 0x24, 0xad,
    0x55, 0x0b, 0x10, 0x66, 0x16, 0x2f, 0xbd, 0x77, 0x1d, 0x8c, 0xea, 0x10,
    0x40, 0x00, 0x88, 0x27, 0xc0, 0x29, 0xac, 0x20, 0x12, 0xa0, 0x04, 0x19,
    0xa4, 0xcc, 0x60, 0x8b, 0x48, 0xfa, 0x95, 0x83, 0x9b, 0xfa, 0x0f, 0x90,
    0x19, 0x64, 0x81, 0xa9, 0x2c, 0xa4, 0x03, 0x75, 0x31, 0x0b, 0x32, 0x1d,
    0xe1, 0x14, 0x54, 0xaf, 0xd0, 0x5e, 0xe5, 0xff, 0x9f, 0x69, 0x02, 0x7a,
    0x10, 0x59, 0x21, 0xca, 0x9f, 0x6d, 0xe9, 0x00, 0x00, 0x00, 0x00, 0x49,
    0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    static const unsigned char image12_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x00,
    0xc7, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xad, 0x55, 0xdb, 0x11, 0x84,
    0x20, 0x0c, 0x4c, 0x18, 0x0b, 0xb8, 0x1a, 0x28, 0xc7, 0x3a, 0xad, 0x81,
    0x12, 0x28, 0xc3, 0x56, 0xf4, 0x2b, 0x37, 0x92, 0xdb, 0x3c, 0xc0, 0xdb,
    0x2f, 0xc7, 0x24, 0xbb, 0x79, 0x01, 0xdc, 0x7b, 0x27, 0x0f, 0x27, 0xed,
    0x17, 0xfa, 0x5f, 0xa9, 0xb1, 0x17, 0xb7, 0xcd, 0x90, 0x21, 0x1f, 0x4b,
    0xa0, 0xac, 0x90, 0x6a, 0x7f, 0x14, 0x53, 0xb4, 0xd3, 0x0c, 0xa9, 0x17,
    0xbb, 0x59, 0x06, 0x81, 0x55, 0x2a, 0xf2, 0x3f, 0x69, 0xbf, 0xc4, 0xff,
    0xa7, 0x15, 0x19, 0xd2, 0xc8, 0xf6, 0x25, 0x46, 0xea, 0x5e, 0xa0, 0x37,
    0x38, 0xb1, 0xc1, 0x8c, 0x33, 0xa4, 0xd1, 0x56, 0xf0, 0xd1, 0x3f, 0x43,
    0xb6, 0x19, 0x52, 0xe4, 0xaf, 0x6d, 0x6e, 0x8f, 0xb3, 0xa4, 0x08, 0xf0,
    0x80, 0x44, 0x84, 0x19, 0xa4, 0x33, 0xd6, 0x48, 0x6d, 0x85, 0x05, 0x2f,
    0xdb, 0xa8, 0x92, 0xa2, 0x95, 0xf5, 0xd4, 0x57, 0x85, 0xcd, 0x8c, 0x51,
    0xa9, 0xd6, 0xde, 0x6a, 0x81, 0x4a, 0x8d, 0x21, 0x31, 0xda, 0x51, 0xf9,
    0x8e, 0x7a, 0x3b, 0x64, 0xec, 0x9d, 0xa0, 0x4a, 0x8d, 0xb5, 0x3d, 0x43,
    0xbe, 0x3c, 0x3c, 0x0b, 0x22, 0xca, 0xcf, 0x17, 0xe4, 0xcd, 0xb5, 0xa9,
    0x31, 0x64, 0x9c, 0xed, 0xdf, 0x34, 0xb1, 0x90, 0xcf, 0x0a, 0xa0, 0x19,
    0xf0, 0x3f, 0x1f, 0xd3, 0xe7, 0x45, 0x7f, 0x03, 0xb5, 0xa6, 0x6c, 0x9e,
    0xd2, 0x6e, 0x86, 0x13, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44,
    0xae, 0x42, 0x60, 0x82
};

    switch (id) {
        case image0_ID:  { QImage img; img.loadFromData(image0_data, sizeof(image0_data), "PNG"); return QPixmap::fromImage(img); }
        case image1_ID:  { QImage img; img.loadFromData(image1_data, sizeof(image1_data), "PNG"); return QPixmap::fromImage(img); }
        case image2_ID:  { QImage img; img.loadFromData(image2_data, sizeof(image2_data), "PNG"); return QPixmap::fromImage(img); }
        case image3_ID:  { QImage img; img.loadFromData(image3_data, sizeof(image3_data), "PNG"); return QPixmap::fromImage(img); }
        case image4_ID:  { QImage img; img.loadFromData(image4_data, sizeof(image4_data), "PNG"); return QPixmap::fromImage(img); }
        case image5_ID:  { QImage img; img.loadFromData(image5_data, sizeof(image5_data), "PNG"); return QPixmap::fromImage(img); }
        case image6_ID:  { QImage img; img.loadFromData(image6_data, sizeof(image6_data), "PNG"); return QPixmap::fromImage(img); }
        case image7_ID:  { QImage img; img.loadFromData(image7_data, sizeof(image7_data), "PNG"); return QPixmap::fromImage(img); }
        case image8_ID:  { QImage img; img.loadFromData(image8_data, sizeof(image8_data), "PNG"); return QPixmap::fromImage(img); }
        case image9_ID:  { QImage img; img.loadFromData(image9_data, sizeof(image9_data), "PNG"); return QPixmap::fromImage(img); }
        case image10_ID:  { QImage img; img.loadFromData(image10_data, sizeof(image10_data), "PNG"); return QPixmap::fromImage(img); }
        case image11_ID:  { QImage img; img.loadFromData(image11_data, sizeof(image11_data), "PNG"); return QPixmap::fromImage(img); }
        case image12_ID:  { QImage img; img.loadFromData(image12_data, sizeof(image12_data), "PNG"); return QPixmap::fromImage(img); }
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class UIMainWid: public Ui_UIMainWid {};
} // namespace Ui

QT_END_NAMESPACE

class UIMainWid : public QWidget, public Ui::UIMainWid
{
    Q_OBJECT

public:
    UIMainWid(QWidget* parent = 0, const char* name = 0, Qt::WindowFlags fl = 0);
    ~UIMainWid();

protected slots:
    virtual void languageChange();

};

#endif // UIMAINWID_H
