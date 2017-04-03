#pragma once


// Ctest233 对话框

class Ctest233 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctest233)

public:
	Ctest233(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Ctest233();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
