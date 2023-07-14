#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, M;
    int i, j;
    vector<int> baskets;

    cin >> N >> M;
    baskets.resize(N+1);
    for(int n=0;n<N;n++){
        baskets[n] = n+1;
    }
    for(int m=0;m<M;m++){
        cin >> i >> j;
        reverse(baskets.begin()+i-1, baskets.begin()+j);
    }

    for(int n=0;n<N;n++)
        cout<<baskets[n] <<' ';

    return 0;
}