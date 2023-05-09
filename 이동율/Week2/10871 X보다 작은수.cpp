#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,standard;
    vector<int> v;
    cin>>n>>standard;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    for(auto i=v.begin();i!=v.end();i++){
        if(*i<standard) cout<<*i<<" ";
    }
}