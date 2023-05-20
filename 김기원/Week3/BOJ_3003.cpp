#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<int> good = { 1, 1, 2, 2, 2, 8 };
    vector<int> lack;
    int piece;
    
    for (int i = 0; i < 6; i++) {
        cin >> piece;
        lack.push_back(piece);
    }
    
    for (int i = 0; i < 6; i++) {
        cout << good[i] - lack[i] << " ";
    }
    cout << "\n";
        
    return 0;
}
