//
//  MenuLayer.cpp
//  TmYouAi
//
//  Created by liuyi on 13-12-13.
//
//

#include "MenuLayer.h"

MenuLayer::MenuLayer()
: m_menuControl1(NULL)
, m_menuControl2(NULL)
, m_menuControl3(NULL)
, hideUnlock(0)
{}

MenuLayer::~MenuLayer()
{
    CC_SAFE_DELETE(m_menuControl1);
    CC_SAFE_DELETE(m_menuControl2);
    CC_SAFE_DELETE(m_menuControl3);
}

bool MenuLayer::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{
//    CCLOG("%s","MenuLayer onAssignCCBMemberVariable");
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_menuControl1", CCControlButton*, this->m_menuControl1);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_menuControl2", CCControlButton*, this->m_menuControl2);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_menuControl3", CCControlButton*, this->m_menuControl3);
    return false;
}

SEL_MenuHandler MenuLayer::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
//    CCLOG("%s","MenuLayer onResolveCCBCCMenuItemSelector");
    return NULL;
}

void MenuLayer::onNodeLoaded(CCNode * pNode, CCNodeLoader * pNodeLoader)
{
    CCLOG("%s","MenuLayer all loaded");
    
}

SEL_CCControlHandler MenuLayer::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
//    CCLOG("%s","MenuLayer onResolveCCBCCControlSelector");
    CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this, "onMenusControl1Click", MenuLayer::onMenusControl1Click);
    CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this, "onMenusControl2Click", MenuLayer::onMenusControl2Click);
    CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this, "onMenusControl3Click", MenuLayer::onMenusControl3Click);
    return NULL;
}

void MenuLayer::onMenusControl1Click(cocos2d::CCObject *pSender)
{
    hideUnlock++;
    if (20 == hideUnlock) {
        CCLOG("%s","unlock liuyi");
    }
    CCLOG("MenuLayer::onMenusControl1Click unlock %d",hideUnlock);
}

void MenuLayer::onMenusControl2Click(cocos2d::CCObject *pSender)
{
    CCLOG("MenuLayer::onMenusControl2Click %s"," ");
}

void MenuLayer::onMenusControl3Click(cocos2d::CCObject *pSender)
{
    CCLOG("MenuLayer::onMenusControl3Click %s"," ");
}