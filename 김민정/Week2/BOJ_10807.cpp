#include <iostream>

using namespace std;

int main(){
    int n,a,c=0;
    cin >> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin >> arr[i]; 
    }
    cin >> a;
    for (int i=0;i<n;i++){
        if(arr[i]==a){
            c +=1;
        }
    }
    cout << c;
}