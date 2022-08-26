#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int sum=0;
        for(int x=1;x<n;x++){
            if(n%x==0){
                sum+=x;
            }
        }
        if(sum>n){
            printf("盈數\n");
            continue;
        }
        else if(sum<n){
             printf("虧數\n");
             continue;
        }
        else{
            printf("完全數\n");
            continue;
        }
    }

    return 0;
}
