#include "StdAfx.h"
#include "C_OGCoreObject.h"

C_OGCoreObject::C_OGCoreObject(const OGString& strType, const OGTime& tmCreate )
{
    m_strType = strType;
    m_tmCreate = tmCreate;
}

C_OGCoreObject::~C_OGCoreObject(void)
{
    UINT i = 0;
    for (i = 0; i < m_ProplistInt.size(); ++i)
    {
        delete m_ProplistInt[i];
    }
    m_ProplistInt.clear();
    for (i = 0; i < m_ProplistStr.size(); ++i)
    {
        delete m_ProplistStr[i];
    }
    m_ProplistStr.clear();
    for (i = 0; i < m_ProplistTime.size(); ++i)
    {
        delete m_ProplistTime[i];
    }
    m_ProplistTime.clear();
    for (i = 0; i < m_ProplistFloat.size(); ++i)
    {
        delete m_ProplistFloat[i];
    }
    m_ProplistFloat.clear();
}

OGBool C_OGCoreObject::AddPropertyInt( const OGString& strName, const OGInt32& iDefault )
{
    for (UINT i = 0; i < m_ProplistInt.size(); ++i)
    {
        if (0 == OGStriCmp(strName.c_str(), m_ProplistInt[i]->strName.c_str()))
        {
            return OG_FALSE;
        }
    }
    SIntProp* prop = new SIntProp();
    prop->strName = strName;
    prop->iDefVal = iDefault;
    prop->iVal = iDefault;
    m_ProplistInt.push_back(prop);
    return OG_TRUE;
}

OGBool C_OGCoreObject::AddPropertyStr( const OGString& strName, const OGString& strDefault )
{
    for (UINT i = 0; i < m_ProplistStr.size(); ++i)
    {
        if (0 == OGStriCmp(strName.c_str(), m_ProplistStr[i]->strName.c_str()))
        {
            return OG_FALSE;
        }
    }
    SStrProp* prop = new SStrProp();
    prop->strName = strName;
    prop->strDefVal = strDefault;
    prop->strVal = strDefault;
    m_ProplistStr.push_back(prop);
    return OG_TRUE;
}

OGBool C_OGCoreObject::AddPropertyTime( const OGString& strName, const OGTime& tmDefault )
{
    for (UINT i = 0; i < m_ProplistTime.size(); ++i)
    {
        if (0 == OGStriCmp(strName.c_str(), m_ProplistTime[i]->strName.c_str()))
        {
            return OG_FALSE;
        }
    }
    STmProp* prop = new STmProp();
    prop->strName = strName;
    prop->tmDefVal = tmDefault;
    prop->tmVal = tmDefault;
    m_ProplistTime.push_back(prop);
    return OG_TRUE;
}

OGBool C_OGCoreObject::AddPropertyFloat( const OGString& strName, const OGFloat& fDefault )
{
    for (UINT i = 0; i < m_ProplistFloat.size(); ++i)
    {
        if (0 == OGStriCmp(strName.c_str(), m_ProplistFloat[i]->strName.c_str()))
        {
            return OG_FALSE;
        }
    }
    SFloatProp* prop = new SFloatProp();
    prop->strName = strName;
    prop->fDefVal = fDefault;
    prop->fVal = fDefault;
    m_ProplistFloat.push_back(prop);
    return OG_TRUE;
}

OGBool C_OGCoreObject::SetPropertyInt( const OGString& strName, const OGInt32& iVal )
{
    SIntProp* pProp = NULL;
    for (UINT i = 0; i < m_ProplistInt.size(); ++i)
    {
        if (0 == OGStriCmp(strName.c_str(), m_ProplistInt[i]->strName.c_str()))
        {
            pProp = m_ProplistInt[i];
            break;
        }
    }
    if (pProp == OG_NULL)
    {
        return OG_FALSE;
    }
    pProp->iVal = iVal;
    return OG_TRUE;
}

