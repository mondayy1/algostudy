#include<iostream>
using namespace std;
int main()
{
	double a, b;
	//float와 double의 차이=> 표현할 수 있는 실수가 얼마나 정밀한가차이
	//double이 더 많은 소숫점을 표현하여 계산할 수 있어 정밀하기때문에 오차적음

	cin >> a >> b;

	cout.precision(10);//precision으로 넘겨준 값 만큼만 출력됨
	cout << a / b;

	return 0;
}