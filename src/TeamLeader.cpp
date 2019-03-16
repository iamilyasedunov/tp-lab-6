#include "TeamLeader.h"

TeamLeader::~TeamLeader(){

}

void TeamLeader::print() const{
    std::cout<<"TeamLeader::"<<this->id<<" "<<this->name<<" "<<this->payment<<" "<<this->worktime<<" "<<this->project.project_name;
}


