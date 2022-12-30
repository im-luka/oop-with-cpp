#include<iostream>
#include<string>

using namespace std;

class GeometrijskiLik {
public:
	string naziv;

	virtual double Opseg() = 0;
	virtual double Povrsina() = 0;
};

class Kvadrat : public GeometrijskiLik {
public:
	double a;

	Kvadrat(double _a) : a(_a) {
		naziv = "Kvadrat";
	}
	double Opseg() {
		return 4 * a;
	}
	double Povrsina() {
		return a * a;
	}
};

class Pravokutnik : public GeometrijskiLik {
public:
	double a;
	double b;

	Pravokutnik(double _a, double _b) : a(_a), b(_b) {
		naziv = "Pravokutnik";
	}
	double Opseg() {
		return 2 * (a + b);
	}
	double Povrsina() {
		return a * b;
	}
};

class Krug : public GeometrijskiLik {
public:
	double radijus;

	Krug(double _radijus) : radijus(_radijus) {
		naziv = "Krug";
	}
	double Opseg() {
		return 2 * radijus * 3.14;
	}
	double Povrsina() {
		return radijus * radijus * 3.14;
	}
};

int main()
{
	GeometrijskiLik* Lik[3];
	Kvadrat Kvadrat1(1);
	Pravokutnik Pravokutnik1(1, 2);
	Krug Krug1(1);

	Lik[0] = &Kvadrat1;
	Lik[1] = &Pravokutnik1;
	Lik[2] = &Krug1;
	for (int i = 0; i < 3; i++) {
		cout << Lik[i]->naziv << " O = " << Lik[i]->Opseg() << " P = " << Lik[i]->Povrsina() << endl;
	}

	return 0;
}