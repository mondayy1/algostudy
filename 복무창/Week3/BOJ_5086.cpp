#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a, b;
	vector<pair<int, int>> v;

	while (1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		v.push_back({ a,b });
	}

	for (auto i : v)
	{
		if (i.second % i.first == 0)cout << "factor\n";
		else if (i.first % i.second == 0)cout << "multiple\n";
		else cout << "neither\n";
	}

	return 0;
}