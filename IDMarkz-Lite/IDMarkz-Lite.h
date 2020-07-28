
// IDMarkz-Lite.h : main header file for the IDMarkz-Lite application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CIDMarkzLiteApp:
// See IDMarkz-Lite.cpp for the implementation of this class
//

class CIDMarkzLiteApp : public CWinApp
{
public:
	CIDMarkzLiteApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CIDMarkzLiteApp theApp;