OGBool C_OGCoreObject::SetPropertyStr( const OGString& strName, const OGString& strVal )
{
    SStrProp* pProp = OG_NULL;
    for (UINT i = 0; i < m_ProplistStr.size(); ++i)
    {
        if (0 == OGStriCmp(strName.c_str(), m_ProplistStr[i]->strName.c_str()))
        {
            pProp = m_ProplistStr[i];
            break;
        }
    }
    if (pProp == OG_NULL)
    {
        return OG_FALSE;
    }
    pProp->strVal = strVal;
    return OG_TRUE;
}

OGBool C_OGCoreObject::SetPropertyTime( const OGString& strName, const OGTime& tmVal )
{
    STmProp* pProp = OG_NULL;
    for (UINT i = 0; i < m_ProplistTime.size(); ++i)
    {
        if (0 == OGStriCmp(strName.c_str(), m_ProplistTime[i]->strName.c_str()))
        {
            pProp = m_ProplistTime[i];
            break;
        }
    }
    if (pProp == OG_NULL)
    {
        return OG_FALSE;
    }
    pProp->tmVal = tmVal;
    return OG_TRUE;
}

OGBool C_OGCoreObject::SetPropertyFloat( const OGString& strName, const OGFloat& fVal )
{
    SFloatProp* pProp = OG_NULL;
    for (UINT i = 0; i < m_ProplistFloat.size(); ++i)
    {
        if (0 == OGStriCmp(strName.c_str(), m_ProplistFloat[i]->strName.c_str()))
        {
            pProp = m_ProplistFloat[i];
            break;
        }
    }
    if (pProp == OG_NULL)
    {
        return OG_FALSE;
    }
    pProp->fVal = fVal;
    return OG_TRUE;
}

OGBool C_OGCoreObject::GetPropertyInt( const OGString& strName, OGInt32& iVal )
{
    SIntProp* pProp = OG_NULL;
    for (UINT i = 0; i < m_ProplistInt.size(); ++i)
    {
        if (0 == OGStriCmp(strName.c_str(), m_ProplistInt[i]->strName.c_str()))
        {
            pProp = m_ProplistInt[i];
            break;
        }
    }
    if (pProp == OG_NULL)
    {
        return OG_FALSE;
    }
    iVal = pProp->iVal;
    return OG_TRUE;
}

OGBool C_OGCoreObject::GetPropertyStr( const OGString& strName, OGString& strVal )
{
    SStrProp* pProp = OG_NULL;
    for (UINT i = 0; i < m_ProplistStr.size(); ++i)
    {
        if (0 == OGStriCmp(strName.c_str(), m_ProplistStr[i]->strName.c_str()))
        {
            pProp = m_ProplistStr[i];
            break;
        }
    }
    if (pProp == OG_NULL)
    {
        return OG_FALSE;
    }
    strVal = pProp->strVal;
    return OG_TRUE;
}

OGBool C_OGCoreObject::GetPropertyTime( const OGString& strName, OGTime& tmVal )
{
    STmProp* pProp = OG_NULL;
    for (UINT i = 0; i < m_ProplistTime.size(); ++i)
    {
        if (0 == OGStriCmp(strName.c_str(), m_ProplistTime[i]->strName.c_str()))
        {
            pProp = m_ProplistTime[i];
            break;
        }
    }
    if (pProp == OG_NULL)
    {
        return OG_FALSE;
    }
    tmVal = pProp->tmVal;
    return OG_TRUE;
}

OGBool C_OGCoreObject::GetPropertyFloat( const OGString& strName, OGFloat& fVal )
{
    SFloatProp* pProp = OG_NULL;
    for (UINT i = 0; i < m_ProplistFloat.size(); ++i)
    {
        if (0 == OGStriCmp(strName.c_str(), m_ProplistFloat[i]->strName.c_str()))
        {
            pProp = m_ProplistFloat[i];
            break;
        }
    }
    if (pProp == OG_NULL)
    {
        return OG_FALSE;
    }
    fVal = pProp->fVal;
    return OG_TRUE;
}
