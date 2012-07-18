#ifndef __OG_BASETYPE_H__
#define __OG_BASETYPE_H__

#ifdef _WIN32
typedef TCHAR            OGChar;
typedef char             OGInt8;
typedef short            OGInt16;
typedef int              OGInt32;
typedef __int64          OGInt64;

typedef unsigned char    OGUint8;
typedef unsigned short   OGUint16;
typedef unsigned int     OGUint32;
typedef unsigned __int64 OGUint64;

typedef void             OGVoid;
//BOOL Type
typedef int              OGBool;
#define OG_FALSE         0
#define OG_TRUE          1
#define OG_NULL          ((void*)(0))
//Result Type
typedef int              OGResult;
#define OG_S_OK          1
#define OG_S_FALSE       0
#define OG_E_FAIL        -1
#define OG_FAILED(ogr)   ((ogr) < 0)
#define OG_SUCCEED(ogr)  ((ogr) >= 0)

//Character type
#include <string>
typedef std::basic_string<OGChar, std::char_traits<OGChar>, std::allocator<OGChar> >    OGString;
#include <tchar.h>
#define OGStrCmp _tcscmp
#define OGStriCmp _tcsicmp
#endif//_WIN32

#endif //__OG_BASETYPE_H__