#include "HtmlDoc.h"

using namespace std;
using namespace cgicc;

void HtmlDoc::dumpHead()
{
    cout << HTTPHTMLHeader() << endl;
    cout << HTMLDoctype(HTMLDoctype::eStrict) << endl;
    cout << html() << endl;
    cout << head(title(HtmlDoc::_titleText)) << endl;
    cout << body() << endl;
}

void HtmlDoc::dumpTail()
{
    cout << body() << endl;
    cout << html() << endl;
}

void HtmlDoc::dump()
{
    dumpHead();
    _content->dump();
    dumpTail();
}
