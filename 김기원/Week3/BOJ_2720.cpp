#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T, C, M;
    cin >> T;
    
    for(int i = 0; i < T; i++) {
        vector<int> v;
        cin >> C;
        
        M = C / 25;
        C = C % 25;
        
        v.push_back(M);
        
        M = C / 10;
        C = C % 10;
        
        v.push_back(M);
        
        M = C / 5;
        C = C % 5;
        
        v.push_back(M);
        
        v.push_back(C);
        
        for (int j = 0; j < 4; j++) {
            cout << v[j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
