#include <iostream>
#include <vector>  
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 

#include <cgicc/CgiDefs.h> 
#include <cgicc/Cgicc.h> 
#include <cgicc/HTTPHTMLHeader.h> 
#include <cgicc/HTMLClasses.h>  

using namespace std;
using namespace cgicc;

void outputStandardDocTop()
{
    cout << "Content-type:text/html\r\n\r\n";
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<title>Intranet</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";
}

void outputStandardDocTail()
{
    cout << "</body>\n";
    cout << "</html>\n";
}

int main () 
{
    Cgicc formData;
    
    outputStandardDocTop();

    cout << "<h1>\n";

    form_iterator fi = formData.getElement("action");  
    if( !fi->isEmpty() && fi != (*formData).end()) {  
        cout << "Action requested: " << **fi << endl;  
    } else {
        cout << "Default" << endl;  
    }
    
    cout << "</h1>\n";
    
	outputStandardDocTail();
    
    return 0;
}
