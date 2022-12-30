#pragma once
#include "Student.h"
#include <vector>

class Ucionica
{
public:
	vector<Student*> student;

	Ucionica(const Ucionica& u) {
		for (int i = 0; i < u.student.size(); i++) {
			student.push_back(new Student);
			*student[i] = *u.student[i];
		}
	}

	Ucionica& operator = (const Ucionica& u) {
		if (this != &u) {
			for (int i = 0; i < student.size(); i++) {
				delete[] student[i];
			}
			student.clear();
			for (int i = 0; i < u.student.size(); i++) {
				student.push_back(new Student);
				*student[i] = *u.student[i];
			}
		}
		return *this;
	}
};

