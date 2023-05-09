#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int N, k, cnt = 0;

	cin >> N;
	vector<int>v(N);
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}
	cin >> k;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == k)
		{
			cnt++;
		}
	}
	cout << cnt;
}