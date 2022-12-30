#pragma once
#include <string>
using namespace std;

class Osoba
{
public:
	char *ime;

	Osoba(const Osoba& o)
	{
		ime = new char[20];
		strcpy(ime, o.ime);
	}

	Osoba& operator=(const Osoba& o)
	{
		if (this != &o) {
			delete[] ime;
			ime = new char[20];
			strcpy(ime, o.ime);
		}
		return *this;
	}
};

