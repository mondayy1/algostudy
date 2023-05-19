#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string S;
    cin >> S;
    vector<int> V(26);
    for(int i = 0; i < S.length(); i++){
        if((int)S[i] > 96){  
            int n = (int)S[i]-97;
            V[n] += 1;
        }
        else{
            int n = (int)S[i]-65;
            V[n] += 1;
        }
    }
    int max = 0, maxN = 0, same = 0;
    for(int j = 0; j < 26; j++){
        if (max < V[j]) {
            max = V[j];
            maxN = j;
        }
    }
    for(int j = 0; j < 26; j++){
        if(max == V[j]) {
            same++;
        }
    }
    if(same>1) cout << "?";
    else {
        char ch = (char)('A'+maxN);
        cout << ch;
    }
}

