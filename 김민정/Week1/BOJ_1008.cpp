#include <iostream>
using namespace std;

int main()
{
    cout.precision(10); //소수점 9자리를 표현할 수 있어야한다
    cout << fixed;
    double a,b;
    cin >> a >> b;
    
    cout << a/b << endl;
}