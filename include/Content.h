#ifndef CONTENT_H
#define CONTENT_H

#include <iostream>
#include <string>

#include <cgicc/CgiDefs.h> 
#include <cgicc/Cgicc.h> 
#include <cgicc/HTMLClasses.h>  

using namespace std;
using namespace cgicc;

class Content 
{
public:
    virtual void dump() = 0;

protected:
    void dumpH1(string text);
    void dumpH2(string text);
    void dumpBR();
    void dumpA(
            string link,
            string text);
};

#endif


