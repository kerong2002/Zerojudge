#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char answer[10]={'\0'};
    char input[10]={'\0'};
    scanf("%s",answer);
    int guess;
    scanf("%d",&guess);
    while(guess--){
        int a=0,b=0;
        scanf("%s",input);
        for(int y=0;y<strlen(answer);y++){
            if(answer[y]==input[y]){
                a+=1;
            }
        }
        for(int y=0;y<strlen(answer);y++){
            for(int x=0;x<strlen(answer);x++){
                if(x==y){
                    continue;
                }
                if(answer[y]==input[x]){
                    b+=1;
                    break;
                }
            }
        }
        printf("%dA%dB\n",a,b);
    }
    return 0;
}

