#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n, max, min;

	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	max = a[0];
	min = a[n - 1];
	for (int i = 0; i < n; i++) {
		if (max > a[i])
			max = a[i];
		if (min < a[i])
			min = a[i];
	}
	cout << max << " " << min;
}