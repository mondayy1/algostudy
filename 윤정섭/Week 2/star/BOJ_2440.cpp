#include <iostream>
using namespace std;
#define endl '\n'

int main(void) {

	int num = 0;
	cin >> num;

	for (int i = num; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}