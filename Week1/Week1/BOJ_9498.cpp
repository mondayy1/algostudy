#include <iostream>
using namespace std;

int main() {
	int num;

	cin >> num;

	if (90 <= num && num<= 100) 
		cout << "A" << endl;
	else if (80 <= num && num < 90)
		cout << "B" << endl;
	else if (70 <= num && num < 80)
		cout << "C" << endl;
	else if (60 <= num && num < 70)
		cout << "D" << endl;
	else
		cout << "F" << endl;

	return 0;
}