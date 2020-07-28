
// IDMarkz-LiteView.h : interface of the CIDMarkzLiteView class
//

#pragma once


class CIDMarkzLiteView : public CView
{
protected: // create from serialization only
	CIDMarkzLiteView() noexcept;
	DECLARE_DYNCREATE(CIDMarkzLiteView)

// Attributes
public:
	CIDMarkzLiteDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CIDMarkzLiteView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in IDMarkz-LiteView.cpp
inline CIDMarkzLiteDoc* CIDMarkzLiteView::GetDocument() const
   { return reinterpret_cast<CIDMarkzLiteDoc*>(m_pDocument); }
#endif

