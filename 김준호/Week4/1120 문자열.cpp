#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	string s2;
	cin >> s1 >> s2;
	int m = 51;
	int cnt = 0;
	for (int i = 0; i <= s2.length() - s1.length(); i++)
	{
		cnt = 0;
		for (int j = 0; j < s1.length(); j++)
		{
			if (s1[j] != s2[i + j])
			{
				cnt++;
			}
		}
		m = min(cnt, m);
	}
	cout << m;
}

//asd
//dgsfgaa
//���� ������������ a ��,�� �ƹ� ���ĺ� �߰�
//A,B ���� �ּ� �ǵ��� ���� ���
//B�������� �迭 ���� �� ���������� 0 ������ ++�ؼ� ������������ ������ ǥ��