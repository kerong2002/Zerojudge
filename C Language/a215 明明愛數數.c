#include<stdio.h>
int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF){
    int sum=0;
        for(int x=0;x<10000;x++){
            sum+=n+x;
            if(sum>m){
                printf("%d\n",(x+1));
                break;
            }
        }
    }
    return 0;
}
