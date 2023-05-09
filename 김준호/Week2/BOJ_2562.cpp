#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v(9);
	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i];
	}
	int max = v[0];
	int s_max=0;
	for (int i = 1; i < v.size(); i++)
	{
		if (max < v[i])
		{
			max = v[i];
			s_max = i;
		}
	}
	s_max += 1;
	cout << max << "\n" << s_max;
	return 0;
}