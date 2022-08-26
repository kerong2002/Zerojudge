#include<stdio.h>
#include<stdlib.h>
#define max(a,b) ((a>=b)?a:b)
int dp[10001];
int main(){
    int n,wight;
    while(scanf("%d",&n)!=EOF){
        int **list=(int **)calloc(100,sizeof(int*));
        for(int y=0;y<100;y++){
            list[y]=(int *)calloc(2,sizeof(int));
        }
        for(int y=0;y<n;y++){
            scanf("%d%d",&list[y][0],&list[y][1]);
        }
        scanf("%d",&wight);
        for(int x=0;x<n;x++){
            for(int y=wight;y>=list[x][0];y--){
                dp[y]=max(dp[y],dp[y-list[x][0]]+list[x][1]);
//                for(int t=0;t<=5;t++){
//                    printf("%d ",dp[t]);
//                }
//                puts("");
//                printf("(dp[%d],%d (%d)max=%d)\n",y,y-list[x][0],dp[y-list[x][0]]+list[x][1],dp[y]);
            }
        }
        printf("%d\n",dp[wight]);
        for(int y=0;y<100;y++){
            free(list[y]);
        }
        free(list);
        memset(dp,0,10001*sizeof(int));
    }
    return 0;
}
