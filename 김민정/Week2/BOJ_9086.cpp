#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int n;
    cin >> n;
    cin.ignore();
    for (int i =0;i<n;i++){
        getline(cin,str);
        cout << str.front();
        cout << str.back() << endl;
    }
}