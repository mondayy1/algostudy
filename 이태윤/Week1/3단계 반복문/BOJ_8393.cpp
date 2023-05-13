#include <iostream>

using namespace std;

int main() {
  int A, sum = 0;
  cin >> A;

  while(A !=0){
    sum += A;
    A--;
  }
  cout << sum;
}
