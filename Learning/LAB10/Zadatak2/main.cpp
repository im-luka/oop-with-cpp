#include<iostream>
#include<vector>
#include<functional>

using namespace std;

//ZADATAK 2
vector<int> izdvoji(vector<int>& niz, function<bool(int)> uvjet) 
{
	vector<int> novi;
	for (int i = 0; i < niz.size(); i++) {
		if (uvjet(niz[i])) {
			novi.push_back(niz[i]);
		}
	}
	return novi;
}

int main()
{
	vector<int> brojevi = { 1,4,5,7,3,6,12,65,32,8,87,55,23,22,1,1,433,66,7,433,3,32,76,8,72,256,42 };
	vector<int> rez = izdvoji(brojevi, [](int n) {return ((n % 2 != 0) && (n % 3 != 0) && (n % 5 != 0)); });

	for (int i = 0; i < rez.size(); i++) {
		cout << rez[i] << ", ";
	}

	return 0;
}