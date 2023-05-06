#include <iostream>

using namespace std;

int main() {
  int A,B;
  cin >> A >> B;

  if(B - 45 < 0){
    if(A == 0) A = 24;
    B += 15;
    A--;
    if(A < 0){
      A += 24;
    }
  }
  else{
    B-=45;
  }

  cout << A << " " << B;
  
}
