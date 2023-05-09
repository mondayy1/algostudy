#include<iostream>
#include<vector>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    
    int max;
    max=0;
    int n;
    vector<int> v;
    for(int i=0;i<9;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    int res=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>max) {
            max=v[i];
            res=i+1;
        }
    }
    cout<<max<<"\n"<<res;
}