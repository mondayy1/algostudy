#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int num;

	cin >> input >> num;
	cout << input[num-1];

	return 0;
}