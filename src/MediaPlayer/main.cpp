#include <iostream>
#include "Application.h"

Application *g_app;

int AFXAPI AfxWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, _In_ LPTSTR lpCmdLine, int nCmdShow)
{
    ASSERT(hPrevInstance == NULL);
    Application app;
    AfxWinInit(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
    app.InitApplication();
    app.InitInstance();

    g_app = &app;
    ASSERT(g_app == AfxGetApp());
    int code = app.Run();
    MessageBox(NULL, _T("Hello MFC!"), APPLICATION_NAME, MB_OK);
    return code;
}