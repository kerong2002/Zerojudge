#include<stdio.h>
int main(){
    int year,n;
    while(scanf("%d",&n)!=EOF){
        for(int x=0;x<n;x++){
            scanf("%d",&year);
            if(year % 4==0 && year %100!=0 || year %400 ==0){
                printf("Case %d: a leap year\n",x+1);
            }
            else{
                printf("Case %d: a normal year\n",x+1);
            }
        }
    }

    return 0;
}
