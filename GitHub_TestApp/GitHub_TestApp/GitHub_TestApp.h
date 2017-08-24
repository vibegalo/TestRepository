
// GitHub_TestApp.h : главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CGitHub_TestAppApp:
// О реализации данного класса см. GitHub_TestApp.cpp
//

class CGitHub_TestAppApp : public CWinApp
{
public:
	CGitHub_TestAppApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CGitHub_TestAppApp theApp;