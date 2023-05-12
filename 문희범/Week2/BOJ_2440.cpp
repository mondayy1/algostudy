#include <iostream>
using namespace std;

int main() {
	int in;
	cin >> in;

	for (int i = 0; i < in; i++) {
		for (int j = in-i; j >= 1; j--) {
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}