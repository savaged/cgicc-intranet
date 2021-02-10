#include <iostream>
#include <vector>  
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 

#include <cgicc/CgiDefs.h> 
#include <cgicc/Cgicc.h> 
#include <cgicc/HTTPHTMLHeader.h> 
#include <cgicc/HTMLClasses.h>  

#include "HtmlTagWriter.h"

using namespace std;
using namespace cgicc;

int main () 
{
    Cgicc formData;
    
    outputStandardDocTop();

    cout << "<h1>\n";

    form_iterator fi = formData.getElement("action");  
    if(!fi->isEmpty() && fi != (*formData).end()) 
    {  
        cout << "Action requested: " << **fi << endl;  
    }
    else
    {
        cout << "Default" << endl;  
    }
    
    cout << "</h1>\n";
    
	outputStandardDocTail();
    
    return 0;
}
