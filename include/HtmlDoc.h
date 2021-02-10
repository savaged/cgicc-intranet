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

class HtmlDoc
{
private:
    void writeHead();

    void writeTail();

public:
    HtmlDoc()
    {
        writeHead();
    };

    ~HtmlDoc()
    {
        writeTail();
    };

    void writeH1(const std::string& text);

};

#endif

