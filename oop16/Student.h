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
	void Init(string n, string s, int a, double Av, int y);
	void Input();
	void Print();
	void SetAge(int a);
	void SetArevage(double Av);
	void SetYear(int y);
	string GetName();
	string GetSurname();
	int GetAge();
	double GetAverage();
	int GetYear();

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

	if (Av < 0 || Av > 12)
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

void Student::Init(string n, string s, int a, double Av, int y)
{
	name = n;
	surname = s;

	if (a < 17 || a > 65)
	{
		throw "Age exception!!!";
	}
	age = a;

	if (Av < 0 || Av > 12)
	{
		throw "Average exception!!!";
	}
	Average = Av;

	if (y < 1 || y > 5)
	{
		throw "Year exception!!!";
	}
	year = y;
}

void Student::Input()
{
	cout << "Enter name: ";
	cin >> name;

	cout << "Enter surname: ";
	cin >> surname;

	cout << "Enter age: ";
	cin >> age;
	if (age < 17 || age > 65)
	{
		throw "Age exception!!!";
	}

	cout << "Enter average: ";
	cin >> Average;
	if (Average < 0 || Average > 12)
	{
		throw "Average exception!!!";
	}

	cout << "Enter year: ";
	cin >> year;
	if (year < 1 || year > 5)
	{
		throw "Year exception!!!";
	}
}

void Student::Print()
{
	cout << "Name: " << name << "\t"
		<< "Surname: " << surname << "\t"
		<< "Age: " << age << "\t"
		<< "Average: " << Average << "\t"
		<< "Year: " << year << endl << endl;
}

void Student::SetAge(int a)
{
	age = a;
	if (a < 17 || a>65)
	{
		throw "Age Error\t";
	}
}

void Student::SetArevage(double Av)
{
	Average = Av;
	if (Av < 0 || Av > 12)
	{
		throw "Average Error";
	}
}

void Student::SetYear(int y)
{
	year = y;
	if (y < 1 || y>5)
	{
		throw "Year Error\t";
	}
}

string Student::GetName()
{
	return string();
}

string Student::GetSurname()
{
	return string();
}

int Student::GetAge()
{
	return 0;
}

double Student::GetAverage()
{
	return 0.0;
}

int Student::GetYear()
{
	return 0;
}
