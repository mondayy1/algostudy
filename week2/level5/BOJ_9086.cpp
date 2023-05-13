#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int i = 0; i < T ; i++){
        string S;
        cin >> S;
        cout << S.front() << S.back() << "\n";
    }
}