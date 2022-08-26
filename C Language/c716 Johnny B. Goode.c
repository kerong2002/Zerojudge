#include<stdio.h>
int main(){
    char name[99];
    scanf("%[^\n]%*c",name);
    printf("Go, %s, go go",name);
    return 0;
}
