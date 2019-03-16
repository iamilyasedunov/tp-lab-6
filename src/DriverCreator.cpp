#include "DriverCreator.h"

void DriverCreator::create(){
    std::ifstream input_file("D:/qt-proj/tp_6/employees.txt");
    std::vector<Driver> drivers;
    int loc_id = 4;
    std::string line;

        if (input_file.is_open()){
            while(getline(input_file, line)){
                if(loc_id==0){

                    for (int i = 4; i < 4+NUMBER_OF_DRIVER; i++) {
                        std::vector<std::string> results;
                        getline(input_file, line);
                        results = split(line, ' ');
                        std::string _name = results[0] + " " + results[1] + " " + results[2];
                        Driver _Driver(i, _name, std::stof(results[4]), std::stof(results[5]));
                        drivers.push_back(_Driver);
                        _Driver.print();
                        std::cout<<" "<<_Driver.get_worktime_income(_Driver.worktime)<<std::endl;
                    }
                    break;
                }
                loc_id--;
             }
        }else{
            std::cout<<"err";
        }
}
