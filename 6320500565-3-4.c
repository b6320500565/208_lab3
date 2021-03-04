#include <stdio.h>
int main()
{
    int N,i,t=1;
    scanf("%d",&N);
    for(i=2; i<N; i++)
    {
        if(N%i==0)
        {
            N=N-1
            t=2;
            break;
        }
    }
    if(t==1) printf("Prime !!");
}

