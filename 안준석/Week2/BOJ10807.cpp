#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    int x;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    int ans = 0;
    for(auto a: v){
        if(a==k) ans++;
    }
    cout << ans << endl;
}