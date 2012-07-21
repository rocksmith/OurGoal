#pragma once
#include "c_ogcoreobject.h"

class C_OGTask :
    public C_OGCoreObject
{
public:
    C_OGTask(const OGTime& tmCreate);
    virtual ~C_OGTask(void);
};
