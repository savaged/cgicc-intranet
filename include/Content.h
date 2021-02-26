#ifndef CONTENT_H
#define CONTENT_H

using namespace std;
using namespace cgicc;

class Content 
{
public:
    // TODO figure out if this is needed virtual ~Content() { };
    virtual void dump() = 0;

protected:
    void dumpH1(const string &text);
    void dumpA(
            const string &link,
            const string &text);
};

#endif


