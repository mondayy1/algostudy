#include<iostream>

using namespace std;
int main()
{
	int N,x;
	int min=0, max=0;
	int* arr;
	cin >> N;
	arr = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> x;
		arr[i] = x;
	}
	min = arr[0];
	max = arr[0];
	for (int i = 1; i < N; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
		else if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << min <<" " << max;
	delete[] arr;
	return 0;
}