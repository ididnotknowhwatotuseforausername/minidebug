#ifndef __MINIDEBUG
#define __MINIDEBUG

#include <stdio.h> // string formatting

// Parse an absolute path into a filename such as MyFile.cpp
const char* __GetBaseFileName(
    const char* File_Macro
);

// A more conventional way to get the source file line this func is called on
unsigned int __GetCurrentLine(
    unsigned int Line
);

void DebugCout(
    const char* Message,
    const char* FIleName,
    unsigned int Line
);
