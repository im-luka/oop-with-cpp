#include<iostream>
#include<vector>
#include<functional>

using namespace std;

vector<int> izdvoji(vector<int>& vek, function<bool(int)> uvjet) {
	vector<int> salji;
	for (int i = 0; i < vek.size(); i++) {
		if (uvjet(vek[i])) {
			salji.push_back(vek[i]);
		}
	}

	return salji;
}

int main()
{
	vector<int> brojevi = { 1, 4, 5, 7, 3, 6, 12, 65, 32, 8, 87, 55, 23, 22, 1, 1, 433, 66, 7, 433, 3, 32, 76, 8, 72, 256, 42 };

	vector<int> rez = izdvoji(brojevi, [](int n) {return ((n % 2 != 0) && (n % 3 != 0) && (n % 5 != 0)); });

	for (int i = 0; i < rez.size(); i++) {
		cout << rez[i] << " ";
	}
		
	return 0;
}