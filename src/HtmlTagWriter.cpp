#include "HtmlTagWriter.h"

using namespace std;
using namespace cgicc;

void outputStandardDocTop()
{
    cout << HTTPHTMLHeader() << endl;
    cout << head(title("Intranet")) << endl;
    cout << body() << endl;
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

