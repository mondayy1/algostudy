#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        cout << x[0] << x[x.length()-1] << endl;
    }
    return 0;
}