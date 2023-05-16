#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	getline(cin, s);

	string rs = s;
	reverse(s.begin(), s.end());

	(s == rs) ? cout << 1 : cout << 0;

	return 0;
}