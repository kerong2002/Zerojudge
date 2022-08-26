#include<stdio.h>
#include<stdlib.h>
int main(){
    int N;
    scanf("%d",&N);
    int *list=(int *)calloc(N,sizeof(int));
    for(int x=N-1;x>=0;x--){
        scanf("%d",&list[x]);
    }
    for(int x=0;x<N;x++){
        printf("%d ",list[x]);
    }
    free(list);
    return 0;
}
