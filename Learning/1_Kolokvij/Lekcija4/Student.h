#pragma once
#include<string>
using namespace std;

class Student
{
public:
	string ime;
	string prezime;

	Student() {}
	Student(string _ime, string _prezime) : ime(_ime), prezime(_prezime) {}
};

