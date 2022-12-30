#pragma once
#include <vector>
#include "Predmet.h"

class Student
{
public:
	string ime;
	string prezime;
	vector<Predmet> popis;

	Student(){}
	Student(string _ime, string _prezime, Predmet _predmet);

	vector<string> popisOdlicnih();
};

