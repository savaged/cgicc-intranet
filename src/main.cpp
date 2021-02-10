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

int main () 
{
    Cgicc cgi;
    
    string h1;

    form_iterator fi = cgi.getElement("action");  
    if(!fi->isEmpty() && fi != (*cgi).end()) 
    {  
        h1 = "Action requested: " + **fi;  
    }
    else
    {
        h1 = "Default";  
    }
    
    HtmlDoc doc;
    doc.writeH1(h1);
    
    return 0;
}
