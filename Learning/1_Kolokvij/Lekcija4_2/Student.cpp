#include "Student.h"


char* Student::getJmbag() const {
	return jmbag;
}

void Student::setJmbag(const char* _jmbag) {
	jmbag = new char[11];
	strcpy_s(jmbag, 11, _jmbag);
}