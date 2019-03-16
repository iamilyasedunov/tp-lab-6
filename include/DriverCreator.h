#ifndef DRIVERCREATOR_H
#define DRIVERCREATOR_H


#include "Driver.h"
#include "AbstractCreator.h"

class DriverCreator : public Driver, public AbstractCreator
{
public:
    DriverCreator(){
        this->create();
    }
    void create() override;
    ~DriverCreator(){}
};


#endif // DRIVERCREATOR_H
