#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a,const void *b){
    return (*(int *)a-*(int *)b);
}
int main(){
    int N;
    while(scanf("%d",&N)!=EOF){
        int *list=(int *)calloc(N,sizeof(int));
        for(int x=0;x<N;x++){
            scanf("%d",&list[x]);
        }
        qsort(list,N,sizeof(int),cmp);
        for(int x=0;x<N;x++){
            printf("%d ",list[x]);
        }
        puts("");
        int done=1;
        for(int x=N-1;x>=0;x--){
            if(done==1){
                printf("%d ",list[x]);
            }
            else{
                done=1;
            }
            if(x>0 && list[x]==list[x-1]){
                done=0;
            }
        }
        free(list);
    }
    return 0;
}
