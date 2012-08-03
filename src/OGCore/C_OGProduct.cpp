#include "StdAfx.h"
#include "C_OGProduct.h"
#include "OGCore/OGCoreType.h"

C_OGProduct::C_OGProduct()
:C_OGCoreObject(STR_CORETYPE_PRODUCT)
{
    AddPropertyStr(_T("Name"), _T(""));
    AddPropertyStr(_T("Description"), _T(""));
    AddPropertyStr(_T("Version"), _T(""));
}

C_OGProduct::~C_OGProduct(void)
{
}
