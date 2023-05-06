#include <iostream>

using namespace std;

int main() {
  int input, max;
  int count = 1;
  int arr[9];

  for (int i = 0; i < 9; i++) {
    cin >> input;
    arr[i] = input;
  }

  max = arr[0];

  for (int i = 0; i < 9; i++) {
    if (arr[i] > max) {
      max = arr[i];
      count = i + 1;
    }
  }

  cout << max << "\n" << count;
}
