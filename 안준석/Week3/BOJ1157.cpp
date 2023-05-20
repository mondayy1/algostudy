#include <iostream>
#include <string>

using namespace std;

int main(){
    string x;
    cin >> x;
    int max=0;
    char ans;
    int arr[30] = {0,};
    for(int i=0;i<x.length();i++){
        if(x[i]>='a') x[i] -= 32;
        if(++arr[x[i]-'A']>max){
            max = arr[x[i]-'A'];
            ans = x[i];
        }
    }
    for(int i=0;i<30;i++){
        if(arr[i] == max && ans != i+'A') ans = '?';
    }
    cout << ans;
}
