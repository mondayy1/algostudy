#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL); 
    ios_base::sync_with_stdio(false);

    int t, c;
    cin >> t;
    int q,d,p,n;
    q = 0; d = 0; p = 0;n = 0;
    while(t--){
        cin >> c;
        while(c>=25){
            c-=25;
            q++;
        }
        while(c>=10){
            c-=10;
            d++;
        }
        while(c>=5){
            c-=5;
            p++;
        }
        while(c>=1){
            c-=1;
            n++;
        }
        cout << q << " " << d << " " << p << " " << n << "\n";
        q = 0; d = 0; p = 0;n = 0;
    }
    
}

