#include <iostream>
using namespace std;

int main(void){
    int Num = 0;
    int sum = 0;
    int Multiplication = 0;
    int result = 0;
    std::cin >> Num;

    sum = Num + 1;

    if(Num % 2 != 0) {
        Multiplication = (Num / 2) + 1;
        result = sum * Multiplication;
        sum = sum /2;
        result = result - sum;
    }
    else {
        Multiplication = (Num / 2);
        result = sum * Multiplication;
    }
    cout << result;

    return 0;
}
// 가우스 계산법 수식 코드로 만들어 봄