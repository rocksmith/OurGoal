#pragma once
#include "c_ogcoreobject.h"

class C_OGProductGroup :
    public C_OGCoreObject
{
public:
    C_OGProductGroup(const OGTime& tmCreate);
    virtual ~C_OGProductGroup(void);
};
