#include<iostream>
using namespace std;
int main(){
    string str;
    int sum =0, j;
    cin>>j;
    cin>>str;
    for(int i =0; i<j; i++){
       sum += str[i]-48; 
    }
    cout<<sum;
}