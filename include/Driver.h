#ifndef DRIVER_H
#define DRIVER_H

#include "Personal.h"

const float WORK_TIME_DRIVER = 6;
const float PAYMENT_DRIVER = 1000;
const int NUMBER_OF_DRIVER = 4;

class DriverCreator;

class Driver : public Personal{
    friend DriverCreator;
protected:
    float worktime;
    Driver(int _id, std::string _name, float _payment, float _worktime) :
        Personal(_id, _name, _payment), worktime(_worktime){}
    Driver(){}
public:

    ~Driver();

    void print() const;
};

#endif // DRIVER_H
