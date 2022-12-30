#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool sortiranje(int a, int b) {
	return a < b;
}

class Hej {
public:
	bool operator()(int a, int b) {
		return a < b;
	}
};

int main()
{
	vector<int> x = { 3,-1,0,4,1 };
	//sort(x.begin(), x.end(), sortiranje);
	//sort(x.begin(), x.end(), Hej());
	sort(x.begin(), x.end(), [](int a, int b) {return a < b; });

	for (int i = 0; i < x.size(); i++) {
		cout << x[i] << " ";
	}

	cout << "\n----------------------------\n";

	int xv = 2, y = 3, umnozak;
	//umnozak = [xv, y]() {return xv * y; }();
	//umnozak = [](int x, int y) {return x * y; }(xv, y);
	umnozak = [&xv](int z) {return xv * z; }(y);
	cout << umnozak << endl;

	return 0;
}