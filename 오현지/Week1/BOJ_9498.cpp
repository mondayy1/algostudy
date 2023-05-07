#include <iostream>
using namespace std;
int main() {
	int yourGrade = 100;
	cin >> yourGrade;
	if (90 <= yourGrade && yourGrade <= 100) cout << 'A';
	else if (80 <= yourGrade && yourGrade <= 89) cout << 'B';
	else if (70 <= yourGrade && yourGrade <= 79) cout << 'C';
	else if (60 <= yourGrade && yourGrade <= 69) cout << 'D';
	else cout << 'F';

	return 0;
}