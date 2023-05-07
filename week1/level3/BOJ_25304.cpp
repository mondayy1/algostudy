#include <iostream>
using namespace std;
int main() {
    int X,N,realsum=0;
    cin >> X >> N;
    for(int i = 1; i <= N; i++){
        int a,b;
        cin >> a >> b;
        realsum += a*b;
    }
    if (realsum == X){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}