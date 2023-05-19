#include <iostream>
using namespace std;
int main(){
    while(1){
        int A = 0, B = 0;
        cin >> A >> B;
        if(A == 0 && B == 0) break;
        if(B > A && B%A == 0) cout << "factor\n";
        else if(A > B && A%B == 0) cout << "multiple\n";
        else cout << "neither\n";
    }
}