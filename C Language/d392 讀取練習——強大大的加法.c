#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<memory.h>
int main(){
    char list[99999]={'\0'};
    while(scanf("%[^\n]%*c",list)!=EOF){
        char  *set=" ";
        char *pick=strtok(list,set);
        int answer=0;
        while(pick!=NULL){
            answer+=atoi(pick);
            pick=strtok(NULL,set);
        }
        printf("%d\n",answer);
        memset(list,'\0',sizeof(char)*9999);
    }
    return 0;
}
