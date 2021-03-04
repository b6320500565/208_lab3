#include <stdio.h>
int main()
{
    int a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4,d1,d2,d3,d4,e1,e2,e3,e4;
    scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
    int a=a1+a2+a3+a4;
    scanf("%d %d %d %d",&b1,&b2,&b3,&b4);
    int b=b1+b2+b3+b4;
    scanf("%d %d %d %d",&c1,&c2,&c3,&c4);
    int c=c1+c2+c3+c4;
    scanf("%d %d %d %d",&d1,&d2,&d3,&d4);
    int d=d1+d2+d3+d4;
    scanf("%d %d %d %d",&e1,&e2,&e3,&e4);
    int e=e1+e2+e3+e4;
    if(a>b&&a>c&&a>d&&a>e){
        printf("1 ");
        printf("%d",a);
    }
    else if(b>a&&b>c&&b>d&&b>e){
        printf("2 ");
        printf("%d",b);
    }
    else if(c>a&&c>b&&c>d&&c>e){
        printf("3 ");
        printf("%d",c);
    }
    else if(d>a&&d>b&&d>c&&d>e){
        printf("4 ");
        printf("%d",d);
    }
    else if(e>a&&e>b&&e>c&&e>d){
        printf("5 ");
        printf("%d",e);
}
}
