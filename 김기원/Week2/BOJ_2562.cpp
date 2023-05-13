#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, maxIndex = -1, max = 0;
    vector<int> v;
    
    for (int i = 0; i < 9; i++) {
        cin >> n;
        v.push_back(n);
    }
    
    for (int i = 0; i < 9; i++) {
        if (v[i] > max) {
            max = v[i];
            maxIndex = i;
        }
    }
    
    cout << max << '\n' << maxIndex + 1 << endl;
    
    return 0;
}
