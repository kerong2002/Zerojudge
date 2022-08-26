#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char data[7][99]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    char find[99]={'\0'};
    int nextday;
    while(scanf("%s %d",find,&nextday)!=EOF){
        int save=nextday%7;
        for(int x=0;x<7;x++){
            if(strcmp(data[x],find)==0){
                printf("%s\n",data[(save+x)%7]);
            }
        }
    }
    return 0;
}
