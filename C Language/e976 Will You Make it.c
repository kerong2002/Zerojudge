#include<stdio.h>
int main(){
    int H,M,S;
    while(scanf("%d %d %d",&H,&M,&S)!=EOF){
        if(H*S>=M){
            printf("%d %d %d. I will make it!\n",H,M,S);
        }
        else{
            printf("%d %d %d. I will be late!\n",H,M,S);
        }
    }
    return 0;
}
