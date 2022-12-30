#include "Student.h"

Student::Student(string _ime, string _prezime, Predmet _predmet)
{
	ime = _ime;
	prezime = _prezime;
	popis.push_back(_predmet);
}

vector<string> Student::popisOdlicnih()
{
	vector<string> pom;
	for (int i = 0; i < popis.size(); i++) {
		if (popis[i].ocjena == 5) {
			pom.push_back(popis[i].naziv);
		}
	}
	return pom;
}