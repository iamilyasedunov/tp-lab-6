#ifndef CLEANER_H
#define CLEANER_H

#include "Personal.h"

const int NUMBER_OF_CLEANER = 4;



class Cleaner : public Personal{
protected:
    float worktime;
public:
    Cleaner(int _id, std::string _name, float _payment, float _worktime) :
        Personal(_id, _name, _payment),
        worktime(_worktime){}

    ~Cleaner();

    void print() const;

    std::vector<Cleaner> create();

};



#endif // CLEANER_H
