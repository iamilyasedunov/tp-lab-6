#ifndef PERSONAL_H
#define PERSONAL_H

#include "interface.WorkTime.h"
#include "Employee.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class Personal: public Employee, public virtual WorkTime{
protected:
   float payment;
public:
      Personal(int _id, std::string _name, float _payment) : Employee(_id, _name),
            payment(_payment){}
      ~Personal();

      void print() const;

      virtual float get_worktime_income(float _worktime){return _worktime*this->payment;}


};

#endif
