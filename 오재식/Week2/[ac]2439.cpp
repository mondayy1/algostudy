#include<iostream>
using namespace std;
int main(){
    int i;
    cin>> i;
    for(int j = 1; j<=i; j++){
      cout.width(i-j+1);
        for(int k =0; k <j; k++) cout<< "*";
      cout<<endl;
    }
}