
// mfc_and_office_word.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmfc_and_office_wordApp:
// See mfc_and_office_word.cpp for the implementation of this class
//

class Cmfc_and_office_wordApp : public CWinApp
{
public:
	Cmfc_and_office_wordApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern Cmfc_and_office_wordApp theApp;