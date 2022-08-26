#include<stdio.h>
#include<string.h>
int main(){
    char list[1][9999]={'\0'};
    scanf("%[^\n]%*c",&list[0]);
    char divide[]=" ";
    list[0][0]-=32;
    for(int x=0;x<strlen(list[0]);x++){
        if(list[0][x]==' '){
            list[0][x+1]-=32;
        }
    }
    int *find=strtok(list,divide);

    while(find){
        printf("%s\n",find);
        find=strtok(NULL,divide);
    }
    return 0;
}
