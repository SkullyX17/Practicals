#include <iostream>
#include "Person.h"
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

Person* createPersonArray(int n)
{
	Person* res = new Person[n];    // how to put data on the heap to use later if left on the stack it'll get deleted
	


return res;
}

PersonList createPersonList(int n)
{

	//Person* array = new Person[n];    // how to put data on the heap to use later if left on the stack it'll get deleted
	//array = createPersonArray(n);
	PersonList List;
	for(int i=0; i<n; i++)
	{
		
		List.people = createPersonArray(n);
		
	}
	for(int i=0; i<n; i++)
	{
		((List.people)+i)->name = "Jane Doe";
		((List.people)+i)->age = 1;
	//cout<<res[i].name<<"--"<<res[i].age<<endl;
	}
	List.numPeople=n;
	
	return List;

}