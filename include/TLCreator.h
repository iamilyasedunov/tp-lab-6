#ifndef TLCREATOR_H
#define TLCREATOR_H

#include "TeamLeader.h"
#include "AbstractCreator.h"

class TLCreator : public TeamLeader, public AbstractCreator
{
public:
    TLCreator(){
        this->create();
    }
    void create() override{
        std::ifstream input_file("D:/qt-proj/tp_6/employees.txt");
        std::vector<TeamLeader> teamleaders;
        int loc_id = 24;
        int line_number = 24;
        std::string line;
        int _number_of_subordinate = 10;
            if (input_file.is_open()){
                while(getline(input_file, line)){
                    if(loc_id==0){

                        for (int i = line_number; i < line_number+NUMBER_OF_TEAMLEADERS; i++) {
                            std::vector<std::string> results;
                            getline(input_file, line);
                            results = split(line, ' ');
                            std::string _name = results[0] + " " + results[1] + " " + results[2];
                            std::string name_proj = results[5];
                            TeamLeader _TeamLeader(i, _name, std::stof(results[4]), std::stof(results[6]), P[find_ind_project(name_proj)], _number_of_subordinate);
                            //_TeamLeader.set_technology(P[find_ind_project(name_proj)]);
                            teamleaders.push_back(_TeamLeader);
                            _TeamLeader.print();
                            std::cout<<" "<<_TeamLeader.get_income(P[find_ind_project(name_proj)],std::stof(results[6]))<<" "<<name_proj<<std::endl;
                        }
                        break;
                    }
                    loc_id--;
                 }
            }else{
                std::cout<<"err";
            }
    }
    ~TLCreator(){}
};

#endif // TLCREATOR_H
