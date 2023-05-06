#include <iostream>
using namespace std;

int main() {
	int N, bite;
	cin >> N;
	bite = N / 4;

	for (int i = 0; i < bite; i++) {
		cout << "long ";
	}
	cout << "int";
}