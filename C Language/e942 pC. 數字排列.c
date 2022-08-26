#include<stdio.h>
#include<stdbool.h>
int n;
bool appear[9];
long int ans[9];
void sort(long int list[]){
    for(int x=0;x<n;x++){
        long int hold;
        for(int y=x+1;y<n;y++){
            if(list[x]>list[y]){
                hold=list[x];
                list[x]=list[y];
                list[y]=hold;
            }
        }
    }
    return;
}
void permutation(long int list[],int n,int cnt){
    if(n==cnt){
        for(int x=0;x<n;x++){
            printf("%ld ",ans[x]);
        }
        printf("\n");
        return;
    }
    else{
        for(int x=0;x<n;x++){
            if(appear[x]==false){
                ans[cnt]=list[x];
                appear[x]=true;
                permutation(list,n,cnt+1);
                appear[x]=false;
            }

        }
    }
}
int main(){
    scanf("%d",&n);
    long int *list=(long int *)calloc(n,sizeof(long int));
    for(int x=0;x<n;x++){
        scanf("%ld",&list[x]);
    }
    sort(list);
    permutation(list,n,0);
    free(list);
    return 0;
}
