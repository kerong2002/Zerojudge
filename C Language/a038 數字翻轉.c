#include<stdio.h>
int main()
{
    long long int in=0;
    while (scanf("%d",&in)!=EOF)
    {
        if (in==0 )
        {
            printf("0");
        }
        while (in%10==0&&in)
        {
            in/=10;
        }
        while (in)
        {
            printf("%d",in%10);
            in/=10 ;
        }
        printf("\n");
    }
    return 0;
}
