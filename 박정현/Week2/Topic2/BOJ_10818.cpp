#include <iostream>
#include <vector>

int main(){
    int n;
    int maxNumber = -200000, minNumber=2000000;
    int number;

    std::cin >> n;
    for(int i=0;i<n;i++){
        std::cin >> number;
        if(maxNumber < number)
            maxNumber = number;
        if(number < minNumber)
            minNumber = number;
    }
    std::cout << minNumber << ' ' << maxNumber;
    return 0;
}