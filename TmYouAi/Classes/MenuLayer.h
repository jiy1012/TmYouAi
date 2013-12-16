//
//  MenuLayer.h
//  TmYouAi
//
//  Created by liuyi on 13-12-13.
//
//

#ifndef __TmYouAi__MenuLayer__
#define __TmYouAi__MenuLayer__

#include "cocos-ext.h"
#include "cocos2d.h"

USING_NS_CC;
USING_NS_CC_EXT;


class MenuLayer
: public CCLayer
, public CCBMemberVariableAssigner
, public CCBSelectorResolver
{
public:
    MenuLayer();
    ~MenuLayer();
    
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(MenuLayer, create);
    
    virtual bool onAssignCCBMemberVariable(CCObject* pTarget, const char* pMemberVariableName, CCNode* pNode);
    virtual SEL_MenuHandler onResolveCCBCCMenuItemSelector(CCObject * pTarget, const char* pSelectorName);
    virtual SEL_CCControlHandler onResolveCCBCCControlSelector(CCObject * pTarget, const char* pSelectorName);
    ////节点读取完成时附加操作
    virtual void onNodeLoaded(CCNode * pNode, CCNodeLoader * pNodeLoader);
        
    void onMenusControl1Click(CCObject *pSender);
    void onMenusControl2Click(CCObject *pSender);
    void onMenusControl3Click(CCObject *pSender);
    
private:
    CCControlButton *m_menuControl1;
    CCControlButton *m_menuControl2;
    CCControlButton *m_menuControl3;
    int hideUnlock;
};

class MenuLayerLoader : public CCNodeLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(MenuLayerLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(MenuLayer);
};
#endif /* defined(__TmYouAi__MenuLayer__) */
