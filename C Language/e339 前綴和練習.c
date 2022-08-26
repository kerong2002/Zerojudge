#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        long long int *A=(long long int *)calloc(n,sizeof(long long int));
        long long int *B=(long long int *)calloc(n,sizeof(long long int));
        for(int x=0;x<n;x++){
            scanf("%lld",&A[x]);
            if(x==0){
                B[x]=A[x];
            }
            else{
                B[x]=A[x]+B[x-1];
            }
            printf("%lld ",B[x]);
        }
        puts("");
        free(A);
        free(B);
    }
    return 0;
}
