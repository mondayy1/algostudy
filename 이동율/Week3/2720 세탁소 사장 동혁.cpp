#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int price;
        cin>>price;
        int q=0,d=0,n=0,p=0;
        while(1){
            if(price<25) break;
            price-=25;
            q++;
        }
        while(1){
            if(price<10) break;
            price-=10;
            d++;
        }
        while(1){
            if(price<5) break;
            price-=5;
            n++;
        }
        while(1){
            if(price<1) break;
            price-=1;
            p++;
        }
        cout<<q<<" "<<d<<" "<<n<<" "<<p<<"\n";
    }
    return 0;
}
