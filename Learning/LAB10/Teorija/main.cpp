#include<iostream>
#include <list>

using namespace std;

template<class T>
class MyContainer {
private:
	T* elementi;
	int current;
public:
	MyContainer() {
		current = 0;
		elementi = (T*)malloc(sizeof(T) * 100);
	}
	void add(T item) {
		elementi[current++] = item;
	}
};

double suma(double a, double b) {
	return a + b;
}

template<class T1, class T2>
double suma(T1 a, T2 b) {
	return a + b;
}

template<class T>
void PrintMax(T a, T b) {
	cout << (a < b ? a : b) << endl;
}

template<class T>
void Ako(T tjedan, T k233) {
	cout << (tjedan > k233 ? k233 : tjedan) << endl;
}

template<class T>
T zbroj(T a, T b) {
	return (a + b);
}

int main()
{
	cout << zbroj(2, 4);
	cout << zbroj(3.14, 6.33);

	return 0;
}