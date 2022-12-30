#pragma once
#include <string.h>

class Student
{
	char* jmbag;

public:
	Student(const char* _jmbag) {
		jmbag = new char[11];
		strcpy_s(jmbag, 11, _jmbag);
	}

	~Student() {
		delete[] jmbag;
	}

	char* getJmbag() const;
	void setJmbag(const char* jmbag);

	Student(const Student& s) {
		jmbag = new char[11];
		strcpy_s(jmbag, 20, s.jmbag);
	}
};

