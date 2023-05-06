#include <iostream>

using namespace std;

int main() {
  int A;
  cin >> A;

  if (100>=A && A >=90) cout << "A";
  else if (90 > A && A >= 80) cout << "B";
  else if (80 > A && A >= 70) cout << "C";
  else if (70 > A && A >= 60) cout << "D";
  else cout << "F";
  
}
