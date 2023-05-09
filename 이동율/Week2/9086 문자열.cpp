#include<iostream>
#include<string>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    
    int t;
    for(int i=0;i<t;i++){
        string str;
        cin>>str;
        cout<<str[0]<<str[str.length()-1];
    }
}