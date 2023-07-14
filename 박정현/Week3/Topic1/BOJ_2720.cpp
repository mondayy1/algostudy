#include <iostream>
#include <vector>

using namespace std;

enum Coin{
    Quarter = 25,
    Dime = 10,
    Nickel = 5,
    Penny = 1
};

int coinSelect(int reaminMoney, Coin change){
    cout<<reaminMoney/change<<' ';
    return reaminMoney%change;
}

int main(){
    ios_base::sync_with_stdio(false); std::cin.tie(0);
    int T;
    int money;
    cin >> T;
    for(;T>0; T--){
        cin >> money;
        money = coinSelect(money, Quarter);
        money = coinSelect(money, Dime);
        money = coinSelect(money, Nickel);
        money = coinSelect(money, Penny);
        cout<< '\n';
    }

    return 0;
}