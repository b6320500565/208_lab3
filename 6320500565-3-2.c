#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p[48]={0},x=0,y=0,m=0,t=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&x,&y);
        p[x-1] =p[x-1] + y;
    }
    for (int i=0;i<48;i++)
    {
        if(p[i]>m)
        {
            m=p[i];
            t=i+1;
        }
    }
    printf("%d %d",t,m);
}
