#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a,const void *b){
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
        for(int x=0;x<n;x++){
            printf("%d ",list[x]);
        }
        printf("\n");
        free(list);
    }
    return 0;
}
