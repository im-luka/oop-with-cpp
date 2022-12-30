#include<iostream>
#include <time.h>

using namespace std;

template<class T>
class Polje {
public:
	T* niz;
	int brElem;

	Polje(int _brElem) {
		brElem = _brElem;
		niz = new T[_brElem];
	}

	T& operator[](int indx) {
		return niz[indx];
	}

	int sadrzi(int broj) {
		int xvar = 0;

		for (int i = 0; i < brElem; i++) {
			if (niz[i] == broj) {
				xvar = i;
			}
		}
		return xvar+1;
	}

	~Polje() {
		delete[] niz;
	}
};

int main()
{
	Polje<int> A(100);

	srand((unsigned)time(NULL));
	for (int i = 0; i < 100; i++) {
		A[i] = rand() % 100 + 1;
	}

	cout << "Polje ima " << A.brElem << " elemenata." << endl;

	cout << "----------------------" << endl;
	for (int i = 0; i < 100; i++) {
		cout << A[i] << ", ";
	}
	cout << "\n----------------------" << endl;

	int x = 58;
	int indx = A.sadrzi(x);
	if (indx != 1) {
		cout << "Broj " << x << " se nalazi u elementu s indeksom " << indx << "!\n";
	}
	else {
		cout << "Broj " << x << " se ne nalazi u polju!\n";
	}

	return 0;
}