#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int arry[1000]={0};
        for(int i=0;i<n;i++){
            scanf("%d",&arry[i]);
        }
        for(int x=0;x<n;x++){
            int hold=0;
            for(int y=x+1;y<n;y++){
                if(arry[x]%10>arry[y]%10){
                    hold=arry[y];
                    arry[y]=arry[x];
                    arry[x]=hold;
                }
                if(arry[x]%10==arry[y]%10){
                    if(arry[x]/10<arry[y]/10){
                        hold=arry[y];
                        arry[y]=arry[x];
                        arry[x]=hold;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            printf("%d ",arry[i]);
        }
        printf("\n");
    }


    return 0;
}
