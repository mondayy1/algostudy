#include <iostream>
using namespace std;

int sub(int a, int b) {
	return a - b;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << sub(a, b);
	return 0;
}