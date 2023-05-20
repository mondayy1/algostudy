#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string str;
    bool isPal = 1;
    cin >> str;

    for(int i=0;i<str.length() /2; i++){
        if(str[i] != str[str.length()-i-1]){
            isPal = 0;
            break;
        }
    }
    cout<< isPal;
    return 0;
}