#include "Tester.h"

Tester::~Tester(){

}

void Tester::print() const{
    std::cout<<"    Tester::"<<this->id<<" "<<this->name<<" "<<this->payment<<" "<<this->worktime<<" "<<this->test_technology;
}


