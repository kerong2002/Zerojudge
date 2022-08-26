
#include<stdio.h>
int main(){
    int year;
    while(scanf("%d",&year)!=EOF){
        if(!year)break;
        if(year % 4==0 && year %100!=0 || year %400 ==0){
            printf("a leap year\n");

        }else{
            printf("a normal year\n");
        }
    }
    return 0;
}
