#include<stdio.h>
#include<string.h>
int main(){
    char list[1][999]={'\0'};
    scanf("%s",&list[0]);
    int size=strlen(list);
    int run=size;
    int i=0;
    while(run--){
        for(int j=0;j<size;j++){
            if(i+j>=size){
               printf("%c",list[0][i+j-size]);
            }
            else{
               printf("%c",list[0][i+j]);
            }
        }
        printf("\n");
        i+=1;
    }
    return 0;
}
