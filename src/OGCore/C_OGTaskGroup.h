#pragma once
#include "c_ogcoreobject.h"

class C_OGTaskGroup :
    public C_OGCoreObject
{
public:
    C_OGTaskGroup(const OGTime& tmCreate);
    virtual ~C_OGTaskGroup(void);
};
