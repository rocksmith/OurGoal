#ifndef __OG_EXTTYPE_H__
#define __OG_EXTTYPE_H__

typedef SYSTEMTIME S_OGTime;
void OGGetTime(S_OGTime& tm);




//////////////////////////////////////////////////////////////////////////
//implementation
inline void OGGetTime( S_OGTime& tm )
{
    GetSystemTime(&tm);
}

#endif//__OG_EXTTYPE_H__