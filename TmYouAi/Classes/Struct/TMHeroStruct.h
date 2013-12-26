//
//  TMHeroStruct.h
//  TmYouAi
//
//  Created by liuyi on 13-12-17.
//
//

#ifndef __TmYouAi__TMHeroStruct__
#define __TmYouAi__TMHeroStruct__

#include "cocos-ext.h"
#include "cocos2d.h"

USING_NS_CC;
USING_NS_CC_EXT;
using namespace std;

class TMHeroStruct : public cocos2d::CCObject
{
public:
    virtual bool init();
    
    CREATE_FUNC(TMHeroStruct);
	void setData(CCDictionary* pDictData);
    
public:
    //id
    int heroid;
    //名字
    string name;
    //攻击
    int attack;
    //防御
    int defense;
    //爆击
    int crit;
    
};

#endif /* defined(__TmYouAi__TMHeroStruct__) */
