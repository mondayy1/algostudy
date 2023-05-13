#include<iostream>
using namespace std;
int main() {
    int i;
    cin>>i;
    for(int j = i; j>0; j--){
        for(int k = 0; k<j; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}