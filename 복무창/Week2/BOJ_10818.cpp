#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int N, tmp;
	cin >> N;

	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
	}
	cout << *min_element(v.begin(), v.end()) << " " << *max_element(v.begin(), v.end());

	return 0;
}