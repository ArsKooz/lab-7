#include <iostream>
using namespace std;

int main() {
	double a1, b1, a2, b2, c1, c2, x, y, d, d1, d2;
	cout << "Vvedite znacheniya A1 B1 C1 A2 B2 C2\n";
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	d = a1 * b2 - b1 * a2;
	d1 = c1 * b2 - b1 * c2;
	d2 = a1 * c2 - c1 * a2;
	if(d!=0 )
	{
		x = d1 / d;
		y = d2 / d;
		cout << "x=" << x << "\ny=" << y;
	}
	else 
	{
		if ((d1 != 0) || (d2 != 0))
		{
			cout << "Reshenii net";
		}
		else 
		{
			cout << "Resenii beskonechno mnogo";
		}
	}

}