#pragma once


// Ctest233 �Ի���

class Ctest233 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctest233)

public:
	Ctest233(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Ctest233();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
