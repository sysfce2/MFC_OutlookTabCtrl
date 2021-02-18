#pragma once
/////////////////////////////////////////////////////////////////////////////
#include "./OutlookTabCtrl/OutlookTabCtrl.h"
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
// 
struct ManageDialog : CDialog
{	ManageDialog(OutlookTabCtrl *ctrl);

private:
	OutlookTabCtrl *m_pTabCtrl;
		// 
	CListCtrl m_ListCtrl;
	bool m_bTabImages;
	CImageList m_ImageList;

private:
	void FillListCtrl();
	int GetListCtrlItemSelection();
	int GetListCtrlItemImage(int idx) const;

protected:
	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	afx_msg void OnBnClickedUp();
	afx_msg void OnBnClickedDown();
	afx_msg void OnBnClickedReset();
};
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////



























