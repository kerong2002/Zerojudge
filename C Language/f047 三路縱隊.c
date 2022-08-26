#include<stdio.h>
#include<string.h>
int main(){
    char line[200][200]={'\0'};
    int count=1;
    while(scanf("%s",&line[count])!=EOF){
        count+=1;
    }
    for(int i=1;i<=count;i++){
        if((i+2)%3==0){
            printf("%s ",line[i]);
        }
    }
    printf("\n");
    for(int i=1;i<=count;i++){
        if((i+1)%3==0){
            printf("%s ",line[i]);
        }
    }
    printf("\n");
    for(int i=1;i<=count;i++){
        if((i)%3==0){
            printf("%s ",line[i]);
        }
    }
    printf("\n");
    return 0;
}
