#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

//BOJ_2720
int main() {

	int t, c, quarter, dime, nickel, penny;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> c;
		quarter = c / 25;
		dime = (c%25) / 10;
		nickel = (c%25)%10 / 5;
		penny = (c % 25) % 10 %5;
		cout << quarter<<" "<< dime<<" "<<nickel<<" "<<penny<<"\n";
	}
	return 0;
}

