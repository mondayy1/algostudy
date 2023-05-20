#include <iostream>

using namespace std;

int main(){
	int chess[6] = {1,1,2,2,2,8};
	int t[6];
	for(int i=0;i<6;i++){
		cin >> t[i];
	}
	for(int i=0;i<6;i++){
		chess[i] -= t[i];
		cout << chess[i] << " ";
	}
}
