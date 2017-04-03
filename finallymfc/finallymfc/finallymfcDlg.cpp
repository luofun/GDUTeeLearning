
// finallymfcDlg.cpp : 实现文件
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


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
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


// CfinallymfcDlg 对话框



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


// CfinallymfcDlg 消息处理程序

BOOL CfinallymfcDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码
	mlist.InsertColumn(0, _T("学号"), LVCFMT_LEFT, 100);
	mlist.InsertColumn(1, _T("姓名"), LVCFMT_LEFT, 100);
	mlist.InsertColumn(2, _T("性别"), LVCFMT_LEFT, 100);
	mlist.InsertColumn(3, _T("联系方式"), LVCFMT_LEFT, 150);
	mlist.InsertColumn(4, _T("家庭联系方式"), LVCFMT_LEFT, 150);
	mlist.InsertColumn(5, _T("班主任"), LVCFMT_LEFT, 100);
	mlist.InsertColumn(6, _T("身高"), LVCFMT_LEFT, 100);
	mlist.InsertColumn(7, _T("体重"), LVCFMT_LEFT, 100);
	mlist.InsertColumn(8, _T("选课"), LVCFMT_LEFT, 300);
	mlist.InsertColumn(9, _T("考试情况"), LVCFMT_LEFT, 500);
	mlist.InsertColumn(10, _T("健康"), LVCFMT_LEFT, 200);

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CfinallymfcDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CfinallymfcDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CfinallymfcDlg::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
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
	GetPrivateProfileString(mstudent.num, _T("name"), _T("默认"), test1.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	test1.ReleaseBuffer();
	if (test1 != _T("默认"))
		if (test1 != _T(""))
		MessageBox(_T("你覆盖了一个已有条目"));
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
		mlist.SetItemText(0, 9, _T("待考") + mtest.wtest + _T(" 分数") + mtest.grade + _T(" 补考/参考") + mtest.othertest);
		mlist.SetItemText(0, 10, mhealth.health);
	}
	else
		MessageBox(_T("学号和姓名不能为空，写入不成功"));
	
}


void CfinallymfcDlg::OnBnClickedOk2()
{
	UpdateData(TRUE);
	stu stest;
	stuclass ctest;
	stutest sjtest;
	stuhealth htest;
	m00.GetWindowTextW(snumber);
	GetPrivateProfileString(snumber,_T("name"),_T("默认"),stest.name.GetBuffer(MAX_PATH),MAX_PATH,_T(".\\test.ini"));
	stest.name.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("sex"), _T("默认"), stest.sex.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	stest.sex.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("contact"), _T("默认"), stest.contanctway.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	stest.contanctway.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("family"), _T("默认"), stest.family.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	stest.family.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("headmaster"), _T("默认"), stest.headmaster.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	stest.headmaster.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("tall"), _T("默认"), stest.tall.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	stest.tall.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("weight"), _T("默认"), stest.weight.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	stest.weight.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("class1"), _T("默认"), ctest.class1.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	ctest.class1.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("class2"), _T("默认"), ctest.class2.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	ctest.class2.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("class3"), _T("默认"), ctest.class3.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	ctest.class3.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("class4"), _T("默认"), ctest.class4.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	ctest.class4.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("wtest"), _T("默认"), sjtest.wtest.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	sjtest.wtest.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("grade"), _T("默认"), sjtest.grade.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	sjtest.grade.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("other"), _T("默认"), sjtest.othertest.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
	sjtest.othertest.ReleaseBuffer();
	GetPrivateProfileString(snumber, _T("health"), _T("默认"), htest.health.GetBuffer(MAX_PATH), MAX_PATH, _T(".\\test.ini"));
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
	mlist.SetItemText(0, 9, _T("待考") + sjtest.wtest + _T(" 分数") + sjtest.grade + _T(" 补考/参考") + sjtest.othertest);
	mlist.SetItemText(0, 10, htest.health);
	MessageBox(_T("学号为") + snumber + _T("的") + stest.name + _T("同学的信息已显示在列表第一行"));
	//mlist.DeleteItem(0);

	//Ctest233 a;
	//a.DoModal();// TODO:  在此添加控件通知处理程序代码
}


void CfinallymfcDlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CfinallymfcDlg::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CfinallymfcDlg::OnBnClickedOk3()
{
	UpdateData(TRUE);
	m17.GetWindowTextW(dnumber);
	WritePrivateProfileString(dnumber,NULL,NULL,_T(".\\test.ini"));
	MessageBox(_T("学号为") + dnumber + _T("的条目已经被删除"));
	
	// TODO:  在此添加控件通知处理程序代码
}


void CfinallymfcDlg::OnBnClickedCancel()
{
	// TODO:  在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}




void CfinallymfcDlg::On32779()
{
	//CfinallymfcDlg::OnBnClickedOk3();
	Ctest233 a;
	a.DoModal();// TODO:  在此添加命令处理程序代码
}


void CfinallymfcDlg::On32780()
{
	CDialogEx::OnCancel();// TODO:  在此添加命令处理程序代码
}


void CfinallymfcDlg::OnLvnItemchangedList2(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	// TODO:  在此添加控件通知处理程序代码
	*pResult = 0;
}


void CAboutDlg::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
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
	
	// TODO:  在此添加控件通知处理程序代码
}


void CfinallymfcDlg::OnBnClickedOk4()
{
	mlist.DeleteAllItems();
	UpdateData(TRUE);// TODO:  在此添加控件通知处理程序代码
}


void CfinallymfcDlg::On32771()
{
	CfinallymfcDlg::OnBnClickedOk();// TODO:  在此添加命令处理程序代码
}


void CfinallymfcDlg::On32772()
{
	CfinallymfcDlg::OnBnClickedOk2();// TODO:  在此添加命令处理程序代码
}


void CfinallymfcDlg::On32776()
{
	CfinallymfcDlg::OnBnClickedOk4();
	CfinallymfcDlg::OnBnClickedButton1();// TODO:  在此添加命令处理程序代码
}


void CfinallymfcDlg::On32774()
{
	MessageBox(_T("UNDER CONSTRUCTION"));// TODO:  在此添加命令处理程序代码
}
