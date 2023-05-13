#include <iostream>

using namespace std;

int main() {
  int A, B, T;
  cin >> T;
  int arr[sizeof(int)*T];

  for (int i = 0; i < T; i++) {
    cin >> A >> B;
    arr[i] = A+B;
  }

  for (int i = 0; i < T; i++) {
    cout << arr[i] << '\n';
  }
}
