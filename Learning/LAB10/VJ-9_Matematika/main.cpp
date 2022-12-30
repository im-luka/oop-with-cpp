#include<iostream>

using namespace std;

class Kompleksni {
public:
	double re;
	double im;
	Kompleksni(double _re, double _im) : re(_re), im(_im) {}
};

template<class T>
Kompleksni operator+(Kompleksni z, T br) {
	return Kompleksni(z.re + br, z.im);
}
ostream& operator<<(ostream& izlaz, Kompleksni z) {
	izlaz << z.re << "+" << z.im << "i" << endl;
	return izlaz;
}


class Matematika {
public:
	Matematika() {}

	template<class T, class T2>
	auto suma(T br1, T2 br2) {
		return br1 + br2;
	}
};

int main()
{
	Matematika Racun;
	cout << Racun.suma(2, 4.3) << endl;
	cout << Racun.suma(2.3, 4) << endl;
	cout << Racun.suma(Kompleksni(2.5, 1), 4);

	return 0;
}