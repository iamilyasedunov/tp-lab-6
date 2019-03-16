#ifndef PMCREATOR_H
#define PMCREATOR_H
#include "ProjectManager.h"
#include "AbstractCreator.h"

class PMCreator : public ProjectManager, public AbstractCreator
{
public:
    PMCreator(){
        this->create();
    }
    void create() override{
        std::ifstream input_file("D:/qt-proj/tp_6/employees.txt");
        std::vector<ProjectManager> projectmanagers;
        int loc_id = 27;
        int line_number = 27;
        std::string line;

            if (input_file.is_open()){
                while(getline(input_file, line)){
                    if(loc_id==0){

                        for (int i = line_number; i < line_number+NUMBER_OF_PROJECTMANAGERS; i++) {
                            std::vector<std::string> results;
                            getline(input_file, line);
                            results = split(line, ' ');
                            std::string _name = results[0] + " " + results[1] + " " + results[2];
                            std::string name_proj = results[4];
                            ProjectManager _ProjectManager(i, _name, P3);
                            //_ProjectManagers.set_technology(P[find_ind_project(name_proj)]);
                            projectmanagers.push_back(_ProjectManager);
                            _ProjectManager.print();
                            std::cout<<" "<<_ProjectManager.get_project_income()<<std::endl;
                        }
                        break;
                    }
                    loc_id--;
                 }
            }else{
                std::cout<<"err";
            }
    }
    ~PMCreator(){}
};
#endif // PMCREATOR_H
