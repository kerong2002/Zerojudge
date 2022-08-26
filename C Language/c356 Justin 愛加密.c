#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char list[5005];
    char ans[5005];
    scanf("%d%*c",&n);
    for(int x=0;x<n;x++){
        fgets(list,n+2,stdin);
        ans[x]=list[0];
    }
    for(int x=0;x<n;x++){
        printf("%c",ans[x]);
    }
//    puts(ans);
    return 0;
}
