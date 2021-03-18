#ifndef standardPugiXml_main_H
#define standardPugiXml_main_H

#include <pugixml.hpp>

class XmlDocument
{
public:
	XmlDocument();
private:
	pugi::xml_document _internalDocument;
};
#endif
