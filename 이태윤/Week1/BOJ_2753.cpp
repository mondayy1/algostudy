#include <iostream>

using namespace std;

int main() {
  int A;
  bool isYoon = true;
  cin >> A;

  if (A%4 == 0 && A%100 != 0 || A%400 == 0) isYoon = true;
  else isYoon = false;

  if (isYoon == true) cout << "1";
  if (isYoon == false) cout << "0";
  
  
}
