#include<stdio.h>
long long int N,M;
long long int dfs(long long int N){
    if((N>>1)<M){   //((N/2)<M)
        return 1;
    }
    if(N&1){        //N%2==1，奇數
        return dfs((N+2)>>1)+dfs((N-1)>>1);
    }
    else{           //兩堆
        return dfs(N>>1)<<1;
    }

}
int main(){
    while(scanf("%lld%lld",&N,&M)!=EOF){
        if(N<M){
            printf("0\n");
        }
        else{
            printf("%lld\n",dfs(N));
        }
    }
    return 0;
}
