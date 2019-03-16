#ifndef CLEANERCREATOR_H
#define CLEANERCREATOR_H
#include "Cleaner.h"
#include "AbstractCreator.h"

class CleanerCreator : public Cleaner, public AbstractCreator
{
public:
    CleanerCreator(){
        std::cout<<"start"<<std::endl;
        this->create();
    }
    void create() override;
    ~CleanerCreator(){}
};

#endif // CLEANERCREATOR_H
