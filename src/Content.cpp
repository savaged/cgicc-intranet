#include <Content.h>

void Content::dumpH1(string text)
{
    cout << h1(text) << endl;
}

void Content::dumpH2(string text)
{
    cout << h2(text) << endl;
}

void Content::dumpBR()
{
    cout << br() << endl;
}

void Content::dumpA(
        string link, 
        string text)
{
    cout << a(text).set("href", link) << endl;
}

string Content::getA(
        string link, 
        string text)
{
    string aStart = "<a href=\"";
    string aMiddle = "\">";
    string aEnd = "</a>";
    string href;
    if (link.rfind("http", 0) == 0)
    {
        href = link;
    }
    else
    {
        href = "TODO website server and route" + link;
    }
    return aStart + href + aMiddle + text + aEnd;
}

