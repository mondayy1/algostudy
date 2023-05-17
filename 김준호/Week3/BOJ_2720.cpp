#include<iostream>
using namespace std;
void cal(int* arr,int t)
{
	int a[4] = { 25,10,5,1 };
	int b[4] = { 0, };
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j <4; j++)
		{
			b[j]=arr[i] / a[j];
			arr[i] = arr[i] % a[j];


		}

		for (int q = 0; q < 4; q++)
		{
			cout << b[q] << " ";
		}
		cout << "\n";
		for (int q = 0; q < 4; q++)
		{
			b[q] = 0;
		}
	}
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	int* arr = new int[t];
	for (int i = 0; i < t; i++)
	{
		cin >> arr[i];
	}
	cal(arr,t);
	return 0;
}