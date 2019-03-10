#include "SeniorManager.h"
#include <fstream>

void SeniorManager::print() const{
    std::cout<<"SnrManager::"<<this->id
            <<" "<<this->name
           <<" "<<this->P.project_name
            <<" "<<this->number_of_subordinate;

}

std::vector<SeniorManager> SeniorManager::create(){
    std::ifstream input_file("D:/qt-proj/tp_6/employees.txt");
    std::vector<SeniorManager> seniormanagers;
    int loc_id = 33;
    int line_number = 33;
    std::string line;
    int _number_of_subordinate = 10;
        if (input_file.is_open()){
            while(getline(input_file, line)){
                if(loc_id==0){
                    for (int i = line_number; i < line_number+NUMBER_OF_SENIORMANAGERS; i++) {
                        std::vector<std::string> results;
                        getline(input_file, line);
                        results = split(line, ' ');
                        std::string _name = results[0] + " " + results[1] + " " + results[2];
                        std::string name_proj = results[4];
                        SeniorManager _SeniorManager(i, _name, P1, _number_of_subordinate);
                        //_SeniorManagers.set_technology(P[find_ind_Senior(name_proj)]);
                        seniormanagers.push_back(_SeniorManager);
                        _SeniorManager.print();
                        std::cout<<" "<<_SeniorManager.get_project_income()<<std::endl;
                    }
                    break;
                }
                loc_id--;
             }
        }else{
            std::cout<<"err";
        }
        return seniormanagers;
}
