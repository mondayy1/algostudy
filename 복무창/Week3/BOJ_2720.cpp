#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T, tmp;
	cin >> T;

	vector<int> v;
	for (int i = 0; i < T; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
	}

	for (int i : v) // ÄõÅÍ: 25, ´ÙÀÓ: 10, ´ÏÄÌ: 5, Æä´Ï: 1
	{
		while (i != 0)
		{
			if (i / 25 > 0)
			{
				cout << i / 25 << " ";
				i %= 25;
			}
			else cout << "0 ";

			if (i / 10 > 0)
			{
				cout << i / 10 << " ";
				i %= 10;
			}
			else cout << "0 ";

			if (i / 5 > 0)
			{
				cout << i / 5 << " ";
				i %= 5;
			}
			else cout << "0 ";

			if (i / 1 > 0)
			{
				cout << i / 1 << " ";
				i %= 1;
			}
			else cout << "0 ";
		}
		cout << "\n";
	}

	return 0;
}