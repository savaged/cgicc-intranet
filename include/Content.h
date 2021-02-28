#ifndef CONTENT_H
#define CONTENT_H

using namespace std;
using namespace cgicc;

class Content 
{
public:
    virtual void dump();

protected:
    void dumpH1(const string &text);
    void dumpA(
            const string &link,
            const string &text);
};

#endif


