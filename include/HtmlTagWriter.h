#ifndef HTML_TAG_WRITER_H
#define HTML_TAG_WRITER_H

#include <iostream>
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 

#include <cgicc/CgiDefs.h> 
#include <cgicc/Cgicc.h> 
#include <cgicc/HTTPHTMLHeader.h> 
#include <cgicc/HTMLClasses.h>  

void outputStandardDocTop();
void outputStandardDocTail();

void outputH1Start();
void outputH1End();

#endif
