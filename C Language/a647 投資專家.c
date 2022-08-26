#include<stdio.h>
int main(){
    int n,m,p;
    double profit;
    while(scanf("%d",&n)!=EOF){
        for(int x=0;x<n;x++){
            scanf("%d %d",&m,&p);
            profit=(double)((p-m)*100)/m;
            if (profit > 0) profit += 0.00001;
            if (profit < 0) profit -= 0.00001;
            if(profit<=-7 || profit>=10)
                printf("%6.2f%% dispose\n",profit);
            else
                printf("%6.2f%% keep\n",profit);
        }
    }
    return  0;
}
