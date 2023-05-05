#include<iostream>

using namespace std;
int main()
{
	int arr[9],max=0,N;
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 9; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			N = i;
		}
	}
	cout << max << "\n" << N+1;

	return 0;
}