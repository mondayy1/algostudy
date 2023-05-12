#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	string s;
	int i;

	getline(cin, s);
	cin >> i;

	cout << s[i-1];

	return 0;
}