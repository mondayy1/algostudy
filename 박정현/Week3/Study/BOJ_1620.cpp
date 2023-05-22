#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    map<string, int> pokeToI;
    map<int, string> iToPoke;
    int N, M;
    string pokeName;
    string question;
    cin >> N >> M;

    for(int i=0;i<N;i++){
        cin >> pokeName;
        pokeToI.insert(make_pair(pokeName, i+1));
        iToPoke.insert(make_pair(i+1, pokeName));
    }
    for(int i=0;i<M;i++){
        cin >> question;
        if(isalpha(question[0]))
            cout << pokeToI[question] << '\n';
        else
            cout << iToPoke[atoi(question.c_str())] << '\n';
    }
    return 0;
}