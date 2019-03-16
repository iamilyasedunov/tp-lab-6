#ifndef PROGRAMMERCREATOR_H
#define PROGRAMMERCREATOR_H


#include "Programmer.h"
#include "AbstractCreator.h"

class ProgrammerCreator : public Programmer, public AbstractCreator
{
public:
    ProgrammerCreator(){
        this->create();
    }
    void create() override{
        std::ifstream input_file("D:/qt-proj/tp_6/employees.txt");
        std::vector<Programmer> programmers;
        int loc_id = 8;
        int line_number = 8;
        std::string line;

            if (input_file.is_open()){
                while(getline(input_file, line)){
                    if(loc_id==0){

                        for (int i = line_number; i < line_number+NUMBER_OF_PPROGRAMMER; i++) {
                            std::vector<std::string> results;
                            getline(input_file, line);
                            results = split(line, ' ');
                            std::string _name = results[0] + " " + results[1] + " " + results[2];
                            Programmer _Programmer(i, _name, std::stof(results[4]), std::stof(results[6]));
                            std::string name_proj = results[5];
                            //_Programmer.set_technology(P[find_ind_project(name_proj)]);
                            programmers.push_back(_Programmer);
                            _Programmer.print();
                            std::cout<<" "<<_Programmer.get_income(P[find_ind_project(name_proj)],std::stof(results[6]))<<" "<<name_proj<<std::endl;
                        }
                        break;
                    }
                    loc_id--;
                 }
            }else{
                std::cout<<"err";
            }

    }
    ~ProgrammerCreator(){}
};

#endif // PROGRAMMERCREATOR_H
