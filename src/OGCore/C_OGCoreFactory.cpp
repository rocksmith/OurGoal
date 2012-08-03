#include "StdAfx.h"
#include "C_OGUser.h"
#include "C_OGCoreFactory.h"
#include "OGCore/OGCoreType.h"

C_OGCoreFactory* C_OGCoreFactory::_pInstance = NULL;

C_OGCoreFactory::C_OGCoreFactory(void)
{
}

C_OGCoreFactory::~C_OGCoreFactory(void)
{
}

C_OGCoreObject* C_OGCoreFactory::CreateObject( OGLPCSTR szType )
{
    if (OGStriCmp(szType, STR_CORETYPE_USER) == 0)
    {
        return new C_OGUser();
    }
    else if (OGStriCmp(szType, STR_CORETYPE_TASK) == 0)
    {
        //TODO:
        return (C_OGCoreObject*)OG_NULL;
    }
    else if (OGStriCmp(szType, STR_CORETYPE_TASKGROUP) == 0)
    {
        //TODO:
        return (C_OGCoreObject*)OG_NULL;
    }
    else if (OGStriCmp(szType, STR_CORETYPE_PROJECT) == 0)
    {
        //TODO:
        return (C_OGCoreObject*)OG_NULL;
    }
    else if (OGStriCmp(szType, STR_CORETYPE_PROJECTGROUP) == 0)
    {
        //TODO:
        return (C_OGCoreObject*)OG_NULL;
    }
    else if (OGStriCmp(szType, STR_CORETYPE_PRODUCT) == 0)
    {
        //TODO:
        return (C_OGCoreObject*)OG_NULL;
    }
    else if (OGStriCmp(szType, STR_CORETYPE_PRODUCTGROUP) == 0)
    {
        //TODO:
        return (C_OGCoreObject*)OG_NULL;
    }
    else if (OGStriCmp(szType, STR_CORETYPE_EVENT) == 0)
    {
        //TODO:
        return (C_OGCoreObject*)OG_NULL;
    }
    else if (OGStriCmp(szType, STR_CORETYPE_MILESTONE) == 0)
    {
        //TODO:
        return (C_OGCoreObject*)OG_NULL;
    }
    else
    {
        return (C_OGCoreObject*)OG_NULL;
    }
}

C_OGCoreFactory* C_OGCoreFactory::Instance()
{
    if (C_OGCoreFactory::_pInstance == NULL)
    {
        C_OGCoreFactory::_pInstance = new C_OGCoreFactory();
    }
    return C_OGCoreFactory::_pInstance;
}


//////////////////////////////////////////////////////////////////////////
//Cleaner
class C_OGCoreFactoryCleaner
{
public:
    C_OGCoreFactoryCleaner(){}
    ~C_OGCoreFactoryCleaner()
    {
        if (C_OGCoreFactory::Instance() != NULL)
        {
            delete C_OGCoreFactory::Instance();
        }
    }
};
static C_OGCoreFactoryCleaner g_clr;