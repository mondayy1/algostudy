#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, X, temp;
    vector<int> V;
    cin >> N >> X;
    for(int i = 0; i < N; i++){
        cin >> temp;
        V.emplace_back(temp);
    }
    for(int j = 0; j < N ; j++){
        if (X > V[j]) cout << V[j] << " ";
    }
    return 0;
}