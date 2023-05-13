#include <iostream>
#include <string>

using namespace std;

int main() {
  int h, m = 0;
  int time = 0;  
  cin >> h >> m;
  cin >> time;
  int result = m + time;

  if (result >= 60) {
    while (result >= 60) {
      h += 1;
      result -= 60;
    }
    if (h >= 24) {
      h -= 24;
      cout << h << ' ' << result;
    } else
      cout << h << ' ' << result;
  } else {
    cout << h << ' ' << result;
  }
}
