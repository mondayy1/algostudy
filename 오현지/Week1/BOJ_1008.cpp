#include <iostream>
using namespace std;

int main() {
	int A, B;
	double ComputationalResults = 0;
	cin >> A >> B;
	ComputationalResults = (double)A / B;
	cout << fixed;
	cout.precision(9);
	cout << ComputationalResults;

	return 0;
}