#include <iostream>
using namespace std;

int main(){
    int n,m,i,j,k;
    cin >> n >> m;
    int arr[n+1];

    for (int t=1;t<n+1;t++){
        arr[t] = 0;
    }

    for(int x =1;x<m+1;x++){
        cin >> i >> j >> k;
        for (int y = i; y<j+1 ;y++){
            arr[y] = k;
        }
    }
    for(int i =1;i<n+1;i++){

        cout << arr[i] << " ";
        //cout << i;
    }
    
}