#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    int A = 0;
    int B = 0;
    cin >> A;
    cin >> B;
    std::cout << setprecision(10) << (double)A / B;
    return 0;
}

//#include<iomanip>에서 setprecision()으로 출력할 소수점 자리 수를 설정 가능하다.
