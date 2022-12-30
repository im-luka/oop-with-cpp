#include<iostream>

using namespace std;

class Razlomak {
public:
	int brojnik;
	int nazivnik;

	Razlomak() {
		brojnik = 1;
		nazivnik = 1;
	}
	Razlomak(int _br) : brojnik(_br) {}
	Razlomak(int _brojnik, int _nazivnik) {
		brojnik = _brojnik;
		nazivnik = _nazivnik;
	}

	Razlomak& operator=(int broj) {
		brojnik = broj;
		nazivnik = 1;
		return *this;
	}

	Razlomak& operator=(const Razlomak& r) {
		if (this != &r) {
			brojnik = r.brojnik;
			nazivnik = r.nazivnik;
		}
		return *this;
	}

	Razlomak operator*(const Razlomak& r) {
		return Razlomak(brojnik * r.brojnik, nazivnik * r.nazivnik);
	}

	Razlomak& operator++() {
		++brojnik;
		return *this;
	}
};

ostream& operator<<(ostream& izlaz, Razlomak r) {
	izlaz << r.brojnik << "/" << r.nazivnik;
	return izlaz;
}

Razlomak operator+(int broj, const Razlomak& r) {
	return Razlomak(broj + r.brojnik, r.nazivnik);
}

int main()
{
	Razlomak r1(2, 3), r2;
	r2 = 2;

	cout << r1 * r2 << endl;
	cout << 2 + ++r2 << endl;

	return 0;
}