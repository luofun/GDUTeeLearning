
// finallymfcDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "finallymfc.h"
#include "finallymfcDlg.h"
#include "afxdialogex.h"
#include "Ctest233.h"
//#include "Mystruct.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32777();
	afx_msg void OnBnClickedOk();
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	//ON_COMMAND(ID_32777, &CAboutDlg::On32777)
	ON_BN_CLICKED(IDOK, &CAboutDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CfinallymfcDlg �Ի���



CfinallymfcDlg::CfinallymfcDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CfinallymfcDlg::IDD, pParent)
{
	mstudent.contanctway = _T("");
	mstudent.family = _T("");
	mstudent.headmaster = _T("");
	mstudent.name = _T("");
	mstudent.num = _T("");
	mstudent.sex = _T("");
	mstudent.tall = _T("");
	mstudent.weight = _T("");
	mclass.class1 = _T("");
	mclass.class2 = _T("");
	mclass.class3 = _T("");
	mclass.class4 = _T("");
	mtest.grade = _T("");
	mtest.othertest = _T("");
	mtest.wtest = _T("");
	mhealth.health = _T("");
	snumber = _T("");
	dnumber = _T("");
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CfinallymfcDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_EDIT1, m00);
	DDX_Control(pDX, IDC_EDIT2, m01);
	DDX_Control(pDX, IDC_EDIT3, m02);
	DDX_Control(pDX, IDC_EDIT4, m03);
	DDX_Control(pDX, IDC_EDIT5, m04);
	DDX_Control(pDX, IDC_EDIT6, m05);
	DDX_Control(pDX, IDC_EDIT7, m06);
	DDX_Control(pDX, IDC_EDIT8, m07);
	DDX_Control(pDX, IDC_EDIT9, m08);
	DDX_Control(pDX, IDC_EDIT10, m09);
	DDX_Control(pDX, IDC_EDIT11, m10);
	DDX_Control(pDX, IDC_EDIT12, m11);
	DDX_Control(pDX, IDC_EDIT13, m12);
	DDX_Control(pDX, IDC_EDIT15, m13);
	DDX_Control(pDX, IDC_EDIT16, m14);
	DDX_Control(pDX, IDC_EDIT17, m15);
	DDX_Control(pDX, IDC_EDIT18, m16);
	DDX_Control(pDX, IDC_EDIT19, m17);
	
	DDX_Text(pDX, IDC_EDIT1, snumber);
	DDX_Text(pDX, IDC_EDIT2, mstudent.num);
	DDX_Text(pDX, IDC_EDIT3, mstudent.name);
	DDX_Text(pDX, IDC_EDIT4, mstudent.sex);
	DDX_Text(pDX, IDC_EDIT5, mstudent.contanctway);
	DDX_Text(pDX, IDC_EDIT6, mstudent.family);
	DDX_Text(pDX, IDC_EDIT7, mstudent.headmaster);
	DDX_Text(pDX, IDC_EDIT8, mstudent.tall);
	DDX_Text(pDX, IDC_EDIT9, mstudent.weight);
	DDX_Text(pDX, IDC_EDIT10, mclass.class1);
	DDX_Text(pDX, IDC_EDIT11, mclass.class2);
	DDX_Text(pDX, IDC_EDIT12, mclass.class3);
	DDX_Text(pDX, IDC_EDIT13, mclass.class4);
	DDX_Text(pDX, IDC_EDIT15, mtest.wtest);
	DDX_Text(pDX, IDC_EDIT16, mtest.grade);
	DDX_Text(pDX, IDC_EDIT17, mtest.othertest);
	DDX_Text(pDX, IDC_EDIT18, mhealth.health);
	DDX_Text(pDX, IDC_EDIT19, dnumber);

	DDX_Control(pDX, IDC_LIST2, mlist);
}

