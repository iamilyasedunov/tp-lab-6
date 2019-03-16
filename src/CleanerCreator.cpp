#include "CleanerCreator.h"

void CleanerCreator:: create() {
    std::ifstream input_file("D:/qt-proj/tp_6/employees.txt");
    std::vector<Cleaner> cleaners;
    int loc_id = 0;
    std::string line;

        if (input_file.is_open()){
            while(getline(input_file, line)){
                if(loc_id==0){

                    for (int i = 0; i < NUMBER_OF_CLEANER; i++) {
                        std::vector<std::string> results;
                        getline(input_file, line);
                        results = split(line, ' ');
                        std::string _name = results[0] + " " + results[1] + " " + results[2];
                        Cleaner _Cleaner(i, _name, std::stof(results[4]), std::stof(results[5]));
                        cleaners.push_back(_Cleaner);
                        _Cleaner.print();
                        std::cout<<" "<<_Cleaner.get_worktime_income(_Cleaner.worktime)<<std::endl;
                    }
                    break;
                }
                loc_id--;
             }
        }else{
            std::cout<<"err";
        }
        //return cleaners;
}
