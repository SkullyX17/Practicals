#include <iostream>
#include <Person.h>
using namespace std;
extern Person* createPersonArray(int n);


int main(){
int *ptr;
int n=5;
ptr=createPersonArray(n)

	for(int i=0; i<n; i++)
	{
		cout<< &ptr<< endl;
	}


return 0;

}