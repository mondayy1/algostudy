#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> piece;
    for(int i=0;i<6;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }
    piece.push_back(1);
    piece.push_back(1);
    piece.push_back(2);
    piece.push_back(2);
    piece.push_back(2);
    piece.push_back(8);
    
    for(int i=0;i<6;i++){
        cout<<piece[i]-v[i]<<" ";
    }
    return 0;
}
