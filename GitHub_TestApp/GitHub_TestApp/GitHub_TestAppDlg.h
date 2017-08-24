
// GitHub_TestAppDlg.h : файл заголовка
//

#pragma once
#include "afxwin.h"


// диалоговое окно CGitHub_TestAppDlg
class CGitHub_TestAppDlg : public CDialogEx
{
// Создание
public:
	CGitHub_TestAppDlg(CWnd* pParent = NULL);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GITHUB_TESTAPP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CStatic m_stMessage;
};
