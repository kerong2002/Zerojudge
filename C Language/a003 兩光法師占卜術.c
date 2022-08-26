#include<stdio.h>
int main()
{
    int M,D;
    int A;

    while(scanf("%d%d",&M,&D)!=EOF)
    {
         A=0;
         A=(M*2+D)%3;

         if(A==0)
            printf("普通\n");
         else if(A==1)
            printf("吉\n");
         else if(A==2)
            printf("大吉\n");
    }
    return 0;
}
