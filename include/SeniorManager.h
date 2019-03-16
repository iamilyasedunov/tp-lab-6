#ifndef SENIORMANAGER_H
#define SENIORMANAGER_H

#include "ProjectManager.h"

const int NUMBER_OF_SENIORMANAGERS = 4;

class SMCreator;

class SeniorManager : public ProjectManager
{
    friend SMCreator;
protected:
    int number_of_subordinate;
    SeniorManager(int _id, std::string _name, PROJECT _P, int _number_of_subordinate) : ProjectManager(_id, _name, _P), number_of_subordinate(_number_of_subordinate){
    }
    SeniorManager(){}
public:
    ~SeniorManager(){}
    virtual float get_project_income(){
        return P.project_payment + premium();
    }
    virtual float premium(){
        return number_of_subordinate*this->P.project_payment*10;
    }
    void print() const;

    std::vector<SeniorManager> create();
};

#endif // SENIORMANAGER_H
