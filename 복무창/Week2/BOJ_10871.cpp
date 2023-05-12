#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int N, X, tmp;
	cin >> N >> X;
	vector<int> v;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		if (X > tmp)
			v.push_back(tmp);
	}

	for (int i : v)
		cout << i << " ";
}