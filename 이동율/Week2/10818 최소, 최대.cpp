#include<iostream>
#include<vector>

using namespace std;

int main(){
    int max,min;
    max=-1000000;
    min=1000000;
    int n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    for(auto i=v.begin();i!=v.end();i++){
        if(*i<min) min=*i;
        if(*i>max) max=*i;
    }
    cout<<min<<" "<<max;
}