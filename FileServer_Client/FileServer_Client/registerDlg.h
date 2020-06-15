#pragma once


// registerDlg dialog

class registerDlg : public CDialogEx
{
	DECLARE_DYNAMIC(registerDlg)

public:
	registerDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~registerDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
