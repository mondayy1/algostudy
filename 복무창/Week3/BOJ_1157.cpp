#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	string s;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);

	// A : 65, Z : 90
	int ary[26] = { 0, };
	
	for (char i : s) ary[(int)i - 65]++;

	int tmp = max_element(ary, ary+26) - ary;
	(count(ary, ary+26, ary[tmp]) == 1) ? cout << (char)(tmp + 65) : cout << "?";

	return 0;
}