#include<iostream>

using namespace std;
int main()
{
	string s;
	char c[10], d[10];
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> s;
		c[i] = s[0];
		d[i] = s[s.length() - 1];
	}
	for (int i = 0; i < t; i++)
	{
		cout << c[i] << d[i] << endl;
	}
	return 0;
}