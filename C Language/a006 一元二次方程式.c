#include<math.h>
#include<stdio.h>
int main ()
{
    int a,b,c;
    int x1,x2;
    int s;
    scanf("%d%d%d",&a,&b,&c);
    s = b*b-4*a*c;
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    if (s>0)
    {
        printf("Two different roots x1=%d , x2=%d",x1,x2);
    }
    else if (s==0)
    {
        printf("Two same roots x=%d",x1);
    }
    else if (s<0)
    {
        printf("No real root");
    }
    return 0 ;
}
