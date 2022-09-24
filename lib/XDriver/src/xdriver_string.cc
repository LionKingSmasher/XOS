#include "xdriver_string.h"

using namespace XDriver;

static int string_length(const char* str) {
    int result = 0;
    char chk = 0;
    while(*str++) result++;
    return result;
}

XDriverString::XDriverString() {
    __s = new char[1];
}

XDriverString::XDriverString(const char* str) {
    
}

int XDriverString::len() {
}