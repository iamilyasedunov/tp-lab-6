#include "Personal.h"

Personal::~Personal(){
}
void Personal::print() const{
    std::cout<<"Personal::"<<this->id<<" "<<this->name<<" "<<this->payment<<std::endl;
}

