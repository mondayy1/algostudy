#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec(9);
    int max=0,i=0,k;

    for(i=0;i<9;i++){
        cin >> vec.at(i);
    }
    for(i=0;i<9;i++){
        if(vec[i]>max){
            max=vec[i];
            k=i;
        }
    }
    cout << max << endl;
    cout << k+1 << endl;

    return 0;
}