#include <iostream>


using namespace std;

int main(){
    int T, N;
    cin >> T;
    for(int i = 0; i < T; i++){
        int C, Q = 0, D = 0 , N = 0 , P = 0;
        cin >> C;
        Q = C/25;
        C %= 25;
        D = C/10;
        C %= 10;
        N = C/5;
        C %= 5;
        P = C;
        cout << Q << " " << D << " " <<  N << " " << P << "\n"; 
    }
}