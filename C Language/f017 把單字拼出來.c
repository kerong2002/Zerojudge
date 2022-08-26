#include<stdio.h>
#include<string.h>
int main(){
    char line[36]={'\0'};
    scanf("%s",line);
    for(int x=0;x<strlen(line);x++){
        if(x!=strlen(line)-1){
            printf("%c-",line[x]);
        }
        else{
            printf("%c",line[x]);
        }
    }
    return 0;
}
