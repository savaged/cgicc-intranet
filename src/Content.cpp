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
    string href;
    if (link.rfind("http", 0) == 0)
    {
        href = link;
    }
    else
    {
        href = "TODO website server and route" + link;
    }
    cout << a(text).set("href", link) << endl;
}

// TODO add dumpH2 that takes an A element to nest
