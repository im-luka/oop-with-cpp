#include <iostream>
#include <vector>
#include "Igrac.h"
#include "Spil.h"

using namespace std;

int main()
{
	int n;
	vector<Igrac> Igrac;
	Spil Djelitelj(false);

	cout << "Unesi broj igraca: ";
	cin >> n;

	if (n > 13) {
		cout << "Previse igraca!";
		return -1;
	}
	for (int i = 0; i < n; i++) {
		string ime;
		cout << "Ime" << i + 1 << ". igraca: ";
		cin >> ime;
	}

	return 0;
}