#ifndef TESTER_H
#define TESTER_H

#include "Engineer.h"
#include <fstream>

const int NUMBER_OF_TESTERS = 8;

class Tester : public Engineer
{
private:
    float worktime;
    std::string test_technology = "";
public:
    Tester(int _id, std::string _name, float _payment , float _worktime) :
        Engineer(_id, _name, _payment ),
        worktime(_worktime){}

    ~Tester();

    void print() const;

    virtual int find_ind_project(std::string _name){
        for (int i = 0; i < 3; i++){
            if (P[i].project_name == _name)
                return i;
        }
        return -1;
    }

    virtual void set_technology(PROJECT P){
        this->test_technology = P.project_test;
    }

    std::vector<Tester> create();
};

#endif // TESTER_H
