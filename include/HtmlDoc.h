#ifndef HTML_DOC_H
#define HTML_DOC_H

#include <iostream>
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 
#include <string>

#include <cgicc/CgiDefs.h> 
#include <cgicc/Cgicc.h> 
#include <cgicc/HTTPHTMLHeader.h> 
#include <cgicc/HTMLClasses.h>  

#include "Content.h"

class HtmlDoc
{
private:
    string _titleText;
    Content* _content;

    void dumpHead();
    void dumpTail();


public:
    HtmlDoc(const string &titleText, Content *content)
    {
        _titleText = titleText;
        _content = content;
    }

    ~HtmlDoc()
    {
        // TODO figure out how to this (and if its needed) delete _content; _content = 0;
    }

    void dump();

};

#endif

