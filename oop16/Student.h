#pragma once
#include <iostream>
#include<string>
using namespace std;

class Student
{
	string name;
	string surname;
	int age;
	double Average;
	int year;
public:
	Student();
	Student(string n, string s, int a, double Av, int y);
	void Print();
};

Student::Student() {
	age = 0;
	Average = 0.0;
	year = 0;
}

Student::Student(string n, string s, int a, double Av, int y)
{
	name = n;
	surname = s;
	if (a<17 || a>65)
	{
		throw "Age exeption!!!";
	}
	age = a;

	if (Av < 0)
	{
		throw "Average exeption!!!";
	}
	Average = a;

	if (y < 1 || y>5)
	{
		throw "Year exeption!!!";
	}
	year = y;
}

inline void Student::Print()
{
	cout << "Name: " << name << "\t"
		<< "Surname: " << surname << "\t"
		<< "Age: " << age << "\t"
		<< "Average: " << Average << "\t"
		<< "Year: " << year << endl << endl;
}