BEGIN_MESSAGE_MAP(CfinallymfcDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CfinallymfcDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDOK2, &CfinallymfcDlg::OnBnClickedOk2)
	ON_EN_CHANGE(IDC_EDIT1, &CfinallymfcDlg::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT5, &CfinallymfcDlg::OnEnChangeEdit5)
	ON_BN_CLICKED(IDOK3, &CfinallymfcDlg::OnBnClickedOk3)
	ON_BN_CLICKED(IDCANCEL, &CfinallymfcDlg::OnBnClickedCancel)
	//ON_COMMAND(ID_32777, &CfinallymfcDlg::On32777)
	ON_COMMAND(ID_32779, &CfinallymfcDlg::On32779)
	ON_COMMAND(ID_32780, &CfinallymfcDlg::On32780)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST2, &CfinallymfcDlg::OnLvnItemchangedList2)
	ON_BN_CLICKED(IDC_BUTTON1, &CfinallymfcDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDOK4, &CfinallymfcDlg::OnBnClickedOk4)
	ON_COMMAND(ID_32771, &CfinallymfcDlg::On32771)
	ON_COMMAND(ID_32772, &CfinallymfcDlg::On32772)
	ON_COMMAND(ID_32776, &CfinallymfcDlg::On32776)
	ON_COMMAND(ID_32774, &CfinallymfcDlg::On32774)
END_MESSAGE_MAP()


// CfinallymfcDlg ��Ϣ�������

BOOL CfinallymfcDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������
	mlist.InsertColumn(0, _T("ѧ��"), LVCFMT_LEFT, 100);
	mlist.InsertColumn(1, _T("����"), LVCFMT_LEFT, 100);
	mlist.InsertColumn(2, _T("�Ա�"), LVCFMT_LEFT, 100);
	mlist.InsertColumn(3, _T("��ϵ��ʽ"), LVCFMT_LEFT, 150);
	mlist.InsertColumn(4, _T("��ͥ��ϵ��ʽ"), LVCFMT_LEFT, 150);
	mlist.InsertColumn(5, _T("������"), LVCFMT_LEFT, 100);
	mlist.InsertColumn(6, _T("���"), LVCFMT_LEFT, 100);
	mlist.InsertColumn(7, _T("����"), LVCFMT_LEFT, 100);
	mlist.InsertColumn(8, _T("ѡ��"), LVCFMT_LEFT, 300);
	mlist.InsertColumn(9, _T("�������"), LVCFMT_LEFT, 500);
	mlist.InsertColumn(10, _T("����"), LVCFMT_LEFT, 200);

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CfinallymfcDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CfinallymfcDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CfinallymfcDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CfinallymfcDlg::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	//CDialogEx::OnOK();
	UpdateData(TRUE);
	CString test1;
	m01.GetWindowTextW(mstudent.num);
	m02.GetWindowTextW(mstudent.name);
	m03.GetWindowTextW(mstudent.sex);
	m04.GetWindowTextW(mstudent.contanctway);
	m05.GetWindowTextW(mstudent.family);
	m06.GetWindowTextW(mstudent.headmaster);
	m07.GetWindowTextW(mstudent.tall);
	m08.GetWindowTextW(mstudent.weight);
	m09.GetWindowTextW(mclass.class1);
	m10.GetWindowTextW(mclass.class2);
	m11.GetWindowTextW(mclass.class3);
	m12.GetWindowTextW(mclass.class4);
	m13.GetWindowTextW(mtest.wtest);
	m14.GetWindowTextW(mtest.grade);
	m15.GetWindowTextW(mtest.othertest);
	m16.GetWindowTextW(mhealth.health);
	GetPrivateProfileString(mstudent.num, _T("name"), _T("Ĭ��"), test1.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	test1.ReleaseBuffer();
	if (test1 != _T("Ĭ��"))
		if (test1 != _T(""))
		MessageBox(_T("�㸲����һ��������Ŀ"));
	if (mstudent.name != _T("") && mstudent.num !=_T(""))
	{
		WritePrivateProfileString(mstudent.num, _T("name"), mstudent.name, _T(".\\test.ini"));
		WritePrivateProfileString(mstudent.num, _T("sex"), mstudent.sex, _T(".\\test.ini"));
		WritePrivateProfileString(mstudent.num, _T("contact"), mstudent.contanctway, _T(".\\test.ini"));
		WritePrivateProfileString(mstudent.num, _T("family"), mstudent.family, _T(".\\test.ini"));
		WritePrivateProfileString(mstudent.num, _T("headmaster"), mstudent.headmaster, _T(".\\test.ini"));
		WritePrivateProfileString(mstudent.num, _T("tall"), mstudent.tall, _T(".\\test.ini"));
		WritePrivateProfileString(mstudent.num, _T("weight"), mstudent.weight, _T(".\\test.ini"));
		WritePrivateProfileString(mstudent.num, _T("class1"), mclass.class1, _T(".\\test.ini"));
		WritePrivateProfileString(mstudent.num, _T("class2"), mclass.class2, _T(".\\test.ini"));
		WritePrivateProfileString(mstudent.num, _T("class3"), mclass.class3, _T(".\\test.ini"));
		WritePrivateProfileString(mstudent.num, _T("class4"), mclass.class4, _T(".\\test.ini"));
		WritePrivateProfileString(mstudent.num, _T("wtest"), mtest.wtest, _T(".\\test.ini"));
		WritePrivateProfileString(mstudent.num, _T("grade"), mtest.grade, _T(".\\test.ini"));
		WritePrivateProfileString(mstudent.num, _T("other"), mtest.othertest, _T(".\\test.ini"));
		WritePrivateProfileString(mstudent.num, _T("health"), mhealth.health, _T(".\\test.ini"));
		mlist.InsertItem(0, mstudent.num);
		mlist.SetItemText(0, 1, mstudent.name);
		mlist.SetItemText(0, 2, mstudent.sex);
		mlist.SetItemText(0, 3, mstudent.contanctway);
		mlist.SetItemText(0, 4, mstudent.family);
		mlist.SetItemText(0, 5, mstudent.headmaster);
		mlist.SetItemText(0, 6, mstudent.tall);
		mlist.SetItemText(0, 7, mstudent.weight);
		mlist.SetItemText(0, 8, mclass.class1 + _T(' ') + mclass.class2 + _T(' ') + mclass.class3 + _T(' ') + mclass.class4);
		mlist.SetItemText(0, 9, _T("����") + mtest.wtest + _T(" ����") + mtest.grade + _T(" ����/�ο�") + mtest.othertest);
		mlist.SetItemText(0, 10, mhealth.health);
	}
	else
		MessageBox(_T("ѧ�ź���������Ϊ�գ�д�벻�ɹ�"));
	
}


