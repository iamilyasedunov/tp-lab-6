#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include <ctime>
#include "interface.Heading.h"
#include "Programmer.h"

class TLCreator;

const int NUMBER_OF_TEAMLEADERS = 3;

class TeamLeader : public Programmer, public Heading {
    friend TLCreator;
private:
    PROJECT project;
    int number_of_subordinate;
    TeamLeader(int _id, std::string _name, float _payment, float _worktime, PROJECT _project, int _number_of_subordinate) :
        Programmer(_id, _name, _payment, _worktime), project(_project), number_of_subordinate(_number_of_subordinate) {
        this->payment += premium(number_of_subordinate);
    }
    TeamLeader(){}
public:
    TeamLeader(int _id, std::string _name, float _payment, float _worktime) :
        Programmer(_id, _name, _payment, _worktime){
        this->payment += premium(number_of_subordinate);
        int random_ind = rand()%(NUMBER_OF_PROJECT);
        PROJECT _P = P[random_ind];
        this->project = _P;
    }

    virtual float premium(int number_of_subordinate){
        return this->payment*number_of_subordinate/2;
    }

    void print() const;

    ~TeamLeader();

};

#endif // TEAMLEADER_H
