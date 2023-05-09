#include<iostream>
#include<string>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    
    string str;
    cin>>str;
    int num;
    cin>>num;
    cout<<str[num-1];
}