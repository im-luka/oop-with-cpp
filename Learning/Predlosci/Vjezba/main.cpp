#include<iostream>
#include<vector>

using namespace std;

void ispis(vector<string> niz) {
	for (int i = 0; i < niz.size(); i++) {
		cout << niz[i] << endl;
	}
}

int main()
{
	int n;
	cout << "Unesi broj n: ";
	cin >> n;

	vector<string> imena;

	string ime;
	for (int i = 0; i < n; i++) {
		cin >> ime;
		imena.push_back(ime);
	}

	ispis(imena);

	for (int i = 0; i < imena.size(); i++) {
		string pomoc;
		for (int j = i; j < imena.size(); j++) {
			if (imena[i] > imena[j]) {
				pomoc = imena[i];
				imena[i] = imena[j];
				imena[j] = pomoc;
			}
		}
	}

	cout << endl << "-------------" << endl;
	ispis(imena);

	int maks = -1;
	string xvar;
	for (int i = 0; i < imena.size(); i++) {
		int cnt = 0;
		for (int j = i; j < imena.size(); j++) {
			if (imena[j] == imena[i]) {
				cnt++;
			}
		}
		if (cnt > maks) {
			maks = cnt;
			xvar = imena[i];
		}
	}

	cout << endl << "Najcesce ime je " << xvar << " koje se pojavljuje " << maks << " puta.\n";

	return 0;
}