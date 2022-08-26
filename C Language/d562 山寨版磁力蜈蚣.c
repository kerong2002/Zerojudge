#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int *list=(int *)calloc(n,sizeof(int));
        for(int x=0;x<n;x++){
            scanf("%d",&list[x]);
        }
        int range=n;
        for(int x=0;x<=n/2;x++){
            int cnt=0;
            for(int t=x;t<n;t++){
                printf("%d ",list[t]);
                cnt++;
                if(cnt==range){
                    range-=1;
                    break;
                }
            }
            puts("");
            if(range==0){
                break;
            }
            cnt=0;
            for(int t=n-1-x;t>=0;t--){
                printf("%d ",list[t]);
                cnt++;
                if(cnt==range){
                    range-=1;
                    break;
                }
            }
            puts("");
            if(range==0){
                break;
            }
        }
        free(list);
    }
    return 0;
}
