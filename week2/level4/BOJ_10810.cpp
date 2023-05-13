#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, M;
    cin >> N >> M;
    vector<int> V(N);
    for(int i = 0; i < M; i++){
        int s, e, ball;
        cin >> s >> e >> ball;
        for(int j = s-1; j <= e-1; j++){
            V[j] = ball;
         }
    }
    for(int k = 0; k < N; k++){
        cout << V[k] << " ";
    }
}