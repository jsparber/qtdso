#ifndef UICONVERTERHISTOGRAMDLG_H
#define UICONVERTERHISTOGRAMDLG_H

#include <qvariant.h>


#include <Qt3Support/Q3Frame>
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
#include <QtGui/QVBoxLayout>
#include "converterhistogramwid.h"

QT_BEGIN_NAMESPACE

class Ui_UIConverterHistogramDlg
{
public:
    QHBoxLayout *hboxLayout;
    QGridLayout *gridLayout;
    QPushButton *ui_clear;
    QSpacerItem *spacer1;
    QPushButton *ui_haltContinue;
    Q3Frame *frame3;
    QGridLayout *gridLayout1;
    ConverterHistogramWid *ui_histogram;
    QVBoxLayout *vboxLayout;
    QComboBox *ui_channel;
    QGridLayout *gridLayout2;
    QLabel *ui_minSample;
    QLabel *ui_maxSample;
    QLabel *textLabel1_3_2;
    QLabel *textLabel1_3;
    QLabel *textLabel1_3_2_2;
    QLabel *ui_numSamples;
    QSpacerItem *spacer2;
    QLabel *textLabel1_2_2;
    QLabel *ui_meanSample;
    QLabel *textLabel1;
    QLabel *textLabel1_2;
    QLabel *ui_stdDeviationSample;
    QLabel *ui_time;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacer1_2;
    QPushButton *ui_close;

    void setupUi(QDialog *UIConverterHistogramDlg)
    {
        if (UIConverterHistogramDlg->objectName().isEmpty())
            UIConverterHistogramDlg->setObjectName(QString::fromUtf8("UIConverterHistogramDlg"));
        UIConverterHistogramDlg->resize(406, 271);
        hboxLayout = new QHBoxLayout(UIConverterHistogramDlg);
        hboxLayout->setSpacing(5);
        hboxLayout->setContentsMargins(10, 10, 10, 10);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ui_clear = new QPushButton(UIConverterHistogramDlg);
        ui_clear->setObjectName(QString::fromUtf8("ui_clear"));

        gridLayout->addWidget(ui_clear, 1, 0, 1, 1);

        spacer1 = new QSpacerItem(90, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacer1, 1, 1, 1, 1);

        ui_haltContinue = new QPushButton(UIConverterHistogramDlg);
        ui_haltContinue->setObjectName(QString::fromUtf8("ui_haltContinue"));

        gridLayout->addWidget(ui_haltContinue, 1, 2, 1, 1);

        frame3 = new Q3Frame(UIConverterHistogramDlg);
        frame3->setObjectName(QString::fromUtf8("frame3"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame3->sizePolicy().hasHeightForWidth());
        frame3->setSizePolicy(sizePolicy);
        frame3->setFrameShape(QFrame::WinPanel);
        frame3->setFrameShadow(QFrame::Sunken);
        gridLayout1 = new QGridLayout(frame3);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(2, 2, 2, 2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        ui_histogram = new ConverterHistogramWid(frame3);
        ui_histogram->setObjectName(QString::fromUtf8("ui_histogram"));
        ui_histogram->setMinimumSize(QSize(256, 200));
        ui_histogram->setMaximumSize(QSize(256, 200));

        gridLayout1->addWidget(ui_histogram, 0, 0, 1, 1);


        gridLayout->addWidget(frame3, 0, 0, 1, 3);


        hboxLayout->addLayout(gridLayout);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        ui_channel = new QComboBox(UIConverterHistogramDlg);
        ui_channel->setObjectName(QString::fromUtf8("ui_channel"));

        vboxLayout->addWidget(ui_channel);

        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(4);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        ui_minSample = new QLabel(UIConverterHistogramDlg);
        ui_minSample->setObjectName(QString::fromUtf8("ui_minSample"));
        ui_minSample->setWordWrap(false);

        gridLayout2->addWidget(ui_minSample, 1, 1, 1, 1);

        ui_maxSample = new QLabel(UIConverterHistogramDlg);
        ui_maxSample->setObjectName(QString::fromUtf8("ui_maxSample"));
        ui_maxSample->setWordWrap(false);

        gridLayout2->addWidget(ui_maxSample, 2, 1, 1, 1);

        textLabel1_3_2 = new QLabel(UIConverterHistogramDlg);
        textLabel1_3_2->setObjectName(QString::fromUtf8("textLabel1_3_2"));
        textLabel1_3_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        textLabel1_3_2->setWordWrap(false);

        gridLayout2->addWidget(textLabel1_3_2, 4, 0, 1, 1);

        textLabel1_3 = new QLabel(UIConverterHistogramDlg);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        textLabel1_3->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        textLabel1_3->setWordWrap(false);

        gridLayout2->addWidget(textLabel1_3, 3, 0, 1, 1);

        textLabel1_3_2_2 = new QLabel(UIConverterHistogramDlg);
        textLabel1_3_2_2->setObjectName(QString::fromUtf8("textLabel1_3_2_2"));
        textLabel1_3_2_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        textLabel1_3_2_2->setWordWrap(false);

        gridLayout2->addWidget(textLabel1_3_2_2, 6, 0, 1, 1);

        ui_numSamples = new QLabel(UIConverterHistogramDlg);
        ui_numSamples->setObjectName(QString::fromUtf8("ui_numSamples"));
        ui_numSamples->setWordWrap(false);

        gridLayout2->addWidget(ui_numSamples, 0, 1, 1, 1);

        spacer2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacer2, 5, 0, 1, 2);

        textLabel1_2_2 = new QLabel(UIConverterHistogramDlg);
        textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));
        textLabel1_2_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        textLabel1_2_2->setWordWrap(false);

