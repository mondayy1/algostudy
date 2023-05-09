#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,m,q,w,e;
	cin >> n>>m;
	vector<int>v(n+1);
	for (int i = 0; i < m; i++)
	{
		cin >> q >> w >> e;

			for (int j = q; j <= w; j++)
			{
				v[j] = e;
			}
	}

	for (int i = 1; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	return 0;
}