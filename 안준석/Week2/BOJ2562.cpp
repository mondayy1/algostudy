#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    int i;
    int n;
    for(i=0;i<9;i++){
        cin >> n;
        v.push_back(n);
    }
    int max=0, midx;
    for(i=0;i<9;i++){
        if(max < v[i]) {
            max = v[i];
            midx = i;
        }
    }
    cout << max << endl;
    cout << midx+1 << endl;
    return 0;
}
