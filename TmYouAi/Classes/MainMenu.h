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
    
    void onControl1Click(CCObject *pSender, CCControlEvent pCCControlEvent);
    void onControl2Click(CCObject *pSender, CCControlEvent pCCControlEvent);
    void onControl3Click(CCObject *pSender, CCControlEvent pCCControlEvent);
    
private:
    CCLabelTTF *m_lable1;
    CCLabelTTF *m_lable2;
    CCLabelTTF *m_lable3;
    CCLabelTTF *m_lable4;
    CCLabelTTF *m_lable5;
    CCLabelTTF *m_lable6;
    CCLabelTTF *m_lable7;
    CCLabelTTF *m_lable8;
    CCControlButton *m_control1;
    CCControlButton *m_control2;
    CCControlButton *m_control3;
    int m_title;
};


class MainMenuLayerLoader : public CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(MainMenuLayerLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(MainMenu);
};

#endif /* defined(__TmYouAi__MainMenu__) */
