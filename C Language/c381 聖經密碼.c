#include <stdio.h>
#include <string.h>

char list[60000010],*input;

int main(){
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF){
        if(n==0 && m==0){
            break;
        }
        getchar();
        input=list;
        int length=0;
        for(int x=0;x<n;x++){
            gets(input);
            input+=strlen(input);
        }
        for(int x=0;x<m;x++){
            scanf("%d",&n);
            printf("%c",list[n-1]);
        }
        puts("");
    }
    return 0;
}
