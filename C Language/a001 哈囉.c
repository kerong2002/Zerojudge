#include<stdio.h>
int main()
{
    char string[100];
    while(scanf("%s",string)!=EOF)
    {
        printf("hello, ");
        printf("%s\n",string);
    }
    return 0;
}
