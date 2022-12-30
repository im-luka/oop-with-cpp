#include<iostream>
#include<vector>

using namespace std;

template<class T, class T2>
auto suma(T br1, T2 br2) {
	return br1 + br2;
}

template<class T, class T2, class... Tostali>
auto suma(T br1, T2 br2, Tostali... br3) {
	return br1 + suma(br2, br3...);
}

template <class Bla>
class NekoPolje {
public:
	Bla* polje;
	int br;

	NekoPolje(int _br) {
		polje = new Bla[_br];
		br = _br;
	}

	Bla& operator[] (int indx) {
		return polje[indx];
	}

	~NekoPolje() {
		delete[] polje;
	}
};

int main()
{
	double a = 4.3;
	int b = 3;
	float c = 11.2;
	char d = '2';

	cout << suma(b,a,c,d) << endl;
	cout << suma(4.5, 2) << endl << "-----------------" << endl;

	NekoPolje<int> inst(10);
	cout << inst.br << endl;

	return 0;
}

template<class n>
void zamjeni(n &x, n &y) {
	n nekaj = x;
	x = y;
	y = nekaj;
}

template<class XY>
class Kontejner {
public:
	XY* polje;
	int brElem;
	Kontejner(int _brElem);
	~Kontejner();
	XY& operator[](int indx);
};

template <class XY>
Kontejner<XY> ::Kontejner(int _brElem) {
	brElem = _brElem;
	polje = new XY[_brElem];
}

template<class XY>
XY& Kontejner<XY>::operator[](int indx) {
	return polje[indx];
}

template<class XY>
Kontejner<XY>::~Kontejner() {
	delete[] polje;
}

template<>
class Kontejner <double> {
public:
	double* polje;
	int brElem;
	Kontejner(int _brelem) : brElem(_brelem) {
		polje = new double[_brelem];
	}
	~Kontejner() {
		delete[] polje;
	}
	double suma();
	double zbroj();
};

template<class yo, int znj>
class Klaca {
public:
	yo polje[znj];
	int vel;
	Klaca() : vel(znj) {}
};

class Kompleksni {
public:
	int re;
	int im;
	Kompleksni() {}
	Kompleksni(int _re, int _im) : re(_re), im(_im) {}
};

template<class T>
T Kvadrat(T x) {
	return x * x;
}

template<>
Kompleksni Kvadrat(Kompleksni z) {
	return Kompleksni(z.re * z.re - z.im * z.im, 2 * z.re * z.im);
}