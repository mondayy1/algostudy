#include <iostream>
using namespace std;

int main(void) {
    int Test_Score = 0;
    
    cin >> Test_Score;
    
    if (Test_Score <= 100 && Test_Score >= 90) std::cout << "A";
    else if (Test_Score <= 89 && Test_Score >= 80) std::cout << "B";
    else if (Test_Score <= 79 && Test_Score >= 70) std::cout << "C";
    else if (Test_Score <= 69 && Test_Score >= 60) std::cout << "D";
    else std::cout << "F";

    return 0;
}