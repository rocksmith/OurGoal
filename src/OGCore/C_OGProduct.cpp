#include "StdAfx.h"
#include "C_OGProduct.h"
#include "OGCore/OGCoreType.h"

C_OGProduct::C_OGProduct( const OGTime& tmCreate )
:C_OGCoreObject(OGString(STR_CORETYPE_PRODUCT), tmCreate)
{
    OGString strVal = _T("");

    OGString strName = _T("product name");
    AddPropertyStr(strName, strVal);

    strName = _T("description");
    AddPropertyStr(strName, strVal);

    strName = _T("version");
    AddPropertyStr(strName, strVal);

}

C_OGProduct::~C_OGProduct(void)
{
}
