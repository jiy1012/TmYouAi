//
//  XmlConfig.h
//  TmYouAi
//
//  Created by liuyi on 13-12-16.
//
//

#ifndef __TmYouAi__XmlConfig__
#define __TmYouAi__XmlConfig__

//#include <vector>
//#include <string>
//#include <map>

#include "cocos-ext.h"
#include "cocos2d.h"
#include "CCXMLParser.h"

USING_NS_CC;
USING_NS_CC_EXT;
using namespace std;


class XmlConfig : public CCObject
{
    
public:
    XmlConfig();
    ~XmlConfig();
    
    static CCXMLParser* m_objXMLParser;
    //database.local.xml
    static CCXMLParser* XmlManager();
    

};













#endif /* defined(__TmYouAi__XmlConfig__) */
