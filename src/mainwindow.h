//======================================================================
// File:		mainwindow.h
// Author:	Matthias Toussaint
// Created:	Sun Jun  9 23:22:57 CEST 2002
//----------------------------------------------------------------------
// Permission to use, copy, modify, and distribute this software and its
// documentation  for any  purpose and  without fee is  hereby  granted,
// provided  that below copyright notice appear  in all copies  and that
// both  that  copyright  notice and  this permission  notice  appear in
// supporting documentation.
// 
// This  file is  provided AS IS  with no  warranties  of any kind.  The
// author shall  have no liability  with respect  to the infringement of
// copyrights, trade  secrets  or any patents by  this file  or any part
// thereof.  In no event will the author be liable  for any lost revenue
// or profits or other special, indirect and consequential damages.
//----------------------------------------------------------------------
// (c) 2000-2002 Matthias Toussaint
//======================================================================

#ifndef MAINWINDOW_HH
#define MAINWINDOW_HH

#include <q3mainwindow.h>
//Added by qt3to4:
#include <QLabel>
#include <Q3PopupMenu>
#include <Q3Action>
#include <uimainwid.h>

class MainWid;
class QAction;
class Q3PopupMenu;
class UIAbout;
class PrefDlg;
class DsoVuMeter;
class QLabel;
class DampedFloat;

class MainWindow : public Q3MainWindow
{
  Q_OBJECT
public:
  MainWindow( QWidget *parent=0, const char *name=0 );
  virtual ~MainWindow();
  
protected slots:
  void whatsThisSLOT();
  void voltsCh1SLOT();
  void voltsCh2SLOT();
  void interpolationSLOT();
  void modeSLOT();
  void timebaseSLOT();
  void triggerSLOT();
  void triggerChannelSLOT();
  void triggerEdgeSLOT();
  void sampleModeSLOT();
  void fftFreqSLOT();
  void copyrightSLOT();
  void frameRateSLOT( int );
  void applyPrefsSLOT();
  void dynamicRangeSLOT( int, int, int, int, int );
  void fpsSLOT( float );
  void exportPngSLOT();
  void printSLOT();
  void triggerOkSLOT( bool );
  void resetFpsSLOT();
  void setSampleStatusSLOT();
  void setChannelsEnabledSLOT( bool, bool );
  
protected:
  MainWid     *m_mainWid;
  UIAbout     *m_about;
  PrefDlg     *m_prefDlg;
  DampedFloat *m_fps;
  
  Q3Action *m_exportPngAction;
  Q3Action*m_exportEpsAction;
  Q3Action*m_exportDataAction;
  Q3Action*m_importDataAction;
  Q3Action*m_printAction;
  Q3Action*m_preferencesAction;
  Q3Action*m_quitAction;
  
  Q3Action*m_dsoModeAction;
  Q3Action*m_xyModeAction;
  Q3Action*m_fftModeAction;
  
  Q3Action*m_continuousAction;
  Q3Action*m_singleShotAction;
  
  Q3Action*m_triggerOffAction;
  Q3Action*m_triggerCh1Action;
  Q3Action*m_triggerCh2Action;
  Q3Action*m_triggerRaisingAction;
  Q3Action*m_triggerFallingAction;
  
  Q3Action*m_dotsAction;
  Q3Action*m_linearAction;
  Q3Action*m_linearAvAction;
  Q3Action*m_sinxAction;

  Q3Action*m_showCh1Action;
  Q3Action*m_showCh2Action;
  
  Q3Action*m_voltsCh1Action[9];
  Q3Action*m_voltsCh2Action[9];
  
  Q3Action*m_timebaseAction[19];
  Q3Action*m_fftFreqAction[14];

  Q3Action*m_rmsAction;
  Q3Action*m_frequencyAction;
  
  Q3Action*m_timeMarkerAction;
  Q3Action*m_freqMarkerAction;
  Q3Action*m_amplitudeMarkerAction;
  
  Q3Action*m_dcOffsetAction;
  Q3Action*m_histogrammAction;
  
  Q3Action*m_whatsThisAction;
  Q3Action*m_copyrightAction;
  
  Q3PopupMenu *m_ch1Popup;
  Q3PopupMenu *m_ch2Popup;
  Q3PopupMenu *m_fftPopup;
  Q3PopupMenu *m_timebasePopup;
  Q3PopupMenu *m_displayPopup;
  Q3PopupMenu *m_frameRatePopup;
  
  QLabel     *m_statusLabel;
  QLabel     *m_samplingRateLabel;
  QLabel     *m_fpsLabel;
  
  DsoVuMeter *m_vuMeter[2];
  
  bool m_waitingTrigger;
  
  void createActions();
  void createMenu();
  
};

#endif // MAINWINDOW_HH
