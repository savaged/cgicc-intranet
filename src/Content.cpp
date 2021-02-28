#include <Content.h>

void Content::dumpH1(const string &text)
{
    cout << h1(text) << endl;
}

void Content::dumpA(
        const string &link, 
        const string &text)
{
    cout << a(text).set("href", link) << endl;
}

