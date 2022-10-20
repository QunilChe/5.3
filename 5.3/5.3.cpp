#include <iostream>
#include <cmath>
using namespace std;
double h(const double x);
int main()
{
	double rp, rk, z;
	int n;
	cout << "rp = "; cin >> rp;
	cout << "rk = "; cin >> rk;
	cout << "n = "; cin >> n;
	double rg = (rk - rp) / n;
	double r = rp;
	while (r <= rk)
	{
		z = h(1 + sqrt(r)) + pow( h(1 + r + pow(h(r), 2)), 2); // tyt minyaemo
		cout << r << " " << z << endl;
		r += rg;
	}
	return 0;
}
double h(const double x)
{
	if (abs(x) >= 1)
		return (1 + cos(x)) / (exp((-2)*x));
	else
	{
		double S = 0;
		int n = 0;
		double a = 1;
		S = a;
		do
		{
			n++;
			double R = (x*x*x) / ((27*(n*n*n))-(3*n));
			a *= R;
			S += a;
		} while (n < 5);
		return S;

	}
}