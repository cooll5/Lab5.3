#include <iostream>
#include <cmath>
using namespace std;
double p(const double x);
int main()
{
 {
	double zp, zk, w, z, n;
	int p;
	cout << "zp = "; cin >> zp;
	cout << "zk = "; cin >> zk;
	cout << "n = "; cin >> n;
	double dp = (zk - zp) / n*z;
	double z = zp;
	while (z <= zk)
	{
		w = z*(p^2+1)-z*(p^2-1)+2*z*(p);
		cout << z << " " << w << endl;
		z += dp;
	}
	return 0;
 }
 double z(const double x)
 {
	 double z(const double x);
		if (abs(x) >= 1)
			return (sin(x) + 1) / (pow(cos(x), 2) + exp(x));
		else
		{
			double S = 0;
			int k = 0;
			double a = 1 / exp(x ^ 2);
			S = a;
			do
			{
				k++;
				double R = 2 * x;
				a *= R;
				S += a;
			} while (k < 6);
			return S;
		}
 }
}
