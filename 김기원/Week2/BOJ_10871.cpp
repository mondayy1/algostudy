#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, X, n;
    vector<int> A;
    
    cin >> N >> X;
    for (int i = 0; i < N; i++) {
        cin >> n;
        A.push_back(n);
    }
    
    for (int i = 0; i < A.size(); i++) {
        if (A[i] < X) cout << A[i] << ' ';
    }
    
    return 0;
}
