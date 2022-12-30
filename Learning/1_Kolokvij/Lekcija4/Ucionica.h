#pragma once
#include "Student.h"
#include<vector>

class Ucionica
{
public:
	vector<Student*> studenti;

	Ucionica() {}
	Ucionica(const Ucionica& u) {
		for (int i = 0; i < u.studenti.size(); i++) {
			studenti.push_back(new Student);
			*studenti[i] = *u.studenti[i];
		}
	}

	Ucionica& operator=(const Ucionica& u) {
		if (this != &u) {
			for (int i = 0; i < studenti.size(); i++) {
				delete studenti[i];
			}
			studenti.clear();
			for (int i = 0; i < u.studenti.size(); i++) {
				studenti.push_back(new Student);
				*studenti[i] = *u.studenti[i];
			}
		}
		return *this;
	}

	Ucionica(Ucionica&& u) {
		for (int i = 0; i < u.studenti.size(); i++) {
			studenti.push_back(u.studenti[i]);
			u.studenti[i] = NULL;
		}
	}

	Ucionica& operator=(Ucionica&& u) {
		if (this != &u) {
			for (int i = 0; i < studenti.size(); i++) {
				delete studenti[i];
			}
			studenti.clear();
			for (int i = 0; i < u.studenti.size(); i++) {
				studenti.push_back(u.studenti[i]);
				u.studenti[i] = NULL;
			}
		}
		return *this;
	}

	~Ucionica() {
		for (int i = 0; i < studenti.size(); i++) {
			delete studenti[i];
		}
	}
};

