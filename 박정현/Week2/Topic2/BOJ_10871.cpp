#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, x;
    int temp;
    vector<int> numbers;

    cin >> n >> x;

    for(int i=0;i<n;i++){
        cin >> temp;
        if(temp<x)
            numbers.emplace(numbers.end(), temp);
    }
    
    for(auto& i: numbers)
        cout << i << ' ';
    return 0;
}