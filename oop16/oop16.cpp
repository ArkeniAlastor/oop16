#include <iostream>
#include"Student.h"
using namespace std;

int main()
{
	try
	{
		Student obj("Alastor", "Arken", 19, 11, 2);
		obj.SetAge(34);

		obj.Print();
	}
	catch (const char * str)
	{
		cout << str;
	}
}