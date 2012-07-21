#pragma once
#include "c_ogcoreobject.h"

class C_OGEvent :
    public C_OGCoreObject
{
public:
    C_OGEvent(const OGTime& tmCreate);
    virtual ~C_OGEvent(void);
};
