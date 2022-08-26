#include<stdio.h>
int main(){
    char line[99];
    scanf("%[^\n]%*c",line);
    printf("%s %s",line ,line);
    return 0;
}
