#include "Cleaner.h"
#include "Driver.h"
#include "Tester.h"
#include "Personal.h"
#include "ProjectManager.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "SeniorManager.h"
#include "EmployeeFactory.h"

int main(){
<<<<<<< HEAD
    EmployeeFactory EF;
    EF.creator();
=======
    //std::cout<<D.get_income(8)<<" "<<C.get_income(12)<<std::endl;

    //Engineer E(13, "Ee", 12);

    /*
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
    */
    //CleanerCreator CC;
    //DriverCreator DC;
    ProgrammerCreator PC;
    TesterCreator TC;
    TLCreator TLC;
    PMCreator PMC;
    SMCreator SMC;
>>>>>>> 07f3f043e50f5360d7cc0493574e9dd61894e911
    return 0;
}
