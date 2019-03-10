#include "Cleaner.h"
#include "Driver.h"
#include "Tester.h"
#include "SeniorManager.h"
#include "ProjectManager.h"
#include "TeamLeader.h"

int main(){
    //std::cout<<D.get_income(8)<<" "<<C.get_income(12)<<std::endl;

    //Engineer E(13, "Ee", 12);


    Driver C(0, "", 12, 12);
    Cleaner D(0, "", 12, 12);
    Programmer P(0, "", 12, 12);
    Tester T(0, "", 12, 12);
    TeamLeader TL(0, "", 12, 12);
    ProjectManager PM(0, "", P1);
    SeniorManager SM(0, "", P1, 0);
    D.create();
    C.create();
    P.create();
    T.create();
    TL.create();
    PM.create();
    SM.create();
    return 0;
}
