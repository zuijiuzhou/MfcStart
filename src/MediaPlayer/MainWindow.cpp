#include "MainWindow.h"
#include <afxribboncategory.h>
#include <afxribbonmainpanel.h>

IMPLEMENT_DYNCREATE(MainWindow, CFrameWndEx)

BEGIN_MESSAGE_MAP(MainWindow, CFrameWndEx)

ON_WM_CREATE()

END_MESSAGE_MAP()

MainWindow::MainWindow()
{
}

int MainWindow::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
    initializeComponents();
    return TRUE;
}

void MainWindow::initializeComponents()
{
    m_ribbonBar.Create(this);
    m_ribbonBar.EnableToolTips();
    m_ribbonBar.EnableKeyTips();
    m_ribbonBar.SetApplicationButton(&m_appButton, CSize(36, 36));

    m_statusBar.Create(this);

    m_appButton.SetText(_T("File"));
    m_appButton.SetID(IDC_RB_APPBUTTON);

    CMFCRibbonCategory *tabHome = m_ribbonBar.AddCategory(_T("&Home"), 0, 0);
    CMFCRibbonPanel *panelFile = tabHome->AddPanel(_T("File"));
    CMFCRibbonButton *btnImportFile = new CMFCRibbonButton(IDC_RB_BTN_IMPORTFILE, _T("导入"));
}