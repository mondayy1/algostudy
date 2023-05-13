#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, n, v, res = 0;
    vector<int> vec;
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> n;
        vec.push_back(n);
    }
    cin >> v;
    
    for (int i = 0; i < vec.size(); i++){
        if (vec[i] == v) res++;
    }
    
    cout << res << endl;
    
    return 0;
}
