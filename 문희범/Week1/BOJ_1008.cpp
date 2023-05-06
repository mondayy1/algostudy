#include <iostream>
using namespace std;

double divi(int a, int b) {
	return double(a) / double(b);
}

int main() {
	int a, b;
	cin >> a >> b;
	cout.precision(12);
	cout << divi(a, b);
	return 0;
}