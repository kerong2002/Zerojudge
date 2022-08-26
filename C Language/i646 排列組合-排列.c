#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int n;
char english[10]={"abcdefg"};
bool appear[10];
char answer[10];
void permutation(cnt){
    if(n==cnt){
        for(int x=0;x<cnt;x++){
            printf("%c",answer[x]);
        }
        printf("\n");
        return;
    }
    else{
        for(int x=0;x<n;x++){
            if(appear[x]==false){
                answer[cnt]=english[x];
                appear[x]=true;
                permutation(cnt+1);
                appear[x]=false;
            }

        }
    }
}
int main(){
    while(scanf("%d",&n)&&n){
        permutation(0);
    }
    return 0;
}