void CfinallymfcDlg::OnBnClickedOk2()
{
	UpdateData(TRUE);
	stu stest;
	stuclass ctest;
	stutest sjtest;
	stuhealth htest;
	m00.GetWindowTextW(snumber);
	GetPrivateProfileString(snumber,_T("name"),_T("Ĭ��"),stest.name.GetBuffer(MAX_PATH),MAX_PATH,_T(".\\test.ini"));
	stest.name.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("sex"), _T("Ĭ��"), stest.sex.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	stest.sex.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("contact"), _T("Ĭ��"), stest.contanctway.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	stest.contanctway.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("family"), _T("Ĭ��"), stest.family.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	stest.family.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("headmaster"), _T("Ĭ��"), stest.headmaster.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	stest.headmaster.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("tall"), _T("Ĭ��"), stest.tall.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	stest.tall.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("weight"), _T("Ĭ��"), stest.weight.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	stest.weight.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("class1"), _T("Ĭ��"), ctest.class1.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	ctest.class1.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("class2"), _T("Ĭ��"), ctest.class2.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	ctest.class2.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("class3"), _T("Ĭ��"), ctest.class3.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	ctest.class3.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("class4"), _T("Ĭ��"), ctest.class4.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	ctest.class4.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("wtest"), _T("Ĭ��"), sjtest.wtest.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	sjtest.wtest.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("grade"), _T("Ĭ��"), sjtest.grade.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	sjtest.grade.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("other"), _T("Ĭ��"), sjtest.othertest.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	sjtest.othertest.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("health"), _T("Ĭ��"), htest.health.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	htest.health.ReleaseBuffer();
	mlist.InsertItem(0, snumber);
	mlist.SetItemText(0, 1, stest.name);
	mlist.SetItemText(0, 2, stest.sex);
	mlist.SetItemText(0, 3, stest.contanctway);
	mlist.SetItemText(0, 4, stest.family);
	mlist.SetItemText(0, 5, stest.headmaster);
	mlist.SetItemText(0, 6, stest.tall);
	mlist.SetItemText(0, 7, stest.weight);
	mlist.SetItemText(0, 8, ctest.class1 + _T(' ') + ctest.class2 + _T(' ') + ctest.class3 + _T(' ') + ctest.class4);
	mlist.SetItemText(0, 9, _T("����") + sjtest.wtest + _T(" ����") + sjtest.grade + _T(" ����/�ο�") + sjtest.othertest);
	mlist.SetItemText(0, 10, htest.health);
	MessageBox(_T("ѧ��Ϊ") + snumber + _T("��") + stest.name + _T("ͬѧ����Ϣ����ʾ���б��һ��"));
	//mlist.DeleteItem(0);

	//Ctest233 a;
	//a.DoModal();// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CfinallymfcDlg::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CfinallymfcDlg::OnEnChangeEdit5()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CfinallymfcDlg::OnBnClickedOk3()
{
	UpdateData(TRUE);
	m17.GetWindowTextW(dnumber);
	WritePrivateProfileString(dnumber,NULL,NULL,_T(".\\test.ini"));
	MessageBox(_T("ѧ��Ϊ") + dnumber + _T("����Ŀ�Ѿ���ɾ��"));
	
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CfinallymfcDlg::OnBnClickedCancel()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}




void CfinallymfcDlg::On32779()
{
	//CfinallymfcDlg::OnBnClickedOk3();
	Ctest233 a;
	a.DoModal();// TODO:  �ڴ���������������
}


void CfinallymfcDlg::On32780()
{
	CDialogEx::OnCancel();// TODO:  �ڴ���������������
}


void CfinallymfcDlg::OnLvnItemchangedList2(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
}


void CAboutDlg::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}


