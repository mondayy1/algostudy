#include<iostream>
using namespace std;
int main()
{
	int P[6] = { 1,1,2,2,2,8 };
	int arr[6] = { 0, };
	int result[6] = { 0, };
	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 6; i++)
	{
		result[i] = P[i] - arr[i];
	}
	for (int i = 0; i < 6; i++)
	{
		cout << result[i]<<" ";
	}
	return 0;
}