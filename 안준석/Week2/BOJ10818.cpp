#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    int a;
    for(int i=0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }
    int max = -1000000, min = 1000000;
    for(auto x: v){
        if(x>max) max = x;
        if(x<min) min = x;
    }
    cout << min << " " << max;
}