#include<iostream>
using namespace std;
int main()
{
	double a, b;
	//float�� double�� ����=> ǥ���� �� �ִ� �Ǽ��� �󸶳� �����Ѱ�����
	//double�� �� ���� �Ҽ����� ǥ���Ͽ� ����� �� �־� �����ϱ⶧���� ��������

	cin >> a >> b;

	cout.precision(10);//precision���� �Ѱ��� �� ��ŭ�� ��µ�
	cout << a / b;

	return 0;
}