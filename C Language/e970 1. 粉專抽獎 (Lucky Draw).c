#include<stdio.h>
#include<stdlib.h>
int main(){
    int N;
    while(scanf("%d",&N)!=EOF){
        int *list=(int *)calloc(N,sizeof(int));
        for(int x=0;x<N;x++){
            scanf("%d",&list[x]);
        }
        int B=list[N-1];
        int random=0;
        for(int x=0;x<N;x++){
            if((x+1)%B==1){
                random+=list[x];
            }
        }
        if((random%N)==0){
            printf("%d %d\n",N,list[N-1]);
        }
        else{
            printf("%d %d\n",random%N,list[random%N-1]);
        }

    }
    return 0;
}
