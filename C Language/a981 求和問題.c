#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool have=false;
int n,m,hold;
void sort(int *list){
    for(int x=0;x<n;x++){
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
int ans[99];
bool appear[99];
void permutation(int *list,int cnt,int sum,int run){
    if(sum==m){
        for(int x=0;x<run;x++){
            printf("%d ",ans[x]);
        }
        printf("\n");
        have = true;
        return;
    }
    else{
        for(int x=0;x<n;x++){
            if(appear[x]==false && sum+list[x]<=m && list[x]>=ans[cnt-1]){
                ans[cnt]=list[x];
                sum+=ans[cnt];
                appear[x]=true;
                permutation(list,cnt+1,sum,run+1);
                sum-=ans[cnt];
                if(list[x]!=ans[cnt-1]){
                    appear[x]=false;
                }
            }
        }
    }

}
int main(){
    scanf("%d %d",&n,&m);
    int *list=(int *)calloc(n,sizeof(int));
    for(int x=0;x<n;x++){
        scanf("%d",&list[x]);
    }
    sort(list);
    permutation(list,0,0,0);
    if(have==false){
        printf("-1\n");
    }
    free(list);
    return 0;
}
/*
10 100
10 20 40 30 50 80 60 70 5 15
*/
