#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int N;
	cin >> N;
	cin.ignore();

	string s;
	getline(cin, s);

	int sum = 0;
	for (char i : s)
		sum += i - '0';

	cout << sum;
}