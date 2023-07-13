#include <iostream>
using namespace std;

int main(){

    int n,m,tmp;
    cin>>n>>m;
    int a[100][100]={0,};
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin>>tmp;
                a[j][k]+=tmp;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }

}