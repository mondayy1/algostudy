#include <iostream>
#include <vector>

int main(){
    std::vector<int> baskets;
    int n;
    int m;
    int begin, end;
    int ballNumber;

    std::cin >> n >> m;
    
    baskets.resize(n, 0);
    for(int i=0;i<m;i++){
        std::cin >> begin >> end >> ballNumber;
        for(int current = begin-1; current<end;current++)
            baskets[current] = ballNumber;
    }

    for(int i=0;i<n;i++)
        std::cout<<baskets[i]<< ' ';
    return 0;
}