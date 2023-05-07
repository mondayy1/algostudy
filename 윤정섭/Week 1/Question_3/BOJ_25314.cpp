#include <iostream>
using namespace std;

int main(void) {

    int Num = 0;
    int division = 0;
    std::cin >> Num;

    division = Num / 4;
    for (int long_print_count = 0; long_print_count < division; long_print_count++)
        std::cout << "long ";

    cout << "int";

    return 0;
}