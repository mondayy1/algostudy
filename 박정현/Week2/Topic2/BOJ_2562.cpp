#include <iostream>

int main(){
    int number;
    int maxNumber=0;
    int index;
    
    for(int i=0;i<9;i++){
        std::cin >> number;
        if(maxNumber < number){
            maxNumber = number;
            index = i+1;
        }
    }

    std::cout<< maxNumber << '\n' << index;
    return 0;
}