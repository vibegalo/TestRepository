
// GitHub_TestApp.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CGitHub_TestAppApp:
// � ���������� ������� ������ ��. GitHub_TestApp.cpp
//

class CGitHub_TestAppApp : public CWinApp
{
public:
	CGitHub_TestAppApp();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CGitHub_TestAppApp theApp;