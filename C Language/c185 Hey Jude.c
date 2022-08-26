#include<stdio.h>
int main(){
    char name[99];
    scanf("%[^\n]%*c",name);
    printf("Hey %s",name);
    return 0;
}
