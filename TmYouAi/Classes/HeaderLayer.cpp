//
//  HeaderLayer.cpp
//  TmYouAi
//
//  Created by liuyi on 13-12-13.
//
//

#include "HeaderLayer.h"

SEL_MenuHandler HeaderLayer::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "onControlBackClick", HeaderLayer::onControlBackClick);
    
    return NULL;
}

SEL_CCControlHandler HeaderLayer::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
    return NULL;
}

void HeaderLayer::onControlBackClick(cocos2d::CCObject *pSender)
{
    CCDirector::sharedDirector()->popScene();
}