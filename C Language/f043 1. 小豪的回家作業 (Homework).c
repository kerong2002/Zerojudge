#include<stdio.h>
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        if((a-b)==0){
            if((a-3)<=b-(a-3)){
                printf("%d+%d=%d\n",a-3,b-(a-3),a);
            }
            else{
                printf("%d+%d=%d\n",b-(a-3),a-3,a);
            }
            continue;
        }
        if((a-b)<=b){
            printf("%d+%d=%d\n",a-b,b,a);
        }
        else{
            printf("%d+%d=%d\n",b,a-b,a);
        }
    }
    return 0;
}
