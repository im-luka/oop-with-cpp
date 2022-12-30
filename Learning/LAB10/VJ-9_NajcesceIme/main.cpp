#include<iostream>
#include <map>

using namespace std;


int main() 
{
	map<string, int> imena;
	int n;

	cout << "Unesi n: ";
	cin >> n;

	map<string, int>::iterator it;

	string ime;
	for (int i = 0; i < n; i++) {
		cin >> ime;
		imena[ime]++;
	}

	string pomoc;
	int max = -1;
	for (it = imena.begin(); it != imena.end(); it++) {
		if (it->second > max) {
			max = it->second;
			pomoc = it->first;
		}
	}

	cout << endl << "Najcesce ime je " << pomoc << " koje se pojavljuje " << max << " puta.\n";

	return 0;
}