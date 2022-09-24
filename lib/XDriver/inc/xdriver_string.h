#ifndef __XDRIVER_STRING_H__
#define __XDRIVER_STRING_H__
namespace XDriver {

class XDriverString {
private:
    int len;
    char* __s;
public:
    XDriverString();
    XDriverString(const char*);
    XDriverString(char*);
    XDriverString(XDriverString&);

    XDriverString& operator=(const char*);
    XDriverString& operator=(char*);
    XDriverString& operator=(XDriverString&);
    XDriverString& operator[](int);

    int len();
    int size();
};

};
#endif