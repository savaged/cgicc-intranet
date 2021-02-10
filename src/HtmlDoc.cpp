#include "HtmlDoc.h"

using namespace std;
using namespace cgicc;

void HtmlDoc::writeH1(const string& text)
{
    cout << h1(text) << endl;
}

void HtmlDoc::writeHead()
{
    cout << HTTPHTMLHeader() << endl;
    cout << head(title("Intranet")) << endl;
    cout << body() << endl;
}

void HtmlDoc::writeTail()
{
    cout << body() << endl;
    cout << html() << endl;
}

