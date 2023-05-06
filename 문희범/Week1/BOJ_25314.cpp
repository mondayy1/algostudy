#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	for (int i = 1; i <= int(a/4); i++) {
		cout << "long ";
	}
	cout << "int";

	return 0;
}