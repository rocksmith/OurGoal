#pragma once
#include "c_ogcoreobject.h"

class C_OGProduct :
    public C_OGCoreObject
{
public:
    C_OGProduct(const OGTime& tmCreate);
    virtual ~C_OGProduct(void);
};
