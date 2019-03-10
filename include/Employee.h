#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <sstream>
#include <vector>


class Employee {
protected:
    int id;
    std::string name;
public:

    Employee(int _id, std::string _name) : id(_id), name(_name) {}

    ~Employee();

    void print() const;

    std::vector<std::string> split(const std::string &s, char delim);

};

#endif // EMPLOYEE_H
