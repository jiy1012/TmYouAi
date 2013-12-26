//
//  TMHeroStruct.cpp
//  TmYouAi
//
//  Created by liuyi on 13-12-17.
//
//

#include "TMHeroStruct.h"

void TMHeroStruct::setData(CCDictionary* pDictData)
{
    heroid = pDictData->valueForKey("id")->intValue();
    name = pDictData->valueForKey("name")->getCString();
    attack = pDictData->valueForKey("attack")->intValue();
    defense = pDictData->valueForKey("defense")->intValue();
    crit = pDictData->valueForKey("crit")->intValue();
}

bool TMHeroStruct::init()
{
    do {
        //id
        heroid = 0;
        //名字
        name = "";
        //攻击
        attack = 0;
        //防御
        defense = 0;
        //爆击
        crit = 0;
        
    } while (0);
    
    return true;
}