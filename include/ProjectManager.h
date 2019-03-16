#ifndef PROJECTMANAGER_H
#define PROJECTMANAGER_H

#include "interface.Heading.h"
#include "Manager.h"

const int NUMBER_OF_PROJECTMANAGERS = 7;

class PMCreator;

class ProjectManager : public Manager, public Heading
{
    friend PMCreator;
protected:
    PROJECT P;
    ProjectManager(int _id, std::string _name, PROJECT _project) :
        Manager(_id, _name), P(_project) {
    }
    ProjectManager(){}
public:
    ~ProjectManager(){}
    virtual float get_project_income(){
        return P.project_payment*3;
    }
    void print() const;

};

#endif // PROJECTMANAGER_H