void CfinallymfcDlg::OnBnClickedButton1()
{
	m01.SetWindowTextW(_T(""));
	m02.SetWindowTextW(_T(""));
	m03.SetWindowTextW(_T(""));
	m04.SetWindowTextW(_T(""));
	m05.SetWindowTextW(_T(""));
	m06.SetWindowTextW(_T(""));
	m07.SetWindowTextW(_T(""));
	m08.SetWindowTextW(_T(""));
	m09.SetWindowTextW(_T(""));
	m10.SetWindowTextW(_T("")); 
	m11.SetWindowTextW(_T(""));
	m12.SetWindowTextW(_T(""));
	m13.SetWindowTextW(_T(""));
	m14.SetWindowTextW(_T(""));
	m15.SetWindowTextW(_T(""));
	m16.SetWindowTextW(_T(""));
	UpdateData(TRUE);
	
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CfinallymfcDlg::OnBnClickedOk4()
{
	mlist.DeleteAllItems();
	UpdateData(TRUE);// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CfinallymfcDlg::On32771()
{
	CfinallymfcDlg::OnBnClickedOk();// TODO:  �ڴ���������������
}


void CfinallymfcDlg::On32772()
{
	CfinallymfcDlg::OnBnClickedOk2();// TODO:  �ڴ���������������
}


void CfinallymfcDlg::On32776()
{
	CfinallymfcDlg::OnBnClickedOk4();
	CfinallymfcDlg::OnBnClickedButton1();// TODO:  �ڴ���������������
}


void CfinallymfcDlg::On32774()
{
	MessageBox(_T("UNDER CONSTRUCTION"));// TODO:  �ڴ���������������
}
