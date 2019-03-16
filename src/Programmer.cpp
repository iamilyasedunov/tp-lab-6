#include "Programmer.h"

Programmer::~Programmer(){}

void Programmer::print() const{
    std::cout<<"Programmer::"<<this->id<<" "<<this->name<<" "<<this->payment<<" "<<this->worktime<<" "<<this->language;
}


