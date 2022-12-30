#pragma once
#include <string>

class Student
{
private:
	char* jmbag;

public:
	char* getJmbag() const;
	void setJmbag(const char* _jmbag);

	Student(){}
	Student(const char* _jmbag) {
		jmbag = new char[11];
		strcpy_s(jmbag, 11, _jmbag);
	}

	Student(const Student& s) {
		jmbag = new char[11];
		strcpy_s(jmbag, 11, s.jmbag);
	}

	Student& operator=(const Student& s) {
		if (this != &s) {
			delete[] jmbag;
			jmbag = new char[11];
			strcpy_s(jmbag, 11, s.jmbag);
		}
		return *this;
	}

	Student(Student&& s) {
		jmbag = s.jmbag;
		s.jmbag = NULL;
	}

	Student& operator=(Student&& s) {
		if (this != &s) {
			delete[] jmbag;
			jmbag = s.jmbag;
			s.jmbag = NULL;
		}
		return *this;
	}

	~Student() {
		delete[] jmbag;
	}
};

