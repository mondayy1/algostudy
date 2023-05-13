#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	string str;
	cin >> str;

	int n;
	cin >> n;

	cout << str.at(n-1);

	return 0;
}