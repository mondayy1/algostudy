#include <iostream> <vector>
using namespace std;
int main(){
    int N,v,v_num = 0, temp;
    vector<int> A;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> temp;
        A.emplace_back(temp);
    }
    cin >> v;
    for (int j = 0; j < N; j++){
        if(A[j] == v) v_num++;
    }
    cout << v_num;
    return 0;
}