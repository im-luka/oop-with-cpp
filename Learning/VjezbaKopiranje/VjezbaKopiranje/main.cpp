#include <iostream>
#include "Covjek.h"

using namespace std;

int main()
{
	Covjek c1("Ivo", "Ivic");
	cout << c1.ime << " " << c1.prezime << " " << &c1 << endl;
	Covjek c2;
	c2 = c1;
	cout << c2.ime << " " << c2.prezime << " " << &c2 << endl;
	cout << c1.ime << " " << c1.prezime << " " << &c1 << endl;

	c2.ime = "Johhny";
	c2.prezime = "Kefka";

	cout << c2.ime << " " << c2.prezime << " " << &c2 << endl;
	cout << c1.ime << " " << c1.prezime << " " << &c1 << endl;

	//Covjek c1("Johnny");
	//cout << c1.ime << " " << &c1 << endl;

	//Covjek c2;
	//c2 = c1;
	//cout << c2.ime << " " << &c2 << endl;
	//cout << c1.ime << " " << &c1 << endl;

	//strcpy_s(c2.ime, 20, "Mark");
	//cout << c2.ime << " " << &c2 << endl;
	//cout << c1.ime << " " << &c1 << endl;

	return 0;
}