        gridLayout2->addWidget(textLabel1_2_2, 2, 0, 1, 1);

        ui_meanSample = new QLabel(UIConverterHistogramDlg);
        ui_meanSample->setObjectName(QString::fromUtf8("ui_meanSample"));
        ui_meanSample->setWordWrap(false);

        gridLayout2->addWidget(ui_meanSample, 3, 1, 1, 1);

        textLabel1 = new QLabel(UIConverterHistogramDlg);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        textLabel1->setWordWrap(false);

        gridLayout2->addWidget(textLabel1, 0, 0, 1, 1);

        textLabel1_2 = new QLabel(UIConverterHistogramDlg);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        textLabel1_2->setWordWrap(false);

        gridLayout2->addWidget(textLabel1_2, 1, 0, 1, 1);

        ui_stdDeviationSample = new QLabel(UIConverterHistogramDlg);
        ui_stdDeviationSample->setObjectName(QString::fromUtf8("ui_stdDeviationSample"));
        ui_stdDeviationSample->setWordWrap(false);

        gridLayout2->addWidget(ui_stdDeviationSample, 4, 1, 1, 1);

        ui_time = new QLabel(UIConverterHistogramDlg);
        ui_time->setObjectName(QString::fromUtf8("ui_time"));
        ui_time->setWordWrap(false);

        gridLayout2->addWidget(ui_time, 6, 1, 1, 1);


        vboxLayout->addLayout(gridLayout2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacer1_2 = new QSpacerItem(90, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacer1_2);

        ui_close = new QPushButton(UIConverterHistogramDlg);
        ui_close->setObjectName(QString::fromUtf8("ui_close"));
        ui_close->setDefault(true);

        hboxLayout1->addWidget(ui_close);


        vboxLayout->addLayout(hboxLayout1);


        hboxLayout->addLayout(vboxLayout);


        retranslateUi(UIConverterHistogramDlg);
        QObject::connect(ui_close, SIGNAL(clicked()), UIConverterHistogramDlg, SLOT(close()));

        QMetaObject::connectSlotsByName(UIConverterHistogramDlg);
    } // setupUi

