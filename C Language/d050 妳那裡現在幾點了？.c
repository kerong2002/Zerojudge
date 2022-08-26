#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    printf("%d",(year+9>=24)?year-24+9:year+9);
    return 0;
}
