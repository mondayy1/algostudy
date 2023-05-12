#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int T;
	cin >> T;
	cin.ignore();

	string s;
	for (int i = 0; i < T; i++)
	{
		getline(cin, s);
		cout << *s.begin() << *(s.end() - 1) << "\n";
	}
	return 0;
}