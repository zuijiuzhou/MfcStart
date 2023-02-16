#pragma once
#include "mp_global.h"
#include "MainWindow.rc.h"
#include <afxframewndex.h>
#include <afxribbonbar.h>
#include <afxribbonbutton.h>
#include <afxribbonstatusbar.h>

class MainWindow : public CFrameWndEx
{
    DECLARE_DYNCREATE(MainWindow)
private:
    CMFCRibbonBar m_ribbonBar;
    CMFCRibbonStatusBar m_statusBar;
    CMFCRibbonApplicationButton m_appButton;

public:
    MainWindow();
    virtual ~MainWindow(){};

protected:
    DECLARE_MESSAGE_MAP()
    afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);

private:
    void initializeComponents();
};