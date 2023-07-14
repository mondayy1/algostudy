#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    vector<int> counts(26);
    int idx=0;
    string str;
    char result = 'A';
    cin >> str;

    
    for(auto &c: str){
        counts[toupper(c)-'A']++;
    }

    for(int i=1;i<26;i++){
        if(counts[idx] < counts[i]){
            idx = i;
            result = 'A'+idx;
        }
        else if(counts[idx] == counts[i])
            result = '?';
    }
    cout<<result;

    return 0;
}