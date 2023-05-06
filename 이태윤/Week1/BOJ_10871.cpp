#include <iostream>

using namespace std;

int main() {
  int A, input, B = 0;
  cin >> A;
  int arr[sizeof(int) * A];
  cin >> input;

  for (int i = 0; i < A; i++) {

    cin >> B;
    arr[i] = B;
  }

  for (int i = 0; i < A; i++) {
    if (arr[i] < input) {
      cout << arr[i] << " ";
    }
  }
}
