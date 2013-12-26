//
//  XmlConfig.cpp
//  TmYouAi
//
//  Created by liuyi on 13-12-16.
//
//

#include "XmlConfig.h"

const std::string xmlFileName = "database.local.xml";

CCXMLParser* XmlConfig::m_objXMLParser = NULL;

XmlConfig::XmlConfig()
{
    
}
XmlConfig::~XmlConfig()
{
    CC_SAFE_DELETE(m_objXMLParser);
}

CCXMLParser * XmlConfig::XmlManager()
{
    if (m_objXMLParser == NULL) {
        m_objXMLParser = CCXMLParser::parseWithFile(xmlFileName.c_str());
    }
    return m_objXMLParser;
    
    
}

