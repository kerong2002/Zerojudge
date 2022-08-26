#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        long long int *sum=(long long int*)calloc(n+1,sizeof(long long int));
        int save,ask;
        scanf("%d",&save);
        sum[1]=save;
        for(int x=2;x<=n;x++){
            scanf("%d",&save);
            sum[x]=sum[x-1]+save;
        }
        scanf("%d",&ask);
        while(ask--){
            int i,r;
            scanf("%d %d",&i,&r);
            printf("%lld\n",sum[r]-sum[i-1]);
        }
        free(sum);
    }
    return 0;
}
