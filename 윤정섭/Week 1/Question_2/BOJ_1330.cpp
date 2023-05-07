#include <iostream>
using namespace std;

int main(void) {
    int A = 0;
    int B = 0;
    cin >> A;
    cin >> B;
    if (A > B) std::cout << ">";
    else if (A < B) std::cout << "<";
    else if (A == B) std::cout << "==";
    return 0;
}