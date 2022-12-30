#include "Operacija.h"
#include<iostream>
using namespace std;

int main()
{
	short a, b;
	cin >> a >> b;

	try {
		cout << Operacija(a, b, '+').rezultat() << endl;
	}
	catch (short s) {

	}

	return 0;
}