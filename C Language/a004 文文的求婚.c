#include<stdio.h>
int main()
{
    int year;

    while(scanf("%d",&year)!=EOF)
    {
         if (year%400==0)
            printf("閏年\n");
         else if (year%100==0)
            printf("平年\n");
         else if (year%4==0)
            printf("閏年\n");
         else
            printf("平年\n");
    }
    return 0;
}
