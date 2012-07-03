#ifndef __OG_CORETYPE_H__
#define __OG_CORETYPE_H__


typedef struct tagOGLINK
{
	//TODO: other property

}S_OGLink;

typedef struct tagOGUSER
{
	OGString strName;
	//TODO: other property
}S_OGUser;

typedef struct tagOGPLAN
{
	OGString strDescription;
	S_OGTime tmStart;
	S_OGTime tmEnd;
}S_OGPlan;

typedef struct tagOGProject
{
    OGString strProjectName;
    S_OGTime tmCreate;
}S_OGProject;

typedef struct tagOGPLANS
{
    OGString strDescription;
    S_OGLink* pLinkInfo;
    S_OGPlan* 

}S_OGPlans;
typedef struct tagProjectContainer
{
    S_OGProject* 
};
#endif//__OG_CORETYPE_H__