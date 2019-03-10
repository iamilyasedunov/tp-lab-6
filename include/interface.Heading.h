#ifndef HEADING_H
#define HEADING_H

#include <iostream>
#include <ctime>
#include <random>


class Heading
{
public:
    virtual ~Heading(){}
    virtual float premium(int number_of_subordinate){}
};

#endif // HEADING_H
