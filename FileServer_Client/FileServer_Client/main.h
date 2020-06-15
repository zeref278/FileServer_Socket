#pragma once


// main dialog

class main : public CDialogEx
{
	DECLARE_DYNAMIC(main)

public:
	main(CWnd* pParent = nullptr);   // standard constructor
	virtual ~main();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
