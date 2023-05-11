#include <iostream>
using namespace std;

int main(){
    int min,max,n,x;
    cin >> n;
    for(int i =0;i<n;i++){

        cin >> x;
        if(i == 0){
            min = x;
            max = x;
        }
        if (x < min){
            min = x;
        }
        if (x > max){
            max = x;
        }

    }
    cout << min << " " << max << endl;
}