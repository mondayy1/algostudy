#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
  int i,find,cnt = 0;
  cin>> i;
  for(int j = 0; j<i; j++){
    int k;
    cin>> k;
    v.push_back(k);
  }
  cin>> find;
  for(int j =0; j<i; j++){
    if(find == v.at(j))
      cnt++;
  }
  cout<<cnt;
}