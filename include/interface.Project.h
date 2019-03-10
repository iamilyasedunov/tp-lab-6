#ifndef INTERFACE_PROJECT_H
#define INTERFACE_PROJECT_H

#include <string>
#include <vector>

const int NUMBER_OF_PROJECT = 3;

struct PROJECT
{
    std::string project_name;
    float project_payment;
    std::string project_language;
    std::string project_test;
};

const PROJECT P1 = {"TBB", 5000, "C++", "gtests"};
const PROJECT P2 = {"OpenCV", 7000, "Java", "Jtest"};
const PROJECT P3 = {"ParallelSTL", 9000, "Python3", "Py.test"};
const PROJECT P[3] = {P1, P2, P3};

class Project {
public:
    virtual ~Project(){}

    virtual float get_project_income(){}

    virtual void set_technology(PROJECT P){}

    virtual int find_ind_project(std::string _name){}

    virtual float get_worktime_income(float _worktime){}

    virtual float get_income(PROJECT P, float _payment){}
};


#endif // INTERFACE_PROJECT_H
