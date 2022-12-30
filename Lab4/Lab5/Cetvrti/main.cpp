#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> brojevi = { 1,4,5,7,3,6,12,65,32,8,87,55,23,22,1,1,433,66,7,433,3,32,76,8,72,256,42 };
	int brInterval = 0;
	int low, high;
	cin >> low >> high;

	[=, &brInterval](vector<int> vek) {
		for (int i = 0; i < vek.size(); i++) {
			if (vek[i] >= low && vek[i] <= high) {
				brInterval++;
			}
		}
	}(brojevi);

	cout << brInterval << endl;

	return 0;
}