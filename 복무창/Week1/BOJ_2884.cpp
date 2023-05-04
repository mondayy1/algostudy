#include <iostream>
using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;

	if (M < 45)
	{
		if (H == 0)
			H = 24;
		M += 15;
		H--;
	}
	else
	{
		M -= 45;
	}

	cout << H << " " << M;

	return 0;
}