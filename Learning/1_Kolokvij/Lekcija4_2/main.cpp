#include "Student.h"
#include<iostream>
using namespace std;

int main()
{
	Student Ante("1122334455");
	Student Ivica = Ante;

	Ante.setJmbag("6677889900"); 
	cout << Ante.getJmbag() << endl;
	cout << Ivica.getJmbag() << endl;

	return 0;
}