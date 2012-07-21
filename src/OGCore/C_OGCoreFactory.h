#pragma once
#include "C_OGCoreObject.h"
//singleton
class C_OGCoreFactory
{
private:
    C_OGCoreFactory(void);
public://class method
    static C_OGCoreFactory* Instance();
public://object method
    virtual ~C_OGCoreFactory(void);
    C_OGCoreObject* CreateObject(const OGString& strType);
private:
    static C_OGCoreFactory* _pInstance;
};