    void retranslateUi(QDialog *UIConverterHistogramDlg)
    {
        UIConverterHistogramDlg->setWindowTitle(QApplication::translate("UIConverterHistogramDlg", "QtDSO: Converter Histogram", 0, QApplication::UnicodeUTF8));
        ui_clear->setText(QApplication::translate("UIConverterHistogramDlg", "Clear", 0, QApplication::UnicodeUTF8));
        ui_haltContinue->setText(QApplication::translate("UIConverterHistogramDlg", "Halt", 0, QApplication::UnicodeUTF8));
        ui_channel->clear();
        ui_channel->insertItems(0, QStringList()
         << QApplication::translate("UIConverterHistogramDlg", "CH 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIConverterHistogramDlg", "CH 2", 0, QApplication::UnicodeUTF8)
        );
        ui_minSample->setText(QApplication::translate("UIConverterHistogramDlg", "0", 0, QApplication::UnicodeUTF8));
        ui_maxSample->setText(QApplication::translate("UIConverterHistogramDlg", "0", 0, QApplication::UnicodeUTF8));
        textLabel1_3_2->setText(QApplication::translate("UIConverterHistogramDlg", "Std. Deviation:", 0, QApplication::UnicodeUTF8));
        textLabel1_3->setText(QApplication::translate("UIConverterHistogramDlg", "Mean:", 0, QApplication::UnicodeUTF8));
        textLabel1_3_2_2->setText(QApplication::translate("UIConverterHistogramDlg", "Time:", 0, QApplication::UnicodeUTF8));
        ui_numSamples->setText(QApplication::translate("UIConverterHistogramDlg", "0", 0, QApplication::UnicodeUTF8));
        textLabel1_2_2->setText(QApplication::translate("UIConverterHistogramDlg", "Max:", 0, QApplication::UnicodeUTF8));
        ui_meanSample->setText(QApplication::translate("UIConverterHistogramDlg", "0", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("UIConverterHistogramDlg", "Samples:", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("UIConverterHistogramDlg", "Min:", 0, QApplication::UnicodeUTF8));
        ui_stdDeviationSample->setText(QApplication::translate("UIConverterHistogramDlg", "0", 0, QApplication::UnicodeUTF8));
        ui_time->setText(QApplication::translate("UIConverterHistogramDlg", "0s", 0, QApplication::UnicodeUTF8));
        ui_close->setText(QApplication::translate("UIConverterHistogramDlg", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        unknown_ID
    };
    static QPixmap qt_get_icon(IconID id)
    {
    /* XPM */
    static const char* const image0_data[] = { 
"22 22 210 2",
"Qt c None",
".# c #000000",
".S c #020202",
"#i c #020204",
"#a c #020206",
"## c #020208",
".1 c #02020a",
".R c #02020c",
".T c #02020d",
"aA c #040202",
"aa c #040206",
"#y c #04020c",
"aB c #040404",
"at c #04040c",
"#h c #04040d",
".h c #060606",
"aM c #08060c",
"am c #0a0808",
".2 c #0d0f10",
"#z c #101012",
"al c #101213",
"#7 c #121212",
"aV c #13150c",
"an c #13150d",
"#P c #151612",
"az c #151812",
"aX c #151d0f",
"bp c #161904",
"#u c #161912",
"#5 c #161c13",
".5 c #181c13",
"#8 c #1a1a16",
"aU c #1a1c10",
"#Y c #1c1d16",
"#9 c #1c2210",
"ak c #1c2212",
"aW c #1e2513",
"ae c #212616",
"aN c #222715",
".U c #222815",
"#G c #282d13",
"aI c #283015",
"#l c #2a2f13",
"bc c #2a3107",
"bo c #2a3108",
".Q c #2b3115",
"#O c #2b3315",
"#D c #2c321a",
"#K c #2f331a",
".3 c #2f3418",
"#V c #313918",
".4 c #313a19",
".w c #374109",
".g c #383838",
"a# c #383f19",
"aL c #383f1a",
"#E c #404c18",
"ah c #424e19",
"#m c #454e1c",
"#b c #454f1d",
".L c #4c590c",
".6 c #4f5b1d",
"aH c #50591d",
"aJ c #505b1d",
"#R c #505c1d",
"#6 c #516120",
"be c #525f0f",
".9 c #52600d",
"aK c #53611e",
"bf c #53620d",
"bd c #53620e",
"#1 c #536221",
"#r c #53631e",
".Y c #54620e",
"aZ c #55630e",
"bn c #556310",
"bg c #56640f",
"aC c #566520",
"#w c #57650f",
"bh c #59680f",
".0 c #59681c",
"#I c #5a690f",
"af c #5a6922",
"bi c #5b6a10",
"#g c #5b6a22",
"#T c #5b6b11",
"#2 c #5c6a22",
"bj c #5d6c13",
"aE c #5d6d0e",
"bl c #5d6d10",
"#3 c #5d6d13",
"a7 c #5e6a22",
"#S c #5e6b1e",
"ap c #5e6d0f",
"bk c #5e6d11",
".f c #5f5f5f",
"a6 c #5f6a20",
"ac c #5f6e11",
"bm c #617110",
"aP c #617210",
"#t c #647322",
"au c #647423",
"#J c #64761a",
"#U c #657420",
".E c #657520",
".D c #65761a",
"aT c #667227",
"#j c #667326",
".V c #677922",
"as c #6a7622",
".e c #6d6d6d",
"#. c #6e7d20",
".P c #6e7d21",
"a5 c #768822",
"#4 c #768921",
"a8 c #778728",
"#H c #778823",
"ab c #778828",
"#x c #778921",
".F c #778925",
".C c #778a21",
"ai c #788925",
".d c #7a7a7a",
".a c #7b7b7b",
".N c #88a213",
"#c c #899c20",
".Z c #89a016",
".z c #89a018",
"#X c #8ca326",
".y c #8da321",
".B c #8da41e",
"#q c #8da426",
"ay c #8fa332",
"a. c #8fa431",
"aj c #90a42c",
"#Z c #90a62a",
".A c #90a916",
".O c #90a91c",
"ad c #91a91d",
".G c #91aa1e",
"#C c #91aa22",
"#N c #92a926",
"aY c #92ab29",
"ba c #92ab2a",
".c c #939393",
".v c #94a53e",
"bb c #96af1d",
"#f c #96b028",
"aF c #97b01a",
".I c #97b119",
"a0 c #97b11a",
".J c #97b21a",
"b# c #97b22a",
".K c #98b11a",
"aO c #98b22b",
"#o c #99b415",
"#A c #99b512",
"#L c #9ab121",
"#d c #9ab221",
"a4 c #9bb028",
"#n c #9bb322",
"a1 c #9bb51c",
"ar c #9cb51a",
".H c #9cb61a",
".X c #9cb71a",
"#v c #9db12a",
"aR c #9db519",
"#B c #9db815",
"#M c #9db915",
"#W c #9db91e",
".W c #9eb825",
"#p c #9eba13",
"#e c #9eba1e",
".x c #9fb046",
"ag c #9fb92b",
"a2 c #9fba1d",
"a9 c #a0b827",
"#s c #a0ba2c",
".8 c #a0bb19",
".b c #a1a1a1",
"aG c #a1b425",
"ao c #a1b927",
"aS c #a1ba21",
".7 c #a1bb20",
"av c #a3bd2c",
"#F c #a3bd2d",
"a3 c #a9c223",
"#k c #aac428",
"aw c #adcb22",
"#Q c #aecc25",
".l c #afbe63",
".m c #b0bf64",
".n c #b1c164",
"ax c #b2d41d",
"#0 c #b2d420",
".k c #b4c170",
"aQ c #b4c55d",
".u c #b4c65d",
".M c #b5c170",
".o c #b5c564",
".j c #b7c18b",
"aq c #b7c664",
".s c #b7c764",
".p c #b7c765",
".t c #b7c865",
".i c #b8bca7",
".r c #b8c865",
".q c #b8c965",
"b. c #bdde25",
"aD c #bede23",
"QtQtQt.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#Qt",
"QtQt.a.b.c.d.e.e.e.e.e.e.e.e.e.e.f.g.h.#.#.#",
"Qt.#.b.i.j.k.l.m.n.o.p.q.r.s.s.t.u.v.w.#.#.#",
"Qt.#.c.j.x.y.z.A.B.C.D.E.F.G.H.I.J.K.L.#.#.#",
"Qt.#.d.M.y.N.O.P.Q.R.S.S.T.U.V.W.X.H.Y.#.#.#",
"Qt.#.e.l.Z.O.0.1.R.2.3.4.5.R.1.6.7.8.9.#.#.#",
"Qt.#.e.m.A#.###a#b#c#d#e#f#g#h#i#j#k.Y.#.#.#",
"Qt.#.e.n.B#l#i#m#n#o#p#q#r#s#t###u#v#w.#.#.#",
"Qt.#.e.o#x#y#z#c#A#B#C#D###E#F#G#i#H#I.#.#.#",
"Qt.#.e.p#J#i#K#L#M#N#O###P.F#Q#R#i#S#T.#.#.#",
"Qt.#.e.r#U.S#V#W#X#D###a#Y#Z#0#1#i#2#3.#.#.#",
"Qt.#.e.q#4.T#5#f#6###7#8#a#9a.a#aaabac.#.#.#",
"Qt.#.e.padae.Rafagahaiajak.Salamanaoap.#.#.#",
"Qt.#.eaqaras.RatauavawaxayazaAaBaCaDaE.#.#.#",
"Qt.#.e.paFaGaH.S.1aIaJaKaLaMaBaBaNaOaP.#.#.#",
"Qt.#.faQ.IaRaSaTaU#a#i.S#iaVaCaWaXaYaZ.#.#.#",
"Qt.#.g.va0a1a2a3a4a5a6a7a8a9b.b#babbbc.#.#.#",
"Qt.#.h.w.LbdbebfbgbhbibjbkblaEbmbnbobp.#.#.#",
"Qt.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#",
"Qt.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#",
"QtQt.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#",
"QtQtQt.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#Qt"};


    switch (id) {
        case image0_ID: return QPixmap((const char**)image0_data);
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class UIConverterHistogramDlg: public Ui_UIConverterHistogramDlg {};
} // namespace Ui

QT_END_NAMESPACE

class UIConverterHistogramDlg : public QDialog, public Ui::UIConverterHistogramDlg
{
    Q_OBJECT

public:
    UIConverterHistogramDlg(QWidget* parent = 0, const char* name = 0, bool modal = false, Qt::WindowFlags fl = 0);
    ~UIConverterHistogramDlg();

protected slots:
    virtual void languageChange();

};

#endif // UICONVERTERHISTOGRAMDLG_H
