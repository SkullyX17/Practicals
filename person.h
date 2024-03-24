#include <iostream>
using namespace std;


#ifndef Person_h
#define Person_h


struct Person {
    string name = "John doe";
    int age =0;
};


struct PersonList {
    Person* people;
    int numPeople;
};


#endif