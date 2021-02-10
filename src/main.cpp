#include <iostream>
#include <vector>  
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 

#include <cgicc/CgiDefs.h> 
#include <cgicc/Cgicc.h> 
#include <cgicc/HTTPHTMLHeader.h> 
#include <cgicc/HTMLClasses.h>  

#include "HtmlDoc.h"

using namespace std;
using namespace cgicc;

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
    
    HtmlDoc doc = HtmlDoc("savaged");

    if (page == "1")
    {
        doc.writeH1("TODO create page 1");
    }
    else
    {
        doc.writeH1("TODO create index");
    }

    return 0;
}
