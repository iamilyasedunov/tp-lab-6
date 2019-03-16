#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "Engineer.h"
#include <fstream>

const int NUMBER_OF_PPROGRAMMER = 8;
const std::string NONE = "";

class ProgrammerCreator;

class Programmer : public Engineer{
    friend ProgrammerCreator;
protected:
    float worktime;

    std::string language = NONE;
    Programmer(int _id, std::string _name, float _payment, float _worktime) :
        Engineer(_id, _name, _payment),
        worktime(_worktime){}
    Programmer(){}
public:

    ~Programmer();

    void print() const;

    virtual void set_technology(PROJECT P){
        this->language = P.project_language;
    }

};
#endif // PROGRAMMER_H
