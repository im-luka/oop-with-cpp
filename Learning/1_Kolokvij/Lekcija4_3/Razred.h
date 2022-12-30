#pragma once
#include<string>
#include<vector>
using namespace std;

class Ucenik
{
public:
	string ime;
	string prezime;

	Ucenik() {}
	Ucenik(string _ime, string _prezime) : ime(_ime), prezime(_prezime) {}
};

class Razred
{
public:
	float ocjena;
	vector<Ucenik*> ucenici;

	Razred() {}

	Razred(const Razred& r) {
		for (int i = 0; i < r.ucenici.size(); i++) {
			ucenici.push_back(new Ucenik);
			*ucenici[i] = *r.ucenici[i];
		}
		ocjena = r.ocjena;
	}

	Razred& operator=(const Razred& r) {
		if (this != &r) {
			for (int i = 0; i < ucenici.size(); i++) {
				delete ucenici[i];
			}
			ucenici.clear();
			for (int i = 0; i < r.ucenici.size(); i++) {
				ucenici.push_back(new Ucenik);
				*ucenici[i] = *r.ucenici[i];
			}
		}
		ocjena = r.ocjena;
		return *this;
	}

	Razred(Razred&& r) {
		for (int i = 0; i < r.ucenici.size(); i++) {
			ucenici.push_back(r.ucenici[i]);
			r.ucenici[i] = NULL;
		}
		ocjena = r.ocjena;
	}

	Razred& operator=(Razred&& r) {
		if (this != &r) {
			for (int i = 0; i < ucenici.size(); i++) {
				delete ucenici[i];
			}
			ucenici.clear();
			for (int i = 0; i < r.ucenici.size(); i++) {
				ucenici.push_back(r.ucenici[i]);
				r.ucenici[i] = NULL;
			}
		}
		ocjena = r.ocjena;
		return *this
	}
};

