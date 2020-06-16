#pragma once


// main dialog

class main : public CDialogEx
{
	DECLARE_DYNAMIC(main)

public:
	main(SOCKET s, CString , CWnd* pParent = nullptr);   // standard constructor
	virtual ~main();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MAIN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
