#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
    int N,T;
    scanf("%d %d",&N,&T);
    int *jump=(int *)calloc(N,sizeof(int));
    int *cake=(int *)calloc(N,sizeof(int));
    bool *check=(bool *)calloc(N,sizeof(bool));
    int eat=0;
    for(int x=0;x<N;x++){
        scanf("%d",&jump[x]);
    }
    for(int x=0;x<N;x++){
        scanf("%d",&cake[x]);
    }
    while(check[T]==false){
        eat+=cake[T];
        check[T]=true;
        T=jump[T];
    }
    printf("%d\n",eat);
    free(jump);
    free(cake);
    free(check);
    return 0;
}
