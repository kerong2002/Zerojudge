#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
int main(){
    int stack[100000]={0};
    int top=false;
    int cnt=-1,N;
    scanf("%d",&N);
    while(N--){
        int k;
        scanf("%d",&k);
        switch(k){
            case 1:
                if(cnt==-1){
                    top=true;
                }
                scanf("%d",&stack[++cnt]);
                break;
            case 2:
                if(cnt>0&&top==true){
                    printf("\t%d\n",stack[cnt]);
                }
                else if(cnt==0 &&top==true){
                    printf("\t%d\n",stack[cnt]);
                }
                else{
                    printf("\t-1\n");
                }
                break;
            case 3:
                if(cnt>0){
                    stack[cnt--]=0;
                }
                else if(cnt==0){
                    top=false;
                    stack[cnt--]=0;
                }
                break;
            default:
                printf("error");
                break;
        }
    }
    return 0;
}
