#ifndef IEATBEHAVIOR
#define IEATBEHAVIOR

#include <string>
class IeatBehavior
{
public:
    IeatBehavior(){}
    virtual ~IeatBehavior(){}
    virtual void Eat() = 0;
    virtual std::string ToString() = 0;
};
#endif