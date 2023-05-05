#include <iostream>
using namespace std;
int main(){
    int a,b,c,d, sum = 0;
    cin>>d;
    cin>>c;
    for(int i =0; i < c; i++){
        cin>>a>>b;
        sum += a*b;
    }
    if(sum == d) cout<<"Yes";
    else cout<<"No";
    
}
