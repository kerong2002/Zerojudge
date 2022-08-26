#include<stdio.h>
int main ()
{
    int i,j;
    int sum;

    while(scanf("%d %d",&i,&j)!=EOF)
    {
        sum=0;
        sum=i+j;
        printf("%d\n",sum);
    }
    return 0;
}
