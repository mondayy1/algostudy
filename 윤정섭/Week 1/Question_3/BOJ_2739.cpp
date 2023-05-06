#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

int main(void) {
	int Input_Num_data = 0;
	cin >> Input_Num_data;
	for (int j = 1; j < MAX_SIZE; j++) 
			cout << Input_Num_data << " * " << j << " = " << Input_Num_data * j << endl;
		
	return 0;
}