#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int N, v;
	cin >> N;

	vector<int> a;
	for (int i = 0; i < N; i++)
	{
		cin >> v;
		a.push_back(v);
	}
	cin >> v;

	cout << count(a.begin(), a.end(), v);

	return 0;
}