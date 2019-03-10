#ifndef INTERFACE_WORKTIME_H
#define INTERFACE_WORKTIME_H

class WorkTime{
public:
    virtual ~WorkTime() {}

    virtual float get_wotktime_income(){}//почему при занулении все наследники превраза.тся в аюстр классы?
};

#endif // INTERFACE_WORKTIME_H
