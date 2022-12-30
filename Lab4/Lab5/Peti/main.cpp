#include<iostream>
#include<vector>

using namespace std;

template<class T>
vector<T> IznadProsjeka(vector<T> vek) {
	vector<T> salji;
	double prosjek = 0;
	for (int i = 0; i < vek.size(); i++) {
		prosjek += vek[i];
	}
	prosjek = prosjek / vek.size();

	for (int i = 0; i < vek.size(); i++) {
		if (vek[i] > prosjek) {
			salji.push_back(vek[i]);
		}
	}

	return salji;
}

int main()
{
	vector<int> vek1 = { 1,2,3,4,5 };
	vector<int> vek2 = IznadProsjeka(vek1);

	for (int i = 0; i < vek2.size(); i++) {
		cout << vek2[i] << " ";
	}

	return 0;
}