#include <iostream>

int main(){
    int h, m;
    std::cin >> h >> m;

    if(m<45){
        h--;
        m += 60;
    }
    if(h<0)
        h = 23;

    m = (m-45);

    std::cout<< h << ' ' << m;

    return 0;
}