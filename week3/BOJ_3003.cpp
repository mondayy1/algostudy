#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> check = {1, 1, 2, 2, 2, 8};
    vector<int> input;
    for(int i = 0; i < 6; i++){
        int n;
        cin >> n;
        input.push_back(n);
    }
    for(int j = 0; j < 6; j++){
        input[j] = check[j] - input[j];
        cout << input[j] << " ";
    }

}