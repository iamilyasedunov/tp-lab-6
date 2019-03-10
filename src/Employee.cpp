#include "Employee.h"

Employee::~Employee(){
}

void Employee::print() const{
    std::cout<<"Employee::"<<this->id<<" "<<this->name<<std::endl;
}

std::vector<std::string> Employee::split(const std::string &s, char delim) {
  std::stringstream ss(s);
  std::string item;
  std::vector<std::string> elems;
  while (std::getline(ss, item, delim)) {
    elems.push_back(item);
    // elems.push_back(std::move(item)); // if C++11 (based on comment from @mchiasson)
  }
  return elems;
}
