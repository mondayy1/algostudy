#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<pair<int, int> > pos(100005);
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> pos[i].first >> pos[i].second; 
    }

    sort(pos.begin(), pos.begin()+N);

    for(int i=0;i<N;i++){
        cout << pos[i].first << ' ' << pos[i].second << '\n';
    }
    return 0;
}