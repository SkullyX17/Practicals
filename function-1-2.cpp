#include <iostream>
#include "Person.h"


PersonList createPersonList(int n)
{
	Person* array = new Person[n];    // how to put data on the heap to use later if left on the stack it'll get deleted
	for(int i=0; i<n; i++)
	{
		array[i].name = "Jane Doe";
		array[i].age = 1;
	
	}

	PersonList List = new PersonList[n];
	for(int i=0; i<n; i++)
	{
		list[i]->people = array[i];
	
	}
	List.numPeople=n;

	return List;

}