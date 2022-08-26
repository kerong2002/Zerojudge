#include<stdio.h>
#include<math.h>
#include<limits.h>
int prime[5000];
int cnt=1;
void pick(){
    prime[0]=2;
    for(int x=3;x<sqrt(INT_MAX);x++){
        for(int y=0;y<cnt;y++){
            if(x%prime[y]==0){
                break;
            }
            if(y==cnt-1){
                prime[cnt]=x;
                cnt+=1;
            }
        }
    }
}
int main(){
    pick();
    int x;
    while(scanf("%d",&x)!=EOF){
        int total=0;
        int run=0;
        int found=0;
        while(x>1){
            if(run>=cnt){
                total+=x;
                break;
            }
            else if(x%prime[run]==0){
                total+=prime[run];
                x/=prime[run];
            }
            else{
                run+=1;
            }
        }
        printf("%d\n",total);
    }
    return 0;
}
