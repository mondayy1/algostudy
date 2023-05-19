#include <iostream>
#include <string>
using namespace std;
int main(){
    string S;
    int A = 0;
    cin >> S;
    for(int i = 0 ;  i < S.length()/2; i++){
        if( S[i] != S[S.length()-i-1]) {
            A = -1;
            break;
        }
    }
    if(A == 0) cout << 1;
    else cout << 0;
}