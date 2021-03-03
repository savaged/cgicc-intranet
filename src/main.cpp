#include <iostream>
#include <vector>  
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 

#include <cgicc/CgiDefs.h> 
#include <cgicc/Cgicc.h> 
#include <cgicc/HTTPHTMLHeader.h> 
#include <cgicc/HTMLClasses.h>  

#include <HtmlDoc.h>
#include <Index.h>
#include <PageOne.h>

int main() 
{
    Cgicc cgi;
    string page;

    form_iterator fi = cgi.getElement("page");  
    if (!fi->isEmpty() && fi != (*cgi).end()) 
    {  
        page = **fi;  
    }
    else
    {
        page = "index";  
    }
    
    Content *content;

    // TODO change this for a factory
    if (page == "1")
    {
        content = new PageOne();
    }
    else
    {
        content = new Index();
    }
    HtmlDoc *doc = new HtmlDoc("savaged", content);
    doc->dump();

    delete doc;

    return 0;
}
