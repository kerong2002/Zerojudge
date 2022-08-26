#include<stdio.h>
#include<stdlib.h>
int main(){
    char ans[5]={'\0'};
    while(scanf("%s",ans)!=EOF){
        int time;
        scanf("%d",&time);
        for(int x=0;x<time;x++){
            char guess[5]={'\0'};
            scanf("%s",guess);
            int A=0,B=0;
            for(int y=0;y<4;y++){
                for(int x=0;x<4;x++){
                    if(x==y && ans[y]==guess[x]){
                        A+=1;
                    }
                    else if(x!=y && ans[y]==guess[x]){
                        B+=1;
                    }
                }
            }
            printf("%dA%dB\n",A,B);
        }
    }
    return 0;
}
