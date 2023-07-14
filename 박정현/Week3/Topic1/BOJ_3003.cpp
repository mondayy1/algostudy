#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    vector<int> maxPieces = {1, 1, 2, 2, 2, 8};
    vector<int> myPieces(6);

    for(int i=0;i<6;i++){
        cin >> myPieces[i];
    }

    for(int i=0;i<6;i++){
        cout << maxPieces[i] - myPieces[i]<< ' ';
    }
    
    return 0;
}