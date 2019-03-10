#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include "interface.Project.h"

class Manager : public Employee, public virtual Project
{
public:
    Manager(int _id, std::string _name) : Employee(_id, _name){}
    ~Manager(){}
    virtual int find_ind_project(std::string _name){
        for (int i = 0; i < 3; i++){
            if (P[i].project_name == _name)
                return i;
        }
        return -1;
    }
};

#endif // MANAGER_H
