#include<iostream>

using namespace std;

template<class T, class T2>
class Kalkulator {
public:
	T broj1;
	T2 broj2;

	Kalkulator(T _broj1, T2 _broj2) {
		broj1 = _broj1;
		broj2 = _broj2;
	}

	auto suma();
};
template<class T, class T1>
auto Kalkulator<T, T1>::suma() {
	return broj1 + broj2;
}

int main()
{
	int x;
	double y;
	cout << "Unesi int broj x i double broj y: ";
	cin >> x >> y;
	Kalkulator<int, double> inst(x, y);
	cout << inst.suma();

	double x1;
	int y2;
	cout << "\n\nUnesi double broj x i int broj y: ";
	cin >> x1 >> y2;
	Kalkulator<double, int> inst2(x1, y2);
	cout << inst2.suma();

	return 0;
}