#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF){
        int amount=0;
        for(int x=n;x<=m;x++){
            int size=0,count=x,save=x;
            float sum=0;
            while(count>0){
                count/=10;
                size+=1;
            }
            while(save>0){
                sum+=pow(save%10,size);
                save/=10;
            }
            if(sum==x){
                amount+=1;
                printf("%.0f ",sum);
            }
        }
        if(amount==0){
            printf("none");
        }
        printf("\n");
    }
    return 0;
}
