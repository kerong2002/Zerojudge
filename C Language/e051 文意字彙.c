#include<stdio.h>
#include<string.h>
int main(){
    char listN[2000];
    scanf("%s",listN);
    printf("%c",listN[0]);
    for(int x=1;x<strlen(listN)-1;x++){
        printf("_");
    }
    printf("%c",listN[strlen(listN)-1]);
    return 0;
}
