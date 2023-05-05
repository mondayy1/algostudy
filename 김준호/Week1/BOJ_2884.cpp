#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a>>b;

	if (b < 45)
	{
		if (a == 0)
		{
			a = 24;
		}
			a--;
			b = 15 + b;
		
	}

	else if (b >= 45)
	{
		b= b - 45;
	}

	cout << a << " " << b;
	return 0;
}