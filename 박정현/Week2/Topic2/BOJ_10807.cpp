#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int temp;
    vector<int> counts(250, 0);
    int v;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> temp;
        counts[temp+100]++;
    }
    
    cin >> v;

    cout << counts[v+100];
    return 0;
}