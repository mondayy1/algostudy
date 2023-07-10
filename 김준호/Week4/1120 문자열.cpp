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
//길이 같아질때까지 a 앞,뒤 아무 알파벳 추가
//A,B 차이 최소 되도록 차이 출력
//B기준으로 배열 만든 뒤 맞지않으면 0 맞으면 ++해서 시작지점부터 끝까지 표시