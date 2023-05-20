#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int first, second;
    
    while (1) {
        cin >> first >> second;
        if (first == 0 && second == 0) break;
        
        if (second % first == 0) {
            cout << "factor" << "\n";
        }
        if (first % second == 0) {
            cout << "multiple" << "\n";
        }
        if (first % second != 0 && second % first != 0){
            cout << "neither" << "\n";
        }
    }
    
    return 0;
}
