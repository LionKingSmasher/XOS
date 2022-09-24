#ifndef __XDRIVER_DEVICE_HPP__
#define __XDRIVER_DEVICE_HPP__

#include "xdriver_type.h"
#include "xdriver_string.h"

namespace XDriver {

class XDriverDevice {
private:
    MemoryAddr address; // Memory Address
public:
    virtual int start();
    virtual int write();
    virtual int end();
};

};

#endif