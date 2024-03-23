#include <iostream>
#ifndef Person.h
#define Person.h
using namespace std;

struct Person {
    string name;
    int age;
};

#endif


Person* createPersonArray(int n)
{
	Person *personarray[n];
	for(int i=0; i<n; i++)
	{
		personarray[i].name = "john";
		personarray[i].age = 0;
	}


return personarray
}