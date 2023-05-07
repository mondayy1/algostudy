#include <stdio.h>

int main(void){

    int sum,n,a,b,res;
    res=0;

    scanf("%d\n",&sum);
    scanf("%d\n",&n);

    for(int i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        res+=a*b;
    }

    if(sum==res) printf("Yes");
    else printf("No");

    return 0;
}