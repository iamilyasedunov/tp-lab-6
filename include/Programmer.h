#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "Engineer.h"
#include <fstream>

const int NUMBER_OF_PPROGRAMMER = 8;
const std::string NONE = "";

class Programmer : public Engineer{
protected:
    float worktime;

    std::string language = NONE;
public:
    Programmer(int _id, std::string _name, float _payment, float _worktime) :
        Engineer(_id, _name, _payment),
        worktime(_worktime){}

    ~Programmer();

    void print() const;

    virtual void set_technology(PROJECT P){
        this->language = P.project_language;
    }

    std::vector<Programmer> create();
};
#endif // PROGRAMMER_H
