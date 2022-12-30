#pragma once
#include <algorithm>
#include <vector>

using namespace std;

class Kompleksni
{
public:
	double re;
	double im;

	double Modul(double x, double y)
	{
		if (x < 0) {
			x = -x;
		}
		if (x < 0) {
			x = -x;
		}
		return sqrt((x * x) + (y * y));
	}
};

