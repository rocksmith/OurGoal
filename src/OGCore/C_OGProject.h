#pragma once
#include "c_ogcoreobject.h"

class C_OGProject :
    public C_OGCoreObject
{
public:
    C_OGProject(const OGTime& tmCreate);
    virtual ~C_OGProject(void);
};
