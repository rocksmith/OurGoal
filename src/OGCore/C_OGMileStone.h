#pragma once
#include "c_ogcoreobject.h"

class C_OGMileStone :
    public C_OGCoreObject
{
public:
    C_OGMileStone(const OGTime& tmCreate);
    virtual ~C_OGMileStone(void);
};
