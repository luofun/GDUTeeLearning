
// finallymfc.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CfinallymfcApp: 
// �йش����ʵ�֣������ finallymfc.cpp
//

class CfinallymfcApp : public CWinApp
{
public:
	CfinallymfcApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CfinallymfcApp theApp;