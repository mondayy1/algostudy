#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, min, max, temp;
    vector<int> V;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> temp;
        V.emplace_back(temp);
    }
    min = V[0];
    max = V[0];
    for(int j = 1; j < N ; j++){
        if(V[j] > max) max = V[j];
        if(V[j] < min) min = V[j];
    }
    cout << min << " " << max;
    return 0;
}