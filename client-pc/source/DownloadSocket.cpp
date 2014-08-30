// DownloadSocket.cpp : implementation file
//

#include "stdafx.h"
#include "BlueClick.h"
#include "BlueClickDlg.h"
#include "DownloadSocket.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDownloadSocket

CDownloadSocket::CDownloadSocket(CWnd *pParent)
{
	m_pParentWnd = pParent;
}

CDownloadSocket::~CDownloadSocket()
{
}

// Do not edit the following lines, which are needed by ClassWizard.
#if 0
BEGIN_MESSAGE_MAP(CDownloadSocket, CSocket)
	//{{AFX_MSG_MAP(CDownloadSocket)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()
#endif	// 0

/////////////////////////////////////////////////////////////////////////////
// CDownloadSocket member functions

void CDownloadSocket::OnReceive(int nErrorCode) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	((CBlueClickDlg*)m_pParentWnd)->ReceiveDownloadRequest(this);	
	
	//CSocket::OnReceive(nErrorCode);
}