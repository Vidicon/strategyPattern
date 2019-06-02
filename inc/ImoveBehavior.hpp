#ifndef IMOVEBEHAVIOR
#define IMOVEBEHAVIOR

#include <string>
class ImoveBehavior
{
public:
    ImoveBehavior(){}
    virtual ~ImoveBehavior(){}
    virtual void Move() = 0;
    virtual std::string ToString() = 0;
};

#endif