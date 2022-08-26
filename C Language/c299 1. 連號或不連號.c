#include<stdio.h>
#include<stdlib.h>
int cmp(const void * a,const void *b){
    return (*(int *)a-*(int *)b);
}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int *list=(int *)calloc(n,sizeof(int));
        for(int x=0;x<n;x++){
            scanf("%d",&list[x]);
        }
        qsort(list,n,sizeof(int),cmp);
        int d=1;
        int ok=1;
        for(int x=1;x<n;x++){
            if(list[x]-list[x-1]!=d){
                ok=0;
                break;
            }
        }
        if(ok){
            printf("%d %d yes\n",list[0],list[n-1]);
        }
        else{
            printf("%d %d no\n",list[0],list[n-1]);
        }
    }
    return 0;
}
