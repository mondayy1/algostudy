#include <iostream>
#include <string>

using namespace std;

int main(){
    cin.tie(NULL); 
    ios_base::sync_with_stdio(false);

    string x;
    cin >> x;
    for(int i=0;i<x.length()/2;i++){
        if(x[i] != x[x.length()-i-1]){
            cout << "0";
            return 0;
        }
    }
    cout << "1";
    return 0;
    
}

