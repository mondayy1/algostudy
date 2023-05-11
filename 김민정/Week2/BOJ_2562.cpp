#include <iostream>
using namespace std;

int main(){
    int arr[9];
    int index,max = 0;
    for (int i = 0;i<9;i++){
        cin >> arr[i];
        if (arr[i]>max){
            max = arr[i];
            index = i+1;
        }
    }
    cout << max << endl;
    cout << index << endl;
}