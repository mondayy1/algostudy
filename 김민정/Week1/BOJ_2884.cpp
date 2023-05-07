#include <iostream>
using namespace std;
int main(){
    int H,M;
    cin >> H >> M; //-45분을 설정해야한다
    if (H == 0 && M < 45){
        H = 23;
        M = 60 - (45-M);
        
    } else if (M <45) {
        H--;
        M = 60 - (45-M);
    } else {
        M -= 45;
    }
    cout << H << " " << M << endl;
}