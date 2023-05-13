#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> v;
  int idx, max = -1000000;
  for (int j = 0; j < 9; j++) {
    int k;
    cin >> k;
    if(k > max){
        max = k;
        idx = j+1;
    }
    v.push_back(k);
  }
  cout << max << endl;
  cout << idx;
}