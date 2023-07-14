#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[10] = {1, 1, 2, 3, 4, 4, 5, 5, 6, 7};
    set<int> s;
    for(int i=0;i<10;i++){
        s.insert(arr[i]);
    }
    s.erase(1);
    for(set<int>::iterator iter=s.begin(); iter != s.end();iter++){
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}