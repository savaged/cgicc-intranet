#ifndef CONTENT_H
#define CONTENT_H

#include <iostream>
#include <string>

#include <cgicc/CgiDefs.h> 
#include <cgicc/Cgicc.h> 
#include <cgicc/HTTPHTMLHeader.h> 
#include <cgicc/HTMLClasses.h>  

using namespace std;
using namespace cgicc;

class Content 
{
public:
    virtual void dump() = 0;

protected:
    void dumpH1(const string &text);
    void dumpA(
            const string &link,
            const string &text);
};

#endif


