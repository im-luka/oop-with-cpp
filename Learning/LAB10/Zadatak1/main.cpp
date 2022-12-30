#include<iostream>
#include<vector>

using namespace std;

//ZADATAK 1
template<class T>
vector<T> NeparniElementi(vector<T>& niz) {
	vector<T> salji;
	for (int i = 0; i < niz.size(); i++) {
		if (niz[i] % 2 != 0) {
			salji.push_back(niz[i]);
		}
	}
	return salji;
}

int main()
{
	vector<int> polje1 = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> lista1 = NeparniElementi(polje1);
	for (int i = 0; i < lista1.size(); i++) {
		cout << lista1[i] << ", ";
	}

	return 0;
}