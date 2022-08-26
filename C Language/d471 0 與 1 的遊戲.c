#include<stdio.h>
#include<string.h>
char list[15];
int n;
void dfs(int x){
    if(x==n){
        puts(list);
    }
    else{
        list[x]='0';
        dfs(x+1);
        list[x]='1';
        dfs(x+1);
    }
}
int main(){
    while(scanf("%d",&n)!=EOF){
        dfs(0);
        memset(list,'\0',15*sizeof(char));
    }
    return 0;
}
