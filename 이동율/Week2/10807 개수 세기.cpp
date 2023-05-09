#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    int search_num,res;
    res=0;
    cin>>search_num;
    for(auto i=v.begin();i!=v.end();i++){
        if(*i==search_num) res++;
    }
    cout<<res;
}