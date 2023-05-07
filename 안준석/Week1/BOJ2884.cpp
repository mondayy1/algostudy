#include <iostream>

using namespace std;

int main(){
    int h,n;
    cin >> h >> n;
    if(n-45<0){
        h = (h-1+24)%24;
    }
    n = (n-45+60)%60;
    cout << h << " " << n;
    return 0;
}