// main.cpp : implementation file
//

#include "pch.h"
#include "FileServer_Client.h"
#include "main.h"
#include "afxdialogex.h"


// main dialog

IMPLEMENT_DYNAMIC(main, CDialogEx)

main::main(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

main::~main()
{
}

void main::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(main, CDialogEx)
END_MESSAGE_MAP()


// main message handlers
