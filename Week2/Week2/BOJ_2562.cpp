#include <iostream>
#include <vector>
using namespace std;

int main() {

	int max, index;
	vector<int> a(9);

	for (int i = 0; i < 9; i++) {
		cin >> a[i];
	}
	max = a[0];
	index = 0;
	for (int i = 0; i < 9; i++) {
		if (max < a[i]) {
			max = a[i];
			index = i;
		}
	}
	cout << max<<"\n";
	cout << index+1;
}