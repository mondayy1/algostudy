#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int N, k;
	cin >> N >> k;
	vector<int>v(N);
	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i];
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] < k)
		{
			cout << v[i] << " ";
		}
	}
}