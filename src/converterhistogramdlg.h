#ifndef CONVERTERHISTOGRAMDLG_HH
#define CONVERTERHISTOGRAMDLG_HH

#include <uiconverterhistogramdlg.h>
//Added by qt3to4:
#include <QTimerEvent>

class Dso;

class ConverterHistogramDlg : public UIConverterHistogramDlg
{
  Q_OBJECT
public:
  ConverterHistogramDlg( QWidget *parent=0, const char *name=0 );
  virtual ~ConverterHistogramDlg();

  void addValues( Dso * );
    
protected:
  void timerEvent( QTimerEvent * );

};

#endif // CONVERTERHISTOGRAMDLG_HH
