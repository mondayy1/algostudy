#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int N, M, i, j, k;
	cin >> N >> M;

	vector<int>v(N, 0);

	for (int t = 0; t < M; t++)
	{
		cin >> i >> j >> k;
		for (int u = i; u <= j; u++)
			v[u - 1] = k;
	}

	for (int i : v)
		cout << i << " ";

	return 0;
}