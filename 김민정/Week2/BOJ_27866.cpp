#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    int n;
    getline(cin,str);
    cin >> n;
    cout << str[n-1] << endl;
}