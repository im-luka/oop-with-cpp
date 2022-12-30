#pragma once
#include<string>
#include<vector>
using namespace std;

class Student
{
public:
	string ime;
	string prezime;
	string jmbag;

	Student() {}
	Student(string _ime, string _prezime, string _jmbag) : ime(_ime), prezime(_prezime), jmbag(_jmbag) {}
};

