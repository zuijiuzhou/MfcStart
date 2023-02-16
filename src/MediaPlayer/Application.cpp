#include "Application.h"
#include "MainWindow.h"

IMPLEMENT_DYNCREATE(Application, CWinAppEx)

BOOL Application::InitInstance()
{


    INITCOMMONCONTROLSEX icc;
    icc.dwSize = sizeof(icc);
    icc.dwICC = ICC_WIN95_CLASSES;
    InitCommonControlsEx(&icc);

    if (!CWinAppEx::InitInstance())
    {
        return FALSE;
    }
    if(!AfxOleInit()){
        return FALSE;
    }
    AfxEnableControlContainer();
    EnableTaskbarInteraction();
    SetRegistryKey(COMPANY_NAME);

    HRESULT hret=CoInitialize(NULL);

    MainWindow* pWnd = new MainWindow();
    pWnd->Create(NULL, APPLICATION_NAME);
    pWnd->ShowWindow(SW_SHOW);
    m_pMainWnd = pWnd;
    return TRUE;
}

BOOL Application::ExitInstance()
{
    if (!CWinAppEx::ExitInstance())
    {
        return false;
    }
    
    return TRUE;
}