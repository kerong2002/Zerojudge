#include<stdio.h>
#include<string.h>
int main(){
    char list[50][99];
    int count=0;
    while(scanf("%s",&list[count])!=EOF){
        count++;
    }
    for(int x=0;x<count;x++){
        printf("%s\n",list[x]);
    }
    return 0;
}
