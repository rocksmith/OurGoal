#ifndef __OG_CORETYPE_H__
#define __OG_CORETYPE_H__


typedef struct tagOGLINK
{
	//TODO: other property

}S_OGLink;

typedef struct tagOGUSER
{
	OGTString strName;
	//TODO: other property
}S_OGUser;

typedef struct tagOGPLAN
{
	OGTString strDescription;
	S_OGDate startDate;
	S_OGDate endDate;
	S_OGUser* pUser;
}S_OGPlan;

typedef struct tagOGPLANS
{
	OGTString strDescription;
	S_OGLink* pLinkInfo;
	S_OGPlan* 

}S_OGPlans;
#endif//__OG_CORETYPE_H__