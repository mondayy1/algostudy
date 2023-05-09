#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int N,min=0,max=0;
	cin >> N;
	vector<int>v(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}
	min = max = v[0];
	for (int i = 1; i < N; i++)
	{
		if (min > v[i])
		{
			min = v[i];
		}
		else if (max < v[i])
		{
			max = v[i];
		}
	}
	cout << min << " " << max;
}