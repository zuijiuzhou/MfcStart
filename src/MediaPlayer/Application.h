#pragma once
#ifndef _APPLICATION_H_
#define _APPLICATION_H_

#include "mp_global.h"
#include "Application.rc.h"
#include <afxwinappex.h>

class Application : public CWinAppEx
{
    DECLARE_DYNCREATE(Application)
    public:
    virtual BOOL InitInstance() override;
    virtual BOOL ExitInstance() override;
};
#endif