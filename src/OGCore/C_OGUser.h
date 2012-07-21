#pragma once
#include "c_ogcoreobject.h"

class C_OGUser :
    public C_OGCoreObject
{
public:
    C_OGUser(const OGTime& tmCreate);
    virtual ~C_OGUser(void);
};
