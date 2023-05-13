#include <iostream>
using namespace std;

int main(){

    int n,num;
    int min =10000;
    int max=-10000;

    cin >> n;

    for(int i=0;i<n;i++){

        cin>>num;
        if(max<num) max=num;
        if(min>num) min=num;
    }

    cout<<min<<' '<<max;
}