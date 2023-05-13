#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M, begin, end, ball;
    
    cin >> N >> M;
    vector<int> v(N);
    
    for (int i = 0; i < M; i++) {
        cin >> begin >> end >> ball;
        for (int j = begin - 1; j < end; j++) {
            v[j] = ball;
        }
    }
    
    for (int i = 0; i < N; i++) {
        cout << v[i] << ' ';
    }
    
    return 0;
}
