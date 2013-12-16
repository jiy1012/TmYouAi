//
//  MainMenu.cpp
//  TmYouAi
//
//  Created by liuyi on 13-11-11.
//
//

#include "MainMenu.h"
#include "HeaderLayer.h"
#include "MenuLayer.h"

USING_NS_CC;
USING_NS_CC_EXT;
//
//std::string MainMenu::m_titleString[16] = {"姜","尼","玛","太","监","历","险","记","J","B","龙","是","个","大","S","B"};
std::string MainMenu::m_titleString[16] = {"多","玩","超","级","星","期","天","群","chan","和","老","贱","是","好","基","友"};
MainMenu::MainMenu()
: m_mainMenuControl1(NULL)
, m_mainMenuControl2(NULL)
, m_mainMenuControl3(NULL)
{
}

MainMenu::~MainMenu()
{
    CC_SAFE_DELETE(m_mainMenuControl1);
    CC_SAFE_DELETE(m_mainMenuControl2);
    CC_SAFE_DELETE(m_mainMenuControl3);
    
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
//    CCLOG("%s","MainMenu onAssignCCBMemberVariable");
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable1", CCLabelTTF*, m_lable[0]);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable2", CCLabelTTF*, m_lable[1]);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable3", CCLabelTTF*, m_lable[2]);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable4", CCLabelTTF*, m_lable[3]);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable5", CCLabelTTF*, m_lable[4]);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable6", CCLabelTTF*, m_lable[5]);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable7", CCLabelTTF*, m_lable[6]);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable8", CCLabelTTF*, m_lable[7]);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable9", CCLabelTTF*, m_lable[8]);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable10", CCLabelTTF*, m_lable[9]);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable11", CCLabelTTF*, m_lable[10]);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable12", CCLabelTTF*, m_lable[11]);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable13", CCLabelTTF*, m_lable[12]);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable14", CCLabelTTF*, m_lable[13]);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable15", CCLabelTTF*, m_lable[14]);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_lable16", CCLabelTTF*, m_lable[15]);
    
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_mainMenuControl1", CCControlButton*, this->m_mainMenuControl1);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_mainMenuControl2", CCControlButton*, this->m_mainMenuControl2);
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "m_mainMenuControl3", CCControlButton*, this->m_mainMenuControl3);
    return false;
}


SEL_CCControlHandler MainMenu::onResolveCCBCCControlSelector(CCObject *pTarget, const char *pSelectorName)
{
//    CCLOG("%s","MainMenu onResolveCCBCCControlSelector");
    CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this, "onMainMenuControl1Click", MainMenu::onMainMenuControl1Click);
    CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this, "onMainMenuControl2Click", MainMenu::onMainMenuControl2Click);
    CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this, "onMainMenuControl3Click", MainMenu::onMainMenuControl3Click);
    return NULL;
}

SEL_MenuHandler MainMenu::onResolveCCBCCMenuItemSelector(CCObject *pTarget, const char *pSelectorName)
{
//    CCLOG("%s","MainMenu onResolveCCBCCMenuItemSelector");
    return NULL;
}

SEL_CallFuncN MainMenu::onResolveCCBCCCallFuncSelector(CCObject * pTarget, const char * pSelectorName)
{
//    CCLOG("%s","MainMenu onResolveCCBCCCallFuncSelector");
    return NULL;
}
void MainMenu::onNodeLoaded(CCNode * pNode, CCNodeLoader * pNodeLoader)
{
    CCLOG("%s","MainMenu all loaded");

}

void MainMenu::openTest(const char * pCCBFileName, const char * pCCNodeName, cocos2d::extension::CCNodeLoader * pCCNodeLoader)
{
    CCLOG("%s %s","MainMenu openTest",pCCBFileName);
    CCScene *scene = CCScene::create();
    
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    
    lib->registerCCNodeLoader("Header.ccbi", HeaderLayerLoader::loader());
    lib->registerCCNodeLoader(pCCNodeName, pCCNodeLoader);
    
    CCBReader *reader = new CCBReader(lib);
    CCNode *node = reader->readNodeGraphFromFile(pCCBFileName, this);
    reader->autorelease();
    
    if (node != NULL)
    {
        scene->addChild(node);
    }
    
    CCDirector::sharedDirector()->pushScene(scene);
}


//quit button
void MainMenu::onMainMenuControl1Click(CCObject *pSender, CCControlEvent pCCControlEvent)
{
    CCLOG("%s","MainMenu onMainMenuControl1Click");
    CCDirector::sharedDirector()->end();
    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
//start button
void MainMenu::onMainMenuControl2Click(CCObject *pSender, CCControlEvent pCCControlEvent)
{
    CCLOG("%s","MainMenu onMainMenuControl2Click");
    for (int i=0; i<16; i++) {
        m_lable[i]->setString(m_titleString[i].c_str());
    }
}
//bak button
void MainMenu::onMainMenuControl3Click(CCObject *pSender, CCControlEvent pCCControlEvent)
{
    CCLOG("%s","MainMenu onMainMenuControl3Click");
//    for (int i=0; i<8; i++) {
//        m_lable[i]->setString("");
//    }
//    m_title = 0;
    this->openTest("Menus.ccbi", "MenuLayer", MenuLayerLoader::loader());
//    this->openTest("Menus.ccbi", "MenuLayer", MenuLayerLoader::loader());
}