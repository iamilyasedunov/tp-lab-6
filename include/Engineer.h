#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"
#include "interface.Project.h"
#include "interface.WorkTime.h"

class Engineer : public Employee, public virtual Project, public virtual WorkTime{
protected:
    float payment;

public:
    Engineer(int _id, std::string _name, float _payment) : Employee(_id, _name),
          payment(_payment){}
    ~Engineer(){}

    void print() const;



    virtual int find_ind_project(std::string _name){
        for (int i = 0; i < 3; i++){
            if (P[i].project_name == _name)
                return i;
        }
        return -1;
    }

    virtual float get_project_income(PROJECT P){
        return P.project_payment + this->payment;
    }
    virtual float get_worktime_income(float _worktime){
        return _worktime*this->payment;
    }
    virtual float get_income(PROJECT P, float _payment){
        return get_project_income(P) + get_worktime_income(_payment);
    }


};

#endif // ENGINEER_H
