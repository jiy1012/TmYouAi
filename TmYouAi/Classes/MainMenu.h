//
//  MainMenu.h
//  TmYouAi
//
//  Created by liuyi on 13-11-11.
//
//

#ifndef __TmYouAi__MainMenu__
#define __TmYouAi__MainMenu__


#include "cocos-ext.h"
#include "cocos2d.h"

USING_NS_CC;
USING_NS_CC_EXT;

class MainMenu
: public CCLayer
, public CCBMemberVariableAssigner
, public CCBSelectorResolver
, public CCNodeLoaderListener
{
public:
    MainMenu();
    ~MainMenu();
    
    static CCScene* scene();
    
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(MainMenu, create);
    //关联变量
    virtual bool onAssignCCBMemberVariable(CCObject* pTarget, const char* pMemberVariableName, CCNode* pNode);
    //绑定菜单
    virtual SEL_MenuHandler onResolveCCBCCMenuItemSelector(CCObject * pTarget, const char* pSelectorName);
    //绑定按钮
    virtual SEL_CCControlHandler onResolveCCBCCControlSelector(CCObject * pTarget, const char* pSelectorName);
    //绑定回调
    virtual SEL_CallFuncN onResolveCCBCCCallFuncSelector(CCObject * pTarget, const char * pSelectorName);
    ////节点读取完成时附加操作
    virtual void onNodeLoaded(CCNode * pNode, CCNodeLoader * pNodeLoader);
    
    void onMainMenuControl1Click(CCObject *pSender, CCControlEvent pCCControlEvent);
    void onMainMenuControl2Click(CCObject *pSender, CCControlEvent pCCControlEvent);
    void onMainMenuControl3Click(CCObject *pSender, CCControlEvent pCCControlEvent);

    void openTest(const char * pCCBFileName, const char * pCCNodeName = NULL, cocos2d::extension::CCNodeLoader * pCCNodeLoader = NULL);

private:
    CCLabelTTF *m_lable[16];
    CCControlButton *m_mainMenuControl1;
    CCControlButton *m_mainMenuControl2;
    CCControlButton *m_mainMenuControl3;
    
    static std::string m_titleString[16];
};


class MainMenuLayerLoader : public CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(MainMenuLayerLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(MainMenu);
};

#endif /* defined(__TmYouAi__MainMenu__) */
