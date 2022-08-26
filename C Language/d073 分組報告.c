#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    bool i,j;
    scanf("%d",&n);
    i=n%3;
    printf("%d",(n/3)+i);
    return 0;
}
