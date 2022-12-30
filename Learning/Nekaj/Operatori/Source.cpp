#include<iostream>

using namespace std;

class Kompleksni {
	int re;
	int im;
	friend ostream& operator<<(ostream& izlaz, Kompleksni k);
	friend Kompleksni operator-(const Kompleksni k, int broj);
	friend Kompleksni operator-(int broj, const Kompleksni k);

public:
	Kompleksni(int _re, int _im) {
		re = _re;
		im = _im;
	}

	Kompleksni operator+(const Kompleksni k) {
		return Kompleksni(re + k.re, im + k.im);
	}

	Kompleksni operator*(const Kompleksni k) {
		return Kompleksni(re * k.re, im * k.im);
	}
};

ostream& operator<<(ostream& izlaz, Kompleksni k) {
	if (k.im == 0) {
		izlaz << k.re;
	}
	else if (k.im < 0) {
		int pom = k.im * (-1);
		izlaz << k.re << " - " << pom << "i";
	}
	else {
		izlaz << k.re << " + " << k.im << "i";
	}
	return izlaz;
}

Kompleksni operator-(const Kompleksni k, int broj) {
	return Kompleksni(k.re - broj, k.im);
}

Kompleksni operator-(int broj, const Kompleksni k) {
	return Kompleksni(k.re - broj, k.im);
}

int main()
{
	Kompleksni Z1(1, 0), Z2(2, -1);
	cout << Z1 << endl << Z2 << endl;

	Kompleksni Suma = Z1 + Z2;
	cout << Suma << endl;

	Kompleksni Umnozak = Z1 * Z2;
	cout << Umnozak << endl;

	Kompleksni Razlika = Suma - 3;
	cout << Razlika << endl;

	Kompleksni Razlika2 = Suma - 3;
	cout << Razlika2 << endl;

	return 0;
}