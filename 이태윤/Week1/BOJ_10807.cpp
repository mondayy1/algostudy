#include <iostream>

using namespace std;

int main() {
  int A, input, B, count = 0;
  cin >> A;
  int arr[sizeof(int) * A];

  for (int i = 0; i < A; i++) {
    cin >> input;
    arr[i] = input;
  }

  cin >> B;

  for (int i = 0; i < A; i++) {
    if (arr[i] == B) {
      count++;
    }
  }

  cout << count;
}
