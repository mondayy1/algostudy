#include <iostream>
using namespace std;
int main() {
    int H, M;
    cin >> H >> M;
    if( M >= 45 ){
        cout << H << " " << M-45 << endl;
    }
    else{
       if (H == 0){
        cout << 23 << " " << 60 + (M-45) << endl;
       }
       else{
        cout << H-1 << " " << 60 + (M-45) << endl;
       }
    }
    return 0;
}