#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    vector<int> numbers;
    cin >> N;

    numbers.resize(N);
    for(int i=0;i<N;i++){
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    for(int i: numbers){
        cout << i <<endl;
    }
    return 0;
}