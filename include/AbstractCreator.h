#ifndef CREATOR_H
#define CREATOR_H
#include "Employee.h"

class Cleaner;
class Driver;

class AbstractCreator
{
public:
    virtual ~AbstractCreator(){}

    virtual void create() = 0;

};

#endif // CREATOR_H
