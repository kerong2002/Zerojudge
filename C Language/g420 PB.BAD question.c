#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int *damage=(int *)calloc(n,sizeof(int));
    int *hp=(int *)calloc(n,sizeof(int));
    for(int x=0;x<n;x++){
        scanf("%d",&damage[x]);
    }
    for(int x=0;x<n;x++){
        scanf("%d",&hp[x]);
    }
    int cnt=1;
    while(m>=0){
        m-=damage[cnt-1];
        if(m<0){
            break;
        }
        m+=hp[cnt-1];
        cnt+=1;
    }
    printf("%d\n",cnt);
    free(damage);
    free(hp);
    return 0;
}
