#include <iostream>

using namespace std;

int main() {
  int A,B;
  cin >> A;
  cin >> B;

  if(A > 0  && B > 0) cout << "1";
  if(A > 0  && B < 0) cout << "4";
  if(A < 0  && B > 0) cout << "2";
  if(A < 0  && B < 0) cout << "3";
  
}
