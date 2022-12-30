#include <iostream>
#include "Predmet.h"
#include "Student.h"
using namespace std;

int main()
{
	Predmet Matematika(1250, "Matematika", 5);
	Student Ivica("Ivica", "Ivic", Matematika);

	return 0;
}