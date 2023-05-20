#include <iostream>
using namespace std;

int main(){

    int t,c;
    int m[4]={25,10,5,1};

    cin >> t;
    
    while(t--){

        cin >> c;

        for(int i=0;i<4;i++){

            cout << c/m[i]<<' ';
            c %= m[i];
        }

        cout <<'\n';
    }


}