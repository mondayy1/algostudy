#include <iostream>
using namespace std;

int mul(int a, int b) {
	return a * b;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << mul(a, b);
	return 0;
}