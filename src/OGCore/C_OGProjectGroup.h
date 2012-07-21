#pragma once
#include "c_ogcoreobject.h"

class C_OGProjectGroup :
    public C_OGCoreObject
{
public:
    C_OGProjectGroup(const OGTime& tmCreate);
    virtual ~C_OGProjectGroup(void);
};
