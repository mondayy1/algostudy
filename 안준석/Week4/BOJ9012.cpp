#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string x;
    int cnt;
    for(int i=0;i<n;i++){
        cnt = 0;
        cin >> x;
        for(int j=0;j<x.length();j++){
            if(x[j] == '(') cnt++;
            else cnt--;
            if(cnt<0){ 
                cout << "NO" << endl;
                break;
            }
        }
        if(cnt==0) cout << "YES" <<endl;
        else if(cnt>0) cout << "NO" << endl;
    }
}