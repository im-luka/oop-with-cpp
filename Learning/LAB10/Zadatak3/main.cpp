#include<iostream>
#include<vector>

using namespace std;


//ZADATAK 3
template<class T>
class Red {
public:
	vector<T> red;
	static int brojElemenata;

	void Dodaj(T elem) {
		red.push_back(elem);
		brojElemenata++;
	}

	void Brisi() {
		red.pop_back();
		brojElemenata--;
	}
};
template<class T>
int Red<T>::brojElemenata = 0;

int main()
{
	Red<int> polje;
	polje.Dodaj(2);
	polje.Dodaj(4);
	polje.Dodaj(7);
	polje.Dodaj(5);

	for (int i = 0; i < polje.red.size(); i++) {
		cout << polje.red[i] << ", ";
	}
	cout << "\nBroj elemenata: " << polje.brojElemenata << endl;

	polje.Brisi();
	for (int i = 0; i < polje.red.size(); i++) {
		cout << polje.red[i] << ", ";
	}
	cout << "\nBroj elemenata: " << polje.brojElemenata << endl;

	return 0;
}