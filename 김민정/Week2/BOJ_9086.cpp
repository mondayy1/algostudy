#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int n;
    cin >> n;
    cin.ignore(); //해당 부분 https://novlog.tistory.com/entry/C-입력-함수-정리-cin-getline-feat-cinignore?category=885399 참고
    for (int i =0;i<n;i++){
        getline(cin,str);
        cout << str.front();
        cout << str.back() << endl;
    }
}