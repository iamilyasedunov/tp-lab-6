#include "Tester.h"

Tester::~Tester(){

}

void Tester::print() const{
    std::cout<<"    Tester::"<<this->id<<" "<<this->name<<" "<<this->payment<<" "<<this->worktime<<" "<<this->test_technology;
}

std::vector<Tester> Tester::create(){
    std::ifstream input_file("D:/qt-proj/tp_6/employees.txt");
    std::vector<Tester> testers;
    int loc_id = 16;
    int line_number = 16;
    std::string line;

        if (input_file.is_open()){
            while(getline(input_file, line)){
                if(loc_id==0){

                    for (int i = line_number; i < line_number+NUMBER_OF_TESTERS; i++) {
                        std::vector<std::string> results;
                        getline(input_file, line);
                        results = split(line, ' ');
                        std::string _name = results[0] + " " + results[1] + " " + results[2];
                        Tester _Tester(i, _name, std::stof(results[4]), std::stof(results[6]));
                        std::string name_proj = results[5];
                        //_Tester.set_technology(P[find_ind_project(name_proj)]);
                        testers.push_back(_Tester);
                        _Tester.print();
                        std::cout<<" "<<_Tester.get_income(P[find_ind_project(name_proj)],std::stof(results[6]))<<" "<<name_proj<<std::endl;
                    }
                    break;
                }
                loc_id--;
             }
        }else{
            std::cout<<"err";
        }
        return testers;
}
