
// finallymfcDlg.h : 头文件
//

#pragma once
#include"Mystruct.h"

// CfinallymfcDlg 对话框
class CfinallymfcDlg : public CDialogEx
{
// 构造
public:
	CfinallymfcDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_FINALLYMFC_DIALOG };
	stu mstudent;
	stuclass mclass;
	stutest mtest;
	stuhealth mhealth;
	CString snumber;
	CString dnumber;
	CListCtrl mlist;
	CEdit m00;
	CEdit m01;
	CEdit m02;
	CEdit m03;
	CEdit m04;
	CEdit m05;
	CEdit m06;
	CEdit m07;
	CEdit m08;
	CEdit m09;
	CEdit m10;
	CEdit m11;
	CEdit m12;
	CEdit m13;
	CEdit m14;
	CEdit m15;
	CEdit m16;
	CEdit m17;


	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedOk2();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnBnClickedOk3();
	afx_msg void OnBnClickedCancel();
	
	afx_msg void On32779();
	afx_msg void On32780();
	afx_msg void OnLvnItemchangedList2(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedOk4();
	afx_msg void On32771();
	afx_msg void On32772();
	afx_msg void On32776();
	afx_msg void On32774();
};
