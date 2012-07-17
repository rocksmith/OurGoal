#pragma once
#include "C_OGCoreObject.h"

class C_OGCoreFactory
{
public:
    C_OGCoreFactory(void);
    virtual ~C_OGCoreFactory(void);
    C_OGCoreObject* CreateObject(const OGString& strType);
};
