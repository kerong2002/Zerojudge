#include<stdio.h>
#include<string.h>
int main(){
    char input[20000]={'\0'};
    while(scanf("%s",input)!=EOF){
        int total=0;
        for(int x=0;x<strlen(input);x++){
            total+=input[x]-'0';
        }
        if(total%3==0){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}
