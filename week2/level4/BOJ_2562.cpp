#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max=0, maxi=0, temp;  // maxi를 초기화 안해줬더니 틀렸다고 나옴. 왜?
    vector<int> V;
    for(int i = 0; i < 9; i++){
        cin >> temp;
        V.emplace_back(temp);
    }
    for (int j = 0; j < 9; j++){
        if(V[j] > max) {
            maxi = j+1;
            max = V[j];
        }
    }
    cout << max << "\n" << maxi;
    return 0;
}