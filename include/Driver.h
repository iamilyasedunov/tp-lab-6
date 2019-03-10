#ifndef DRIVER_H
#define DRIVER_H

#include "Personal.h"

const float WORK_TIME_DRIVER = 6;
const float PAYMENT_DRIVER = 1000;
const int NUMBER_OF_DRIVER = 4;

class Driver : public Personal{
protected:
    float worktime;
public:
    Driver(int _id, std::string _name, float _payment, float _worktime) :
        Personal(_id, _name, _payment), worktime(_worktime){}

    ~Driver();

    void print() const;

    std::vector<Driver> create();
};

#endif // DRIVER_H
