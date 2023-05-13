#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, n;
    int max = -1000000;
    int min = 1000000;
    vector<int> v;
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> n;
        v.push_back(n);
    }
    
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > max) max = v[i];
        if (v[i] < min) min = v[i];
    }
    
    cout << min << ' ' << max << endl;
    
    return 0;
}
