#include <iostream>
#include"Student.h"
using namespace std;

int main()
{
	try
	{
		Student obj("Ivan", "Petrov", 19, 11, 2);
		obj.Print();
	}
	catch (const char * str)
	{
		cout << str;
	}
}