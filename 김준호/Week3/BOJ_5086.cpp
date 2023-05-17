#include<iostream>
#include<vector>
using namespace std;
int main()
{
//2개의 수 주어질때 3가지 관계 구하는
	//1. 첫번째 숫자가 두번째 숫자의 약수이면 factor
	//2. 첫번째 숫자가 두번째 숫자의 배수이다. multiple
	//3. 첫번째 숫자가 두번째 숫자의 약수와 배수 모두 아니다. neither

	int a, b,t=0;
	vector<string>v;
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	while (1)
	{
		t = 0;
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			break;
		}
		else {
			if (a <= b)
			{
				if (b % a == 0)
				{
					v.push_back("factor");
					t = 1;
				}
				//약수인지 파악
			}
			else if (a > b)
			{
				if (a % b == 0)
				{
					v.push_back("multiple");
					t = 2;
				}
			}

			if (t == 0)
			{
				v.push_back("neither");
			}
		}

	}
	for (string i : v)
	{
		cout << i << "\n";
	}
	return 0;
}