#include <Index.h>

void Index::dump() 
{
    Content::dumpH1("Index");
    Content::dumpBR();
    Content::dumpH2(Content::getA(
                "?page=1", "Page One"));
}

