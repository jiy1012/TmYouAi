//
//  MainMenu.cpp
//  TmYouAi
//
//  Created by liuyi on 13-11-11.
//
//

#include "MainMenu.h"



USING_NS_CC;
USING_NS_CC_EXT;

MainMenu::MainMenu()
: m_lable1(NULL)
, m_lable2(NULL)
, m_lable3(NULL)
, m_lable4(NULL)
, m_lable5(NULL)
, m_lable6(NULL)
, m_lable7(NULL)
, m_lable8(NULL)
, m_control1(NULL)
, m_control2(NULL)
, m_control3(NULL)
, m_title(0)
{}

MainMenu::~MainMenu()
{
    CC_SAFE_RELEASE(m_lable1);
    CC_SAFE_RELEASE(m_lable2);
    CC_SAFE_RELEASE(m_lable3);
    CC_SAFE_RELEASE(m_lable4);
    CC_SAFE_RELEASE(m_lable5);
    CC_SAFE_RELEASE(m_lable6);
    CC_SAFE_RELEASE(m_lable7);
    CC_SAFE_RELEASE(m_lable8);
    CC_SAFE_DELETE(m_control1);
    CC_SAFE_DELETE(m_control2);
    CC_SAFE_DELETE(m_control3);
    
}

CCScene* MainMenu::scene()
{
    CCScene *scene = CCScene::create();
    
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    
    lib->registerCCNodeLoader("MainMenu", MainMenuLayerLoader::loader());
    
    CCBReader *reader = new CCBReader(lib);
    CCNode *node = reader->readNodeGraphFromFile("MainMenu.ccbi", scene);
    reader->release();
    
    if (node!=NULL)
    {
        scene->addChild(node);
    }
        
    return scene;
}



bool MainMenu::onAssignCCBMemberVariable(CCObject *pTarget, const char *pMemberVariableName, CCNode *pNode)
{
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable1", CCLabelTTF*, this->m_lable1);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable2", CCLabelTTF*, this->m_lable2);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable3", CCLabelTTF*, this->m_lable3);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable4", CCLabelTTF*, this->m_lable4);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable5", CCLabelTTF*, this->m_lable5);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable6", CCLabelTTF*, this->m_lable6);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable7", CCLabelTTF*, this->m_lable7);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable8", CCLabelTTF*, this->m_lable8);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_control1", CCControlButton*, this->m_control1);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_control2", CCControlButton*, this->m_control2);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_control3", CCControlButton*, this->m_control3);
    return false;
}


SEL_CCControlHandler MainMenu::onResolveCCBCCControlSelector(CCObject *pTarget, const char *pSelectorName)
{
    CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this, "onControl1Click", MainMenu::onControl1Click);
    CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this, "onControl2Click", MainMenu::onControl2Click);
    CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this, "onControl3Click", MainMenu::onControl3Click);
    return NULL;
}

SEL_MenuHandler MainMenu::onResolveCCBCCMenuItemSelector(CCObject *pTarget, const char *pSelectorName)
{
    return NULL;
}

SEL_CallFuncN MainMenu::onResolveCCBCCCallFuncSelector(CCObject * pTarget, const char * pSelectorName)
{

    return NULL;
}
void MainMenu::onNodeLoaded(CCNode * pNode, CCNodeLoader * pNodeLoader)
{
    CCLOG("%s","allllllllll");

}
//quit button
void MainMenu::onControl1Click(CCObject *pSender, CCControlEvent pCCControlEvent)
{
    CCLOG("%s","control1clicked");
    CCDirector::sharedDirector()->end();
    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
//start button
void MainMenu::onControl2Click(CCObject *pSender, CCControlEvent pCCControlEvent)
{
    CCLOG("%s","control2clicked");
    if (0 == m_title)
    {
        this->m_lable1->setString("姜");
        m_title = 1;
    
    }
    else if (1 == m_title)
    {
        this->m_lable2->setString("尼");
        m_title = 2;
    }
    else if (2 == m_title)
    {
        this->m_lable3->setString("玛");
        m_title = 3;
    }
    else if (3 == m_title)
    {
        this->m_lable4->setString("太");
        m_title = 4;
    }
    else if (4 == m_title)
    {
        this->m_lable5->setString("监");
        m_title = 5;
    }
    else if (5 == m_title)
    {
        this->m_lable6->setString("历");
        m_title = 6;
    }
    else if (6 == m_title)
    {
        this->m_lable7->setString("险");
        m_title = 7;
    }
    else if (7 == m_title)
    {
        this->m_lable8->setString("记");
        m_title = 8;
    }
    else if (8 == m_title)
    {
        
    }


}
//bak button
void MainMenu::onControl3Click(CCObject *pSender, CCControlEvent pCCControlEvent)
{
    CCLOG("%s","control3clicked");
    this->m_lable1->setString("");
    this->m_lable2->setString("");
    this->m_lable3->setString("");
    this->m_lable4->setString("");
    this->m_lable5->setString("");
    this->m_lable6->setString("");
    this->m_lable7->setString("");
    this->m_lable8->setString("");
    m_title = 0;
}