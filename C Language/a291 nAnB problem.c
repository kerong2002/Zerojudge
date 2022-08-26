#include<stdio.h>
int ans[4];
int guess[4];
int done[4];
void check(int ans[],int guess[]){
    int A_K=0;
    int B_K=0;
    int done[4];
    for(int s=0;s<4;s++) done[s]=ans[s];
    for(int i=0;i<4;i++){
        if(ans[i]==guess[i]){
            A_K++;
            done[i]=-1;
            guess[i]=-1;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(guess[i]==ans[j] && guess[i]!=-1 && done[j]!=-1){
                B_K++;
                guess[i]=-1;
                done[j]=-1;
            }
        }
    }
    printf("%dA%dB\n",A_K,B_K);
}
int main(){
    int time;
    while(scanf("%d %d %d %d",&ans[0],&ans[1],&ans[2],&ans[3])!=EOF){
        scanf("%d",&time);
        for(int i=0;i<time;i++){
            scanf("%d %d %d %d",&guess[0],&guess[1],&guess[2],&guess[3]);
            check(ans,guess);
        }
    }
    return 0;
}
