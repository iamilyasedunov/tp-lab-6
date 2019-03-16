#include "ProjectManager.h"
#include <fstream>

void ProjectManager::print() const{
    std::cout<<"PrjManager::"<<this->id<<" "<<this->name<<" "<<this->P.project_name;
}

