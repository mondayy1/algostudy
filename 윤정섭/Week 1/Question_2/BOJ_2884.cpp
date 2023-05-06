#include <iostream>
using namespace std;

void timer_Calculation(int *Hour, int *Minute) {
	*Minute = *Minute - 45;
	if (*Minute < 0) {
		*Hour = *Hour - 1;
		*Minute = *Minute + 60;
	}
	if (*Hour < 0) *Hour = 23;
}

int main(void) {

	int Hour = 0;
	int Minute = 0;
	cin >> Hour >> Minute;
	timer_Calculation(&Hour, &Minute);
	cout << Hour << " " << Minute;
	return 0;
}