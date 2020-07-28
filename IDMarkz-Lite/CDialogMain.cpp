// CDialogMain.cpp : implementation file
//

#include "pch.h"
#include "IDMarkz-Lite.h"
#include "CDialogMain.h"
#include "afxdialogex.h"


// CDialogMain dialog

IMPLEMENT_DYNAMIC(CDialogMain, CDialogEx)

CDialogMain::CDialogMain(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_MAIN, pParent)
{

}

CDialogMain::~CDialogMain()
{
}

void CDialogMain::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialogMain, CDialogEx)
END_MESSAGE_MAP()


// CDialogMain message handlers
