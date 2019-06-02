#ifndef ISOUNDBEHAVIOR
#define ISOUNDBEHAVIOR

#include <string>
class IsoundBehavior
{
public:
    IsoundBehavior(){}
    virtual ~IsoundBehavior(){}
    virtual void Sound() = 0;
    virtual std::string ToString() = 0;
};
#endif