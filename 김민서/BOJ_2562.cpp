#include <iostream>
using namespace std;

int main(){
int num[9];
for(int i=0;i<9;i++){
    cin>>num[i];
}

int max=-1;
int maxindex;
for(int i=0;i<9;i++){
    if(num[i]>max){
        max=num[i];
        maxindex=i;
    }
}

cout<<max<<"\n";
cout<<maxindex+1;
}