#include <iostream>
using namespace std;

int main()
{
    int a, b;
    double c;
    cin >> a >> b;
    c = (double)a / b;
    cout.precision(10);
    cout << c;
    return 0;
}