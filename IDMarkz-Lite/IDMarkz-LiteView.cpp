
// IDMarkz-LiteView.cpp : implementation of the CIDMarkzLiteView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "IDMarkz-Lite.h"
#endif

#include "IDMarkz-LiteDoc.h"
#include "IDMarkz-LiteView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CIDMarkzLiteView

IMPLEMENT_DYNCREATE(CIDMarkzLiteView, CView)

BEGIN_MESSAGE_MAP(CIDMarkzLiteView, CView)
END_MESSAGE_MAP()

// CIDMarkzLiteView construction/destruction

CIDMarkzLiteView::CIDMarkzLiteView() noexcept
{
	// TODO: add construction code here

}

CIDMarkzLiteView::~CIDMarkzLiteView()
{
}

BOOL CIDMarkzLiteView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CIDMarkzLiteView drawing

void CIDMarkzLiteView::OnDraw(CDC* /*pDC*/)
{
	CIDMarkzLiteDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CIDMarkzLiteView diagnostics

#ifdef _DEBUG
void CIDMarkzLiteView::AssertValid() const
{
	CView::AssertValid();
}

void CIDMarkzLiteView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CIDMarkzLiteDoc* CIDMarkzLiteView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CIDMarkzLiteDoc)));
	return (CIDMarkzLiteDoc*)m_pDocument;
}
#endif //_DEBUG


// CIDMarkzLiteView message handlers
