#pragma once
#include "Student.h"

class Bodovi
{
public:
	Student stud;
	int brojbodova;

	Bodovi() {}
	Bodovi(Student _stud, int _broj) : stud(_stud), brojbodova(_broj) {}
};

