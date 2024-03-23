#include <iostream>

using namespace std;

struct test
{
	string name;
	int age;


};

int main()
{
	test p1;
	p1.name="jo";
	p1.age=0;
	cout<< p1.name<< endl;
	cout<< p1.age<< endl;
return 0;
}