#ifndef __OG_EXTTYPE_H__
#define __OG_EXTTYPE_H__

typedef SYSTEMTIME OGTime;
void OGGetTime(OGTime& tm);




//////////////////////////////////////////////////////////////////////////
//implementation
inline void OGGetTime( OGTime& tm )
{
    GetSystemTime(&tm);
}

#endif//__OG_EXTTYPE_H__