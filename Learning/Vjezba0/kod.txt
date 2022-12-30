#include <iostream>

using namespace std;

void analiza(char* niz, int* broj, int* znak);

int main()
{
	//zadatak 1
	//int n, i, brojac;

	//cout << "Unesi prirodni broj: ";
	//cin >> n;

	//brojac = n;

	//for (i = 1; i <= n; i++) {
	//	cout << i;
	//	if (i == n) {
	//		brojac--;
	//		while (brojac != 0) {
	//			cout << brojac;
	//			brojac--;
	//		}
	//	}
	//}



	//zadatak 2
	//int n, i, j;
	//int ulaz;

	//cout << "Unesi n broj: ";
	//cin >> n;

	//int niz1[100];
	//for (i = 0; i < 100; i++) {
	//	niz1[i] = i + 1;
	//}

	//int niz2[100];
	//for (i = 0; i < n; i++) {
	//	cin >> ulaz;
	//	niz2[i] = ulaz;
	//}

	//int niz3[100] = {0};
	//int brojac = 0;
	//for (i = 0; i < 100; i++) {
	//	brojac = 0;
	//	for (j = 0; j < n; j++) {
	//		if (niz1[i] == niz2[j]) {
	//			brojac++;
	//		}
	//	}
	//	niz3[i] = brojac;
	//}

	//for (i = 0; i < 100; i++) {
	//	cout << "Broj " << niz1[i] << " se spominje " << niz3[i] << " puta.\n";
	//}



	//zadatak 3
	char niz[50];
	int i, brZn, brSl;

	cin >> niz;

	analiza(niz, &brZn, &brSl);

	cout << "Broj znamenaka: " << brZn << "\n" << "Broj slova: " << brSl << "\n";

	return 0;
}

void analiza(char* niz, int* broj, int* znak) 
{
	int i, brojevi = 0, slova = 0;
	for (i = 0; i < strlen(niz); i++) {
		if (niz[i] >= 48 && niz[i] <= 57) {
			brojevi++;
		}
		else {
			slova++;
		}
	}

	*broj = brojevi;
	*znak = slova;
}