#include <iostream>
using namespace std;

int main()
{
	int c[6] = { 1,1,2,2,2,8 }, k, q, r, b, kn, p;
	cin >> k >> q >> r >> b >> kn >> p;
	cout << c[0] - k << " " << c[1] - q << " " << c[2] - r
		<< " " << c[3] - b << " " << c[4] - kn << " " << c[5] - p;

	return 0;
}