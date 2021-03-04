#include <stdio.h>
int main(){
    int k,x = 2,n=0;
    scanf("%d",&k);
    while(k != 1){
        while(k % x == 0){
            printf("%d\n", x);
            k = k / x;
            n++;
        }
        x++;
    }
    if(n==3)
    {
        printf("is a Lucky Number",k);
    }
    if(n!=3)
    {
        printf("is not a Lucky Number",k);
    }
}

