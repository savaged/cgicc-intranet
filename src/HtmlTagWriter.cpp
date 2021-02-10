#include "HtmlTagWriter.h"

using namespace std;

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

void outputH1Start()
{
    cout << "<h1>\n";
}
void outputH1End()
{
    cout << "</h1>\n";
}

