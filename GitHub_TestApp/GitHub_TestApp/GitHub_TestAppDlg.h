
// GitHub_TestAppDlg.h : ���� ���������
//

#pragma once
#include "afxwin.h"


// ���������� ���� CGitHub_TestAppDlg
class CGitHub_TestAppDlg : public CDialogEx
{
// ��������
public:
	CGitHub_TestAppDlg(CWnd* pParent = NULL);	// ����������� �����������

// ������ ����������� ����
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GITHUB_TESTAPP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// ��������� DDX/DDV


// ����������
protected:
	HICON m_hIcon;

	// ��������� ������� ����� ���������
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CStatic m_stMessage;
};
