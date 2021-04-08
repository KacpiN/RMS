#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class RMS {
private:	
	vector<double> iks;
	int n = size(iks);
	double mi_iks(int n, vector<double> iks){
		double a, b = 0;
		for (int i = 0; i < n; i++)
		{
			a = iks[i];
			b += a;
		}
		double c = pow(n,-1) * b;
		return c;
		double Mi_x=c;
	}
	double sigma_iks(vector<double> iks) {
		double b = 0;
		double Mi_x = mi_iks(n, iks);
		for (int i = 0; i < n; i++)
		{
			double a = pow(iks[i] - Mi_x, 2);
			b += a;
		}
		double Sigma_x = sqrt(pow(n - 1, -1) * b);
		return sqrt(pow(n - 1, -1) * b);
	}
public:
	double wynik = sigma_iks(iks);
	RMS(vector<double> IKS) {
		vector<double> iks = IKS;
	}

};
int main() {
	vector<double> wektor = { 1, 2, 3, 40 };
	RMS test(wektor);
	cout << test.wynik;
	return 0;
}
