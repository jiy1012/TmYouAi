//
//  HeaderLayer.h
//  TmYouAi
//
//  Created by liuyi on 13-12-13.
//
//

#ifndef __TmYouAi__HeaderLayer__
#define __TmYouAi__HeaderLayer__

#include "cocos-ext.h"
#include "cocos2d.h"

USING_NS_CC;
USING_NS_CC_EXT;

class HeaderLayer
: public CCLayer
, public CCBSelectorResolver
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(HeaderLayer, create);
    
    virtual SEL_MenuHandler onResolveCCBCCMenuItemSelector(CCObject * pTarget, const char* pSelectorName);
    virtual SEL_CCControlHandler onResolveCCBCCControlSelector(CCObject * pTarget, const char* pSelectorName);
    
    void onControlBackClick(CCObject *pSender);
    
};

class HeaderLayerLoader : public CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(HeaderLayerLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(HeaderLayer);
};
#endif /* defined(__TmYouAi__HeaderLayer__) */
