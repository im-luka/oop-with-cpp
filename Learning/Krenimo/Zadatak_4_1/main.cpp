#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	Student Ante("1122334455");
	Student Ivica = Ante;

	Ante.setJmbag("6677889910");
	cout << Ante.getJmbag() << endl;
	cout << Ivica.getJmbag() << endl;

	Student Marko;
	Marko = Ante;
	Marko.setJmbag("1234567899");
	cout << Marko.getJmbag() << endl;
	cout << Ante.getJmbag() << endl;

	return 0;
}