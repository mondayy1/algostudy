#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,x,sum=0;
    string str;
    cin >> n;
    cin.ignore();
    getline(cin,str);
    for (int i=0;i<n;i++){
        x = str[i] - '0';
        sum += x;
    }
    cout << sum << endl;
} //강제 (int)로 변환시 아스키코드 값이 나옴 stoi적용 안됨
//https://11001.tistory.com/14