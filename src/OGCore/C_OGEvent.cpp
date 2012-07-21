#include "StdAfx.h"
#include "C_OGEvent.h"
#include "OGCore/OGCoreType.h"

C_OGEvent::C_OGEvent( const OGTime& tmCreate )
:C_OGCoreObject(OGString(STR_CORETYPE_EVENT), tmCreate)
{

}

C_OGEvent::~C_OGEvent(void)
{
}
