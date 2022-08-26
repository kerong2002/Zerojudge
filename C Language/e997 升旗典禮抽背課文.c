#include<stdio.h>
#include<string.h>
int main(){
    char listN[99][99];
    char save[99][99];
    int number;
    int cnt=0;
    char *divide=" ";
    fgets(listN,10000,stdin);
    int size=strlen(listN);
    char *take=strtok(listN,divide);
    scanf("%d",&number);
    while(take){
        strcpy(save[cnt],take);
        take=strtok(NULL,divide);
        cnt+=1;
    }
    printf("%s",save[cnt-number]);
    return 0;
}
