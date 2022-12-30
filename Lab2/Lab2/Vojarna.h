#pragma once
#include<vector>
#include "Postrojba.h"

class Vojarna
{
public:
	string naziv;
	string adresa;
	vector<GlavniStozer::Postrojba*> postrojbe;

public:
	Vojarna() {}
	Vojarna(string _naziv, string _adresa) : naziv(_naziv), adresa(_adresa) {}

	//kopirni konstruktor
	Vojarna(const Vojarna& v) {
		naziv = v.naziv;
		adresa = v.adresa;
		for (int i = 0; i < v.postrojbe.size(); i++) {
			postrojbe.push_back(new GlavniStozer::Postrojba);
			*postrojbe[i] = *v.postrojbe[i];
		}
	}

	Vojarna(Vojarna&& v) {
		for (int i = 0; i < v.postrojbe.size(); i++) {
			postrojbe.push_back(v.postrojbe[i]);
			v.postrojbe[i] = NULL;
		}
	}

	//Operator pridruzivanja semantika prijenosa
	Vojarna& operator=(Vojarna&& v) {
		if (this != &v) {
			naziv = v.naziv;
			adresa = v.adresa;
			for (int i = 0; i < postrojbe.size(); i++) {
				delete postrojbe[i];
			}
			postrojbe.clear();
			for (int i = 0; i < v.postrojbe.size(); i++) {
				postrojbe.push_back(v.postrojbe[i]);
				v.postrojbe[i] = NULL;
			}
		}
		return *this;
	}

	~Vojarna() {
		for (int i = 0; i < postrojbe.size(); i++) {
			delete postrojbe[i];
		}
		postrojbe.clear();
	}
};